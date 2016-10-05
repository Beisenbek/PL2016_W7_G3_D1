#include <iostream>

using namespace std;

int main(){

	int a[10];

	for(int i = 0; i < 10; ++i){
		a[i] = i + 1;
	}

	cout << *(a+1) << " " << a[1];

	return 0;
}