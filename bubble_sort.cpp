#include<iostream>
using namespace std;

int main(){
	int x=5, n=1;
	int A[x]={35,10,55,20,5};
	
	for(int i=x;i>1;i--){
		for(int j=0;j<i-1;j++){
			if(A[j] > A[j+1]){ 
			
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
				
				cout<< "Pass no." << n++ <<": ";
				for(int k=0;k<x;k++){
					cout<<A[k]<< " ";
				}
				cout<< "Swapped: "<<A[j]<<","<<A[j+1];
				cout<<endl;	
			}
		}
	}
}	
