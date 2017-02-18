#include<iostream>
using namespace std;

int main(){
	int x=1;
	int n = 5,j,i,tmp;	
	int A[ ] = { 40, 30, 20, 50, 10 };
	
	for (i=1;i<n;i++){
    	int tmp=A[i];
   		for( j=i-1;j>=0 && tmp<A[j];j--){
       		A[j+1] = A[j];
       	}
		A[j+1] = tmp;
		cout << "Pass#" << x++ << ": ";	
				
			for (int k=0;k<n;k++){
			cout << A[k] << " ";
			}
			cout<< "Swapped: "<<A[i]<<","<<A[i+1];	
			cout << endl;		
	
	
	}
}
