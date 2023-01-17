#include<iostream>
using namespace std;

int main(){
	int n, exit=0, enter=0, max=0;
	cin >> n;
	for( int i=0; i<n; i++){
		int a1=0, a2=0;
		cin >> a1;
		cin >> a2;
		if(i==0){
			exit = a1;
			enter = a2;
		}
		else{
			exit = enter-a1;
			enter = exit+a2;
		}
		if(max<=enter) max = enter;
	}
	cout << max << endl;
	return 0;
}
