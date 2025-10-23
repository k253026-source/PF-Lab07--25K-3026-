#include<stdio.h>
int main() {
	int arr[10];
	int i,count=0,r;
	printf("Enter number to search: ");
    scanf("%d", &r);

	for(i=0;i<10;i++) {
		printf("Enter the %d number :",i+1);
		scanf("%d",&arr[i]);
	 
		if(arr[i]==r) {
		 	count++;
   }
 }    	if(count == 0)
    printf("Number not found");
    else {
	  printf("Repeating Number is :%d",r);
	  printf("\nThe Number is Repeating %d times",count);
}
	return 0;
  }  


