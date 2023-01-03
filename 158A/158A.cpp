#include<iostream>
using namespace std;

int main (){
	int k, n, count=0;
	cin >> k >> n;
	int arr[k];
	for( int i=0; i<k; i++)
		cin >> arr[i];
	for ( int i=0; i<k; i++)
		if( arr[i]>0 && arr[i]>=arr[n-1]  )	count++;
	cout << count << endl;
	return 0;
}

