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

		printf("계속하려면 1 입력을 끝낼려면 아무숫자나 입력");
		scanf("%d", &check);
	}//동적으로 data를 직접 입력하는 방식으로 진행

	if (First(&list, &new_data)) {
		printf("%d ", new_data); //첫번째를 출력
		while (Next(&list, &new_data)) {
			printf("%d ", new_data);
		}// while문을 돌면서 끝까지 출력한다.(for문으로는 동적범위 설정이 까다롭기 때문)
	}

	return 0;
}