#include<stdio.h>
int main()
{
	printf("Nested Loops\n");
	int i,j,num;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		printf("%d: \t",i);
		for(j=1;j<=10;j++){
			printf("%4d",i*j);
		}
		printf("\n");
	}
}
