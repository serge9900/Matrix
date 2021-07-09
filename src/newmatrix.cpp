#include "hider.hpp"
int newmatrix(int matrix[5][5],int* arrdown, int* arrup){

	int t=0;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			matrix[i][j]=arrup[t];
			t++;	
		}
	}
	t=0;
	for(int i=1;i<5;i++){
		for(int j=0;j<i;j++){
			matrix[i][j]=arrdown[t];
			t++;
		}
	}

return matrix[5][5];
}

