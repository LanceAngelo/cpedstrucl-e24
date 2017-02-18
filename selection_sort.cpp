#include<iostream>
using namespace std;

int main(){
	
	int n=5;
	int x=1;
	int A[] = {35 ,10 ,55 ,20 ,5 };
	
	for (int i=0;i<n-1;i++){
		 
		int min=A[i], index = i;
		for (int j=i+1; j<n;j++){
			
			if (A[j] < min){
				min = A[j];
				index = j;
			}
		}
	A[index] = A[i];
	A[i] = min;
	

	cout << "Pass#" << x++ << ": ";		
	for (int k=0;k<5;k++){
	cout << A[k] << " ";
	}
	cout<< "Swapped: "<<A[i]<<","<<A[i+1];	
	cout << endl;
	}
	
}
