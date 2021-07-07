#include "hider.hpp"
int upcalculate(int matrix[5][5]){

	//function that calculate up side matrix

	int sum=0;
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			sum+=matrix[i][j];	
		}
	}
return sum;
}
