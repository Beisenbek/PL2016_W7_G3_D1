#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int rost;

	cin >> rost;

	int current = 0;

	while(rost <= a[current] && current < n){
		current++;
	}

	cout << current + 1;

	return 0;
}