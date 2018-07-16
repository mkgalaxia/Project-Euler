#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
	int sqrtI;
	long int primeSum;
	bool isPrime = true;
	
	for (int i = 2; i < 2000000; i++) {
		//checks if it's prime
		sqrtI = sqrt(i);
		for (int j = 2; j <= sqrtI && isPrime; j++) {
			if (0 == i % j)
				isPrime = false;
		}
		//adds it to the sum if true
		if (isPrime)
			primeSum += i;
		isPrime = true;
	}
	
	cout << primeSum << endl;
	
	return 0;
}

