#include "hider.hpp"
int* bynary(int number, int* arr, int& i){
   
        //decimal to bynary in array	
	arr = new int[10];

 	int r;
	while(number!=0){
		
		r = number%2;
  		arr[i++] = r;
		assert(arr[i] == 0 || arr[i] == 1);
  		number /= 2;
	}
        
        for(int j = 0; j < i/2 ; j++){
	        swap(arr[j], arr[i-1-j]);
        }
	
	return arr;
 
}
