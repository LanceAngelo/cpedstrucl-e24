#include <iostream>
using namespace std;

int main(){
	
	int n=5,x=1,i=0,j=0;
	int numArr[] = {9,3,1,5,8};
	int h1,l2,h2;
	int temp[20];
	for (int size=1;size < n; size=size*2){
		int l1=0, k=0;
		while (l1+size < n){
			h1=l1+size-1;
			l2=h1+1;
			h2=l2+size-1;
			if (h2>=n){
				h2=n-1;
			}
			i=l1;
			j=l2;
			while (i<=h1 && j<=h2){
				if (numArr[i] <= numArr[j])
					temp[k++] = numArr[i++];
				else
					temp[k++] = numArr[j++];
			}
			while (i<=h1)
				temp[k++] = numArr[i++];
			while (j<=h2)
				temp[k++] = numArr[j++];
			l1=h2+1;
		}
		for (i=l1;k<n;i++)
			temp[k++] = numArr[i];
		for (i=0;i<n;i++)
			numArr[i] = temp[i];
		
		
		cout << "Pass#" << x++ << ": ";		
		for (int m=0;m<n;m++){
			cout << numArr[m] << " ";
		}
		cout << "Swapped: " << numArr[size] << "," << numArr[size+1];
		cout << endl;
	}
}
