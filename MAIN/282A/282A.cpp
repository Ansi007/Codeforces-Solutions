#include<iostream>
using namespace std;

int main(){
	int n, x=0;
	cin >> n;
	char ch[n][3];
	for( int i=0; i<n; i++)
		cin >> ch[i][0] >> ch[i][1] >> ch[i][2];
	for( int i=0; i<n; i++){
		if ( (ch[i][0]>='A' && ch[i][0]<='Z') && ch[i][1],ch[i][2]=='+' ) 		x++;
		else if ( ch[i][0],ch[i][1]=='+' && (ch[i][2]>='A' && ch[i][2]<='Z') ) 	++x;
		else if ( (ch[i][0]>='A' && ch[i][0]<='Z') && ch[i][1],ch[i][2]=='-' ) 	x--;
		else  --x;
	}
	cout << x << endl;
	return 0;
}
