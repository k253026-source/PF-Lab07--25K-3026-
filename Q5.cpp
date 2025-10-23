#include <stdio.h> 
int main() {
	int arr[10];
	printf("Enter the values :-\n");
	int i;
	for(i=0;i<10;i++) {
		printf("Enter the %d value :",i+1);
		scanf("%d",&arr[i]);
	
	} int	max=arr[0],min=arr[0]; 
	for(i=0;i<10;i++) {
		if(arr[i]>max) {
			max = arr[i];
		} if(arr[i]<min) {
			min = arr[i];
		}
	} printf("The Maximum Number is %d", max);
	  printf("\nThe Minimum Number is %d", min);
	  printf("\nThe Difference is :%d", max - min);
	return 0;
}
