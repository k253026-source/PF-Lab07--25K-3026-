#include <stdio.h>
int main() {
	char str[100];
	printf("Enter the Word/Sentence :");
	scanf("%[^\n]",str);
	int i,A=65,a=97;
	for(i=0;str[i]!='\0';i++) {
		if(str[i]>=65 && str[i]<=90) {
		          str[i]+=32;          // lower to upper difference is 97-65 = 32
			printf("%c",str[i]);
		} else {
			    str[i]-=32;           // upper to lower difference is 65-97 = -32
			printf("%c",str[i]);
		}

}      
 return 0;
}
