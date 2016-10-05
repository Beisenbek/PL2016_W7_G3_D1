#include <iostream>

using namespace std;

int main(){

	int a[10];

	for(int i = 0; i < 10; ++i){
		a[i] = 1;
	}

	int s = 0;

	for(int i = 0; i < 10; ++i){
		s = s + a[i];
	}

	cout << s;

	return 0;
}