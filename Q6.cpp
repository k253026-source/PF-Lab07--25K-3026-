#include <stdio.h>
int main() {
	char str[100];
	int countv=0,countc=0;
	printf("Enter the Word :");
	scanf("%s",str);
	
	int i;
	for(i=0;str[i]!='\0';i++) {
	if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' ||
	 str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u') {
		countv++;
	} else {
	    countc++;
   }
}   printf("\n");
    printf("The Given Word has %d Vowels",countv);
    printf("\n--------------AND--------------\n");
    printf("The Given Word has %d Consonents\n",countc);
	return 0;
}

