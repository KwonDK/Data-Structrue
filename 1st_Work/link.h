#pragma once
typedef struct node {
	int *dataPtr;
	struct node* link;
} NODE;

typedef struct list {
	NODE *head;
	NODE *tail;
	NODE *detail;
	int count;
} LIST; //���� linked list�� �̵��ϱ� ���� tail�� ����

NODE *createNode() {
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	return new_node;
} //���� �Ҵ� �ڵ带 ����(�����ϰ� �ϱ� ���Ͽ� ������Ͽ� �ε����ϰ� ����)

void CountList(LIST *_list) {
	_list->head = NULL;
	_list->count = 0;
}

void SetNode(NODE *_node, LIST *_list, int _data) {
	_node->dataPtr = _data;
	_node->link = NULL;
	
	if (_list->head == NULL) {
		_list->head = _node;
	}
	else {
		_list->tail->link = _node;
	}

	_list->tail = _node;
	(_list->count)++;
}

int First(LIST *_list, int *_data) {
	if (_list->head == NULL) {
		return 0;
	}

	_list->detail = _list->head;
	*_data = _list->detail->dataPtr;

	return 1;
}

int Next(LIST *_list, int *_data) {
	if (_list->detail->link == NULL) {
		return 0;
	}

	_list->detail = _list->detail->link;
	*_data = _list->detail->dataPtr;

	return 1;
}
