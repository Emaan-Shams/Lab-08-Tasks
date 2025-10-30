#include<stdio.h>
main(){
	int i,j,whitecount = 0;
	int OriginalImage[4][4] = {{1, 0, 1, 0},{0, 1, 0, 1},{1, 1, 0, 0},{0, 0, 1, 1}};
	int InvertedImage[4][4];	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(OriginalImage[i][j] == 1){
				whitecount += 1;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(OriginalImage[i][j] == 0){
				InvertedImage[i][j] = 1;
			}
			else{
				InvertedImage[i][j] = 0;
			}
		}
	}
	printf("Original Image:\t\tInverted Image:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%2d ", OriginalImage[i][j]);
		}
		printf("\t\t");
		for(j=0;j<4;j++){
			printf("%2d ", InvertedImage[i][j]);
		}
		printf("\n");
	}
	printf("\n\nnumber of white pixels in the original image: %d", whitecount);
}
