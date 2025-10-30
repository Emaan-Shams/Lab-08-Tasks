#include <stdio.h>
main(){
	int Marks[3][4] = {{85, 92, 78, 90},{88, 76, 95, 84},{90, 85, 88, 92}};
	float sum;
	int i,j;
	for(i=0;i<3;i++){
		sum = 0.00;
		for(j=0;j<4;j++){
			sum += Marks[i][j];
		}
		printf("Average for class %d is: %f\n",i+1,(sum/4.00));
	}
}
