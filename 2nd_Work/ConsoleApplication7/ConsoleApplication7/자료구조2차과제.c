#include<stdio.h>

int fact(int, int);

int main() {
	int a;
	printf("factorial을 구하고 싶은 숫자를 입력하시오");
	scanf("%d", &a);
	printf("fact(%d) = %d\n", a, fact(a, a));
}

int fact(int n, int compare) {	//compare이라는 변수를 추가하지 않을 경우,
	int result;					// compare 자리에 숫자를 직접 집어넣아야 하므로
	if (n <= 1) {				//능동적이지 못한 프로그램이 된다.
		printf("%d! = %d\n", n, n); // 1은 여기서 출력해야 한다.
		return 1;
	}
	else {
		result = n*fact(n - 1, compare);
		if (n < compare) { // n보다 작은 숫자만 먼저 factorial로 출력해야 한다.
			printf("%d! = %d\n", n, result);
		}
		return result;
	}
}