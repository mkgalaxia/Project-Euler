#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int adjInt[12];
	long int highestProduct = 0, product = 1;
	string PE08Nums;
	
	//getting 1000 numbers from text file called PEuler08Nums.txt
	ifstream myfile;
	myfile.open("PEuler08Nums.txt");


	getline(myfile, PE08Nums);

	myfile.close();
	
	//filling my vector with opening 13 numbers
	for(int i = 0; i < 13;i++) {
		adjInt[i] = PE08Nums.at(i) - 48;
	}
	
	//initial check for the highest product
	for (int i = 0; i < 13; i++)
		product *= adjInt[i];
	highestProduct = product;
	
	for (int i = 13; i < PE08Nums.length(); i++) {
		//shifts numbers in vector to the right by 1
		for (int j = 0; j < 12; j++)
			adjInt[j] = adjInt[j + 1];
		adjInt[12] = PE08Nums.at(i) - 48;
		
		//checks for new highest product
		product = 1;
		for (int i = 0; i < 13; i++)
			product *= adjInt[i];
		if (product > highestProduct)
			highestProduct = product;
	}
	
	cout << highestProduct << endl;
	return 0;
	
	system("pause");
}
