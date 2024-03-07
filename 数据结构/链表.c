#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} Node; // 为 struct Node 取一个叫 Node 的别名

void InsertEnd(int newData, Node *head) { // 在末尾插入节点
	// 1. 构造一个节点（作为新的末尾节点）
	Node *newEnd = (Node *) malloc(sizeof(Node));
	newEnd->data = newData;
	newEnd->next = NULL;
	
	// 2. 在结尾插入该节点
	Node *goOldEnd = head;
		// 不能随意修改 head 的值，它指向链表的开头节点，用于定位链表
	while (goOldEnd->next != NULL) {
		goOldEnd = goOldEnd->next;
	} // 定位到末尾节点
	goOldEnd->next = newEnd; // 让旧的末尾节点接上 newEnd 所指节点
}

Node * InsertHead(int newData, Node *head) { // 在开头插入节点
	Node *newHead = (Node *) malloc(sizeof(Node));
	newHead->data = newData;
	newHead->next = head; // 接上旧的开头节点
	return newHead;
		// 因为开头改变了，而主函数并不知道这一点，所以需要返回新的开头
		// 或者可以使用指针的指针（二级指针）追踪修改主函数中的 head（见 5 InsertAt 函数）
}

void InsertAt(int n, int newData, Node **head) {
	Node *newNode = (Node *) malloc(sizeof(Node));
	newNode->data = newData;
	newNode->next = NULL;
	
	if (n == 1) { // 若为头节点，则直接连接并更新头节点即可
		newNode->next = *head;
		*head = newNode;
		return; // 结束 void 返回值的函数
	}
	
	Node *goIns = *head;
	for (int i = 0; i < n - 2; i++) {
		// 循环 n-2 次即可到达插入位置，即第 n-1 项（i = 0 会做一次）
		goIns = goIns->next;
	} // 定位到第 n-1 项，即目标节点的前一项
	
	// 接线
	newNode->next = goIns->next; // newNode 接前一项所接项（含 NULL）
	goIns->next = newNode; // 前一项换接 newNode
}

void DeleteAt(int n, Node **head) {
	Node *goDel = *head;
	
	if (n == 1) { // 若为头节点，则直接换接线并释放内存即可
		*head = goDel->next; // 头指针 head 换接新的头节点
		free(goDel); // 释放目标节点
		return;
	}
	
	for (int i = 0; i < n-2; i++) {
		goDel = goDel->next;
	} // 定位到第 n-1 项，即目标节点的前一项
	Node *Del = goDel->next; // 定位目标节点
	
	// 换接线
	goDel->next = Del->next; // 前一项换接目标节点所接项（含 NULL）
	free(Del); // 释放目标节点
}

void PrintAll(Node *head) { // 打印所有链表数据
	struct Node *curNode = head;
	printf("当前列表为：");
	while (curNode != NULL) {
		printf(" %d", curNode->data); // 打印当前节点数据
		curNode = curNode->next; // 步进 1 个节点
	}
	printf("\n");
}

int main() {
	Node *head = NULL; // 构造一个空链表
	
	printf("输入在开头插入链表的整数：（-1 退出）\n");
	int input;
	while (1) {
		scanf("%d", &input);
		if (input == -1) break;
		head = InsertHead(input, head); // 将输入值插入链表开头，再更新开头
		PrintAll(head);
	}
	
	printf("输入在末尾插入链表的整数：（-1 退出）\n");
	while (1) {
		scanf("%d", &input);
		if (input == -1) break;
		InsertEnd(input, head);
		PrintAll(head);
	}
	
	int n;
	printf("输入在指定位置插入链表的整数：（-1 退出）\n");
	while (1) {
		scanf("%d", &input);
		if (input == -1) break;
		printf("你想把它作为第几项插入？");
		scanf("%d", &n);
		InsertAt(n, input, &head);
		PrintAll(head);
	}
	
	printf("输入指定删除的项序数：（-1 退出）\n");
	while (1) {
		scanf("%d", &n);
		if (n == -1) break;
		DeleteAt(n, &head);
		PrintAll(head);
	}
	
	return 0;
}