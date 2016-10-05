/*
generate random numbers for array
*/
#include <iostream>
#include <time.h>

using namespace std;

int main(){

	freopen("input.txt","w",stdout);

	srand(time(NULL));

	cout << 100 << endl;

	for(int i = 0; i < 100; ++i){
		cout << rand()%1000 << " ";
	}

	return 0;
}