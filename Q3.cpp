#include <stdio.h>
int main() {
	int marks;
	int pass[10];
	int fail[10];
	int i;
	int sump=0,sumf=0,p=0,f=0;
	float averagep,averagef,Average;
	// Intput values
	for(i=0;i<10;i++) {
		printf("Enter the marks of %d students :",i+1);
		scanf("%d",&marks); 	
		// Condition
		 if(marks==-1) 
	        break;
		else if(marks>=5 && marks<=10) {
		pass[p] = marks;
		p++;

		} else if(marks<5 && marks>=0) {
		    fail[f] = marks;
		    f++;
    }  
		else printf("Marks will be range in 0 to 10 \n");
		
}		printf("\n----- Results Summary -----\n\n");
             // Output
        printf("The passing marks is :");
        for(i=0;i<p;i++) {
           printf("%d, ",pass[i]);
			sump+=pass[i]; 
           }
           printf("\nThe failing marks is :");
          for(i=0;i<f;i++) {
           printf("%d, ",fail[i]); 
		    sumf+=fail[i];
    }   //Print Averages
		averagep = sump/p;
		averagef = sumf/f;
		Average = (sump + sumf)/(p + f);
		printf("\n");
   printf("\nThe Passing Average of Class BSE-1B is %f:",averagep);
    printf("\nThe Failing Average of Class BSE-1B is %f:",averagef);
    printf("\nThe Total Average of Class BSE-1B is :%f",Average);
	return 0;
}

