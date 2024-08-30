#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/* ����ڵ�ṹ�� */
typedef struct ListNode{
	int val;				// �ڵ�ֵ
	struct ListNode *next;	// ָ����һ�ڵ��ָ��
} ListNode ;
/* ���캯�� */
ListNode *newListNode(int val){
	ListNode *node;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->val = val;
	node->next = NULL;
	return node;
} 
/*�����ڵ������ڵ� n0 �� n1 ֮�����һ���½ڵ� P*/
void insert(ListNode *n0,ListNode *P){
	ListNode *n1 = n0->next;
	P->next = n1;
	n0->next = P;
}
/*������ɾ��������ɺ�ڵ� P ��Ȼָ�� n1 ��
��ʵ���ϱ����������Ѿ��޷����ʵ� P */
// ע�⣺stdio.h ռ���� remove �ؼ���
void removeItem(ListNode *n0){
	if (!n0->next)
		return ;
	// n0->P->n1
	ListNode *P = n0->next;
	ListNode *n1 = P->next;
	n0->next = n1;
	//�ͷ��ڴ�
	free(P); 
}
/* ��������������Ϊ index �Ľڵ� */
ListNode *access(ListNode *head,int index){
	for (int i=0;i<index;i++){
		if (head==NULL)
			return NULL;
		head = head->next;
	}
	return head;
}
/* �������в���ֵΪ target ���׸��ڵ� */
int find(ListNode *head,int target){
	int index=0;
	while (head){
		if (head->val == target)
			return index;
		head = head->next;
		index++;
	}
	return -1;
}
