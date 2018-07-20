#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long int solution = 0;
	int sqrtSolution, numOfFactors = 0;
	bool found = false;

	for (int i = 1; !found; i++) {
		//gets triangle numbers
		solution += i;
		//omits mathmatical impossibilites for efficiency
		if (solution <= 62500 || solution % 2 == 1) {
		}
		//counts the number of factors below the square root of "solution"
		else {
			sqrtSolution = sqrt(solution);
			for (int j = 1; j <= sqrtSolution; j++) {
				if (solution % j == 0)
					numOfFactors++;
			}
			//checks if "solution" is the correct answer
			if (numOfFactors >= 250)
				found = true;
			else
				numOfFactors = 0;
		}
	}

	//prints solution
	cout << solution << endl;

	system("pause");
	return 0;
}