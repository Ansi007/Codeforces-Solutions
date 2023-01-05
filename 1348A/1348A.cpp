#include<iostream>
#include<cmath>
using namespace std;

int* calculate_array(int array[], int size){
	for( int i=0; i<size; i++)
		array[i] = pow(2,i+1);
	return array;
}

int main(){
	int n, coins;
	cin >> n;
	int diff[n];
	for( int i=0; i<n; i++){
		diff[i]=0;
		cin >> coins;
		int arr[coins];
		calculate_array(arr, coins);
		for( int j=0; j<coins-2; j++){
			if(j<(coins-2)/2)	arr[coins-1]+=arr[j];
			else				arr[coins-2]+=arr[j];
		}
		diff[i] = arr[coins-1] - arr[coins-2];
	}
	for( int i=0; i<n; i++)
		cout << diff[i] << endl;	
	return 0;
}
