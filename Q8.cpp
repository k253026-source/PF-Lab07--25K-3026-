#include <stdio.h>
int main() {
	char str[100];
	printf("Enter the string :");
	scanf("%[^A-Za-z]",str);
	printf("Your Answer :%s",str);
	return 0;
}
