#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n][3], count,sure=0;
	for( int i=0; i<n; i++){
		count=0;
		for( int j=0; j<3; j++){
			cin >> arr[i][j];
			if( arr[i][j]==1 ) count++;
		}
		if (count>=2)	sure++;
	}
	cout << sure << endl;		 
	return 0;
}
