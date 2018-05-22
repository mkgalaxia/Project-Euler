#include <iostream>
using namespace std;
#include <cmath>

int checkPrime(long long int x,int smollerNum) {
	bool notPrime = false;

	for (int j = 2; j <= smollerNum; j++) {
		if (x % j == 0) {
			notPrime = true;
		}
	}
	if (notPrime == false) {
		cout << x << endl;
	}
		notPrime = false;
		return x;
}


int main() {
	
	long long int x = 0;
	const long long int bigNum = 600851475143;
	const int smollNum = sqrt(bigNum);
	int smollerNum = 0;
	
	for (int i = 1; i <= smollNum; i++) {
		if (bigNum % i == 0) {
			x = bigNum / i;
			smollerNum = sqrt(x);
			checkPrime(x, smollerNum);
			x = i;
			smollerNum = sqrt(x);
			checkPrime(x, smollerNum);
		}
	}

	system("pause");
	return 0;
}