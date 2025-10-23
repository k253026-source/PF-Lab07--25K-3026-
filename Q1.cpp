#include <stdio.h>
int main() {
	int i;
	int arr[5];
    printf("Enter the value of 5 integers\n");
       for(i=0; i<5; i++) {
	   printf("Enter the value of %d integer:",i+1);
		scanf("%d",&arr[i]); 
	   } 
          	int b=arr[4];	   
	   
	    for(i=4;i>0;i--) {
	       arr[i]=arr[i-1];
	   }
	       arr[0]=b;
	  for(i=0;i<5;i++) {
			printf("%d ",arr[i]);
	} return 0;
}
