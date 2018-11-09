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
} LIST; //다음 linked list로 이동하기 위해 tail도 설정

NODE *createNode() {
	NODE *new_node = (NODE*)malloc(sizeof(NODE));
	return new_node;
} //동적 할당 코드를 삽입(간단하게 하기 위하여 헤더파일에 부득이하게 삽입)

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
