#include<stdio.h>
main(){
	int Photos[2][12] = {{12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},{10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}};
	int year,month;
	for(year=0;year<2;year++){
		for(month=0;month<12;month++){
			printf("Year %d,Month %d: %d photos\n", year + 1, month + 1,Photos[year][month]);
		}
		printf("\n");
	}
}
