#include<iostream>
using namespace std;

int main(){
	int steps=0, x=0;
	cin >> x;
	while(x!=0){
		if(x>=5){
			x= x-5;
			steps++;
		}
		else if(x>=4){
			x= x-4;
			steps++;
		}
		else if(x>=3){
			x= x-3;
			steps++;
		}
		else if(x>=2){
			x= x-2;
			steps++;
		}
		else if(x>=1){
			x= x-1;
			steps++;
		}
	}
	cout << steps << endl;
	return 0;
}
