//LCM Problem
#include<iostream>
using namespace std;

int main () {
	int t, l, r, flag=0;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> l;
		cin >> r;
		for( int i=l; i<r; i++){
			flag=0;
			if(l*2<=r) {
				flag=1;
				break;
			}
		}
		if( flag==1 ) cout << l << " " << l*2 << endl; 
		else		  cout << "-1 -1" << endl;
	}
	return 0;
}
