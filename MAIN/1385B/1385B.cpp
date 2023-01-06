#include<iostream>
using namespace std;
//1 2 1 2 3 4 3 5 4 5
//1 1 2 2
//1 3 1 4 3 4 2 2
//1 2 3 1 2 3
//2 3 2 4 1 3 4 1
int main(){
	int n, t;
	cin >> t;
	for( int run=0; run<t; run++){
	cin >> n;
	int arr[n*2], arr1[n];
	for( int i=0; i<n*2; i++)
		cin >> arr[i];
	int count=0;
	arr1[count++]=arr[0];
	for( int i=1; i<n*2; i++){
		for( int j=0; j<count; j++){
			if(arr[i]==arr1[j])	break;
			else if (arr[i]!=arr1[j] && j==count-1)
				arr1[count++]=arr[i];
			else continue;		}
	}		
	for( int i=0; i<n; i++)
		cout << arr1[i] << " ";
	cout << endl;
}
	return 0;
}
