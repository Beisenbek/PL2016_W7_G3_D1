/*
find max in array
*/
#include <iostream>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	sort(a,a+n);

	cout << a[n-1];

	return 0;
}