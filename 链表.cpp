#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/* 链表节点结构体 */
typedef struct ListNode{
	int val;				// 节点值
	struct ListNode *next;	// 指向下一节点的指针
} ListNode ;
/* 构造函数 */
ListNode *newListNode(int val){
	ListNode *node;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->val = val;
	node->next = NULL;
	return node;
} 
/*在相邻的两个节点 n0 和 n1 之间插入一个新节点 P*/
void insert(ListNode *n0,ListNode *P){
	ListNode *n1 = n0->next;
	P->next = n1;
	n0->next = P;
}
/*尽管在删除操作完成后节点 P 仍然指向 n1 ，
但实际上遍历此链表已经无法访问到 P */
// 注意：stdio.h 占用了 remove 关键词
void removeItem(ListNode *n0){
	if (!n0->next)
		return ;
	// n0->P->n1
	ListNode *P = n0->next;
	ListNode *n1 = P->next;
	n0->next = n1;
	//释放内存
	free(P); 
}
/* 访问链表中索引为 index 的节点 */
ListNode *access(ListNode *head,int index){
	for (int i=0;i<index;i++){
		if (head==NULL)
			return NULL;
		head = head->next;
	}
	return head;
}
/* 在链表中查找值为 target 的首个节点 */
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
