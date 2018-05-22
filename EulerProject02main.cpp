#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int x = 0;
	int a = 0;
	int b = 1;
	int c = 1;

	while (c < 4000000) {
		if (c % 2 == 0) {
			x += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	cout << x << endl;

	system("pause");
	return 0;
}