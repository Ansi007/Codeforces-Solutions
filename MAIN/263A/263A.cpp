#include<iostream>
using namespace std;

int absoulte( int value ){
	if( value<0 ) return value*=(-1);
	else		  return value;
}

int main (){
	int arr[5][5], x=0, y=0;
	for ( int i=0; i<5; i++){
		for( int j=0; j<5; j++){
			cin >> arr[i][j];
			if( arr[i][j]==1 )	{
				x=i+1;
				y=j+1;
			}
		}
	}
	cout << absoulte(x-3)+absoulte(y-3) << endl;
	
}

