#include <iostream>
#include <cmath>
 using namespace std;
int main(int argc, char **argv) {
	int solution[3], product;
	
	//seaches each plausable number combination
	for (int a = 1; a < 333; a++) {
		for (int b = 2; b < 500; b++) {
			for (int c = 3; c < 1000; c++) {
				//checks if sum = 1000
				if (c == (1000 - a) - b) {
					//checks if its a pythagorean triple
					int cSquared = pow(c, 2.0);
					if (cSquared == pow(a, 2.0) + pow(b, 2.0)) {
						solution[0] = a;
						solution[1] = b;
						solution[2] = c;
					}
				}
			}
		}
	}
	//gets product of a b and c
	product = solution[0] * solution[1] * solution[2];
	cout << product << endl;
	//31875000
	return 0;
}

