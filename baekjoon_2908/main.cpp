#include <iostream>
using namespace std;

int i1, i2, tmp1, tmp2;
int main() {
	cin >> i1 >> i2;
	tmp1 = i1 / 100 + ((i1 % 100) / 10) * 10 + (i1 % 10) * 100;
	tmp2 = i2 / 100 + ((i2 % 100) / 10) * 10 + (i2 % 10) * 100;
	tmp1 = tmp1 > tmp2 ? tmp1 : tmp2;
	cout << tmp1;
	return 0;
}