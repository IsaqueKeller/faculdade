#include <iostream>
using namespace std;

float greatest (int quantity) {
		int i = 0;
		float number = 0;
		float greater = 0;
	
	do {
			cout << "Inform a number: " <<  endl;
		cin >> number;
		
		
		if (number > greater) {
			greater = number;
		}
	i++;
	} while (i < quantity);
	return greater;
}

int main () {
	int quantity = 0;
	cout << "Inform how many numbers you want to see: " << endl;
	cin >> quantity;
	
float result = greatest (quantity);	

cout << "The greatest number is: " << result << endl;
}
