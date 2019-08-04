#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
int main() {
	int n;
	int x = 0;
	string sayed;
 
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> sayed;
 
		if (sayed == "X++" || sayed == "++X") {
 
			x++;
 
		}
 
		if (sayed == "X--" || sayed == "--X") {
 
			x--;
 
 
		}
 
 
 
	}
 
	cout << x << endl;
 
	return 0;
}
