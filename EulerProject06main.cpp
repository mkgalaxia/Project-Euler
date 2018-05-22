#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int x = 0;
	int y = 0;

	for (int i = 1; i <= 100; i++) {
		x += pow(i, 2.0);
		y += i;
	}
	y = pow(y, 2.0);
	cout << y - x << endl;
	system("pause");
	return 0;
}