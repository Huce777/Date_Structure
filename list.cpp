#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct ListNode{
	int val;
	struct ListNode *next;
	struct ListNode *prev;
} ListNode ;

ListNode *newListNode(int val){
	ListNode *node;
	node = (ListNode*)malloc(sizeof(ListNode));
	node->val = val;
	node->next = NULL;
	node->prev = NULL;
	return node;
}

int main(){
	ListNode* n0 = newListNode(1);
	ListNode* n1 = newListNode(3);
	ListNode* n2 = newListNode(2);
	ListNode* n3 = newListNode(5);
	ListNode* n4 = newListNode(4);
	
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
}

void removeItem(ListNode *n0){
	if (!n0->next)
		return;
	// n0 -> P -> n1
	ListNode *P = n0->next;
	ListNode *n1 = P->next;
	n0->next = n1;
	
	free(P); 
}

ListNode *access(ListNode *head,int index){
	for (int i=0;i<index;i++){
		if (head == NULL)
			return NULL;
		head = head->next;
	}
	return head;
}

void insert(ListNode *n0,ListNode *P){
	ListNode *n1 = n0->next;
	P->next = n1;
	n0->next = P;
}

int find(ListNode *head,int target){
	int index = 0;
	while (head){
		if (head->val == target)
			return index;
		head = head->next;
		index++;
	}
	return -1;
}
