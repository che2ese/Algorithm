#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count;
	int input;
	int num;

	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		int total = 0;
		scanf("%d", &input);
		for (int j = 0; j < input; ++j) {
			scanf("%d", &num);
			total += num;
		}
		printf("%d\n", total);
	}
	return 0;
}