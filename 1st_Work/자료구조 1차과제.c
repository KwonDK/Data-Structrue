#include<stdio.h>
#include<malloc.h>
#include"link.h"

int main() {
	LIST list;
	int new_data;
	int check = 1, scan;

	CountList(&list);

	while (check == 1) {
		scanf("%d", &scan);
		SetNode(createNode(), &list, scan);

		printf("����Ϸ��� 1 �Է��� �������� �ƹ����ڳ� �Է�");
		scanf("%d", &check);
	}//�������� data�� ���� �Է��ϴ� ������� ����

	if (First(&list, &new_data)) {
		printf("%d ", new_data); //ù��°�� ���
		while (Next(&list, &new_data)) {
			printf("%d ", new_data);
		}// while���� ���鼭 ������ ����Ѵ�.(for�����δ� �������� ������ ��ٷӱ� ����)
	}

	return 0;
}