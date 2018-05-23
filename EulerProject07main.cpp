#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int primeTracker = 0, solution;
	bool prime = true;

	for (int j = 2; primeTracker <= 10000; j++) {
		//checks each number for prime
		for (int i = sqrt(j); i > 1 && prime; i--) {
			if (j%i == 0) {
				prime = false;
			}
		}
		//keeps track of # of previous primes & holds current prime
		if (prime == true) {
			primeTracker += 1;
			solution = j;
		}
		prime = true;
	}

	cout << solution << endl;

	system("pause");
	return 0;
}