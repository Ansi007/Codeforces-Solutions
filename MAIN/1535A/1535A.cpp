#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int arr[n][4];
	int final[n][2];
	int actual[n][2];
	
	for( int i=0; i<n; i++)
		for( int j=0; j<2; j++)
			actual[i][j] = 0;
			
	for( int i=0; i<n; i++)
		for( int j=0; j<4; j++)
			cin >> arr[i][j];

	
	for( int i=0; i<n; i++){
		if ( arr[i][0]>arr[i][1] )	final[i][0] = arr[i][0];
		else						final[i][0] = arr[i][1];
		
		if ( arr[i][2]>arr[i][3] )	final[i][1] = arr[i][2];
		else						final[i][1] = arr[i][3];
	}
	
	for( int i=0; i<n; i++)
		for( int j=0; j<4; j++)
			if ( actual[i][0]<arr[i][j])
				actual[i][0] = arr[i][j];

	for( int i=0; i<n; i++)
		for( int j=0; j<4; j++)
			if ( arr[i][j] < actual[i][0] && actual[i][1]<arr[i][j] )
				actual[i][1] = arr[i][j];
				
	
	for( int i=0; i<n; i++){
		if( actual[i][0]==final[i][0] && actual[i][1]==final[i][1])		cout << "YES\n";
		else if ( actual[i][0]==final[i][1] && actual[i][1]==final[i][0] )	cout << "YES\n";
		else	cout << "NO\n";
	}
	
	return 0;
}
