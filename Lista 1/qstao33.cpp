#include <iostream>
using namespace std;

void weight_height (char sex , float height) {

 	if(sex == 'M') {
 	cout << "Your ideal weight is: " << (72.7 * height) - 58 << endl; 
 }  
 	else if (sex == 'F') {
 		cout << "Your ideal weight is: " << (62.1 * height)	- 44.7 << endl;
	 }
 } 
int main () {
	char a = 0;
	float b = 0;
	
	cout << "Inform your sex: " << endl;
	cin >> a;
	
	if (a == 'M' or a == 'F') {
		cout << "Inform your height: " << endl;
		cin >> b;
	}
	else {
		cout << "Invalid" << endl;
		main();
	}
	weight_height (a , b);
}
