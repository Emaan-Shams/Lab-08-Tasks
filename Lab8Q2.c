#include<stdio.h>
main(){
	int matrix[3][4] = {{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int i,j,indexi, indexj;
	int max = 0;
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			
			if(matrix[i][j]>max){
				max = matrix[i][j];
				indexi = i;
				indexj = j;
			}
		}
	}
	printf("Largest number is: %d at index: %d,%d",max,indexi,indexj);
}
