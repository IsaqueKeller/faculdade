#include <iostream>
using namespace std;

float Resultado (float v1 , float v2) {

float soma = 0;

soma = v1 + v2;
return soma; 
}

int main (void) {
    float a = 0 , b = 0;
    
 	cout << "informe o valor de a: ";
 	cin >> a;
 	
 	cout << "informe o valor de b: ";
 	cin >> b;
 	
 	cout << "Resultado da soma:" << Resultado(a , b) << endl;
}
