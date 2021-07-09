#include "hider.hpp"
int main(){
	 int matrix[5][5];
	cout<<"Input your matrix!"<<endl;
	
	 for(int i=0;i<5;i++){   
	   	 for(int j=0;j<5;j++){
     			cin>>matrix[i][j];

         }
         
         }
	 //print MY MATRIX
	
		 
         //upcalculate number to bynary
	 int len=0;
	 int* arrup;
	 int number=upcalculate(matrix);
	 cout << "*************************************" <<endl;
	 cout << "My up calculate number = " <<upcalculate(matrix)<<endl;
	 arrup = bynary(number, arrup,len);
	 cout << "up calculate to bynary = ";
	 for(int i=0;i<len;i++)
                cout<<arrup[i];
	 cout<<endl;
	

	 //downcalculate number to bynary
	 int len1=0;
	 int* arrdown;
	 int number1=downcalculate(matrix);
	 cout << "*************************************" <<endl;
	 cout << "My down calculate number = "<<downcalculate(matrix)<<endl;
         cout<<"down calculate to bynary = ";
       	 arrdown =bynary(number1,arrdown,len1);
         for(int i=0;i<len1;i++)
		cout<<arrdown[i];
         cout<<endl;
       
	 cout << "*************************************"<<endl;
	 cout << "MY new matrix" <<endl;
         newmatrix(matrix,arrdown,arrup);	 
	 for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matrix[i][j]<<" ";	
		}
         cout<<endl;
	 }
         return 0;  
	
} 

