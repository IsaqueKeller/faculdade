// Elaborar um algoritmo que lê 3 valores **a, b, c** e os escreve. A seguir, encontre o maior dos 3 valores e o escreva com na tela *"O maior dentre os três é: __ ".
#include <iostream>
using namespace std;

void greater_function (int num_1 , int num_2 , int num_3) {
  int greater = 0;
  if ((num_1 >= num_2 ) and (num_1 >= num_3)) {
  	greater = num_1;
  }
  else if ((num_2 >= num_1) and (num_2 >= num_3)) {
  	greater = num_2;
  }
  else {
  	greater = num_3;
  }
  cout << "The greatest number is: " << greater << endl;
  }
  
  int main () {
  	int v1 = 0 , v2 = 0 , v3 = 0;
  	cout << "Type the first number: " << endl;
  	cin >> v1;
  	
  	cout << "Type the second number: " << endl;
  	cin >> v2;
  	
  	cout << "Type the third number: " << endl;
  	cin >> v3;
  	
  	greater_function (v1 , v2 , v3);
  	return 0;
  }
