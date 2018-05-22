#include <iostream>
using namespace std;

int main() {
	int x = 0;
	for (int i = 0; i < 1000; i++) {

		if (i % 3 == 0) {

			x += i;
	}
		else if (i % 5 == 0) {

			x += i;
		}
	}

	cout << x << endl;

	system("pause");
	return 0;
}