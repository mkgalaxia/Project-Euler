#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <fstream>

int main() {
	int adjacentInts[13];
	string tempNums, PEuler08Nums;

	ifstream myfile;
	myfile.open("PEuler08Nums.txt");

	while (!myfile.eof()) {
		getline(myfile, tempNums);
		PEuler08Nums += tempNums;
		cout << PEuler08Nums << endl;
	}

	myfile.close();

	cout << PEuler08Nums << endl;


	
	system("pause");
	return 0;
}