#include <iostream>
using namespace std;
#include <string>

int main() {
	//998001
	int checkNum, remainder, reverseNum = 0;
	bool searching = true;

	for (int k = 998001; k > 9801 && searching; k--) {

		checkNum = k;
		//flips k
		while (checkNum > 0) {
			remainder = checkNum % 10;
			reverseNum = reverseNum * 10 + remainder;
			checkNum /= 10;
		}
		cout << k << endl;
		//checks if flipped = original
		if (k == reverseNum) {
			//checks if flipped number is divisable by 2 3-digit numbers
			for (int i = 999; i > 99; i--) {
				for (int j = 999; j > 99; j--) {
					if (i * j == k) {
						searching = false;
					}
				}
			}
		}
		reverseNum = 0;
	}


	system("pause");
	return 0;
}