#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i ++ ) cin >> a[i];
	for(auto i : a) 
		cout << i << ' ' ;			
	return 0;
}
