#include<stdio.h>

int fact(int, int);

int main() {
	int a;
	printf("factorial�� ���ϰ� ���� ���ڸ� �Է��Ͻÿ�");
	scanf("%d", &a);
	printf("fact(%d) = %d\n", a, fact(a, a));
}

int fact(int n, int compare) {	//compare�̶�� ������ �߰����� ���� ���,
	int result;					// compare �ڸ��� ���ڸ� ���� ����־ƾ� �ϹǷ�
	if (n <= 1) {				//�ɵ������� ���� ���α׷��� �ȴ�.
		printf("%d! = %d\n", n, n); // 1�� ���⼭ ����ؾ� �Ѵ�.
		return 1;
	}
	else {
		result = n*fact(n - 1, compare);
		if (n < compare) { // n���� ���� ���ڸ� ���� factorial�� ����ؾ� �Ѵ�.
			printf("%d! = %d\n", n, result);
		}
		return result;
	}
}