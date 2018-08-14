#include <iostream>
using namespace std;

int i1, i2;
int func(int a) { return a / 100 + ((a % 100) / 10) * 10 + (a % 10) * 100; }
int main() {
	cin >> i1 >> i2;
	i1 = func(i1);
	i2 = func(i2);
	cout << (i1 = i1 > i2 ? i1 : i2);
	return 0;
}