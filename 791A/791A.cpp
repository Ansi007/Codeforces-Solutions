#include<iostream>
using namespace std;

int main(){
	int Limak, Bob, years=0;
	cin >> Limak >> Bob;
	do{
		Limak*=3;
		Bob*=2;
		years++;
	}while(Limak<=Bob);
	cout << years << endl;
	return 0;
}
