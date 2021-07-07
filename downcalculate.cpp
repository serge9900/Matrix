#include "hider.hpp"
int downcalculate(int matrix[5][5]){
	
	//function that calculate down side matrix
	
        int sum1=0;
	for(int i=1;i<5;i++){
		for(int j=0;j<i;j++){
			sum1+=matrix[i][j];
		}
	}
return sum1;
}

