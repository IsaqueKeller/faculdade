//Fazer um algoritmo que le a hora de inicio de um jogo e a hora final do jogo e calcula a duraçao do jogo em horas 
#include <iostream>
using namespace std;

void duracaohoras (int horainicial , int horafinal){
    horafinal <= 24;
	cout << horafinal - horainicial << " horas de duracao" << endl;
}

int main () {
	int a = 0;
	int b = 0;
	
	cout << "Informe o valor da hora inicial" << endl;
	cin >> a;
	
	cout << "Infome o valor da hora final" << endl;
	cin >> b;
	
	if (a > b or b > 24) {
		cout << "Horas invalidas" << endl;
		main();
	}
	else {
	duracaohoras (a , b); 
		return 0;
	}
	
} 
