# include <iostream>
# include <string>
using namespace std;

int main() {
	const int DEZ = 10;
	// f1(n): percorre um vetor de tamanho n uma vez (O(n)).
	int elevadoCubo = 1;
	//  n = 10³
	int elevadoQuatro = 1;

	// n = 10⁴
	int elevadoCinco = 1;

	cout << "Vetor com valor 10 elevado ao cubo" << endl;

	for (int x = 0; x < 3; x++) {
		elevadoCubo = elevadoCubo * DEZ;
	}		
	cout << "\nResultado final de 10 ao cubo eh: " << elevadoCubo << endl;

	for (int x = 0; x < 4; x++) {
		elevadoQuatro = elevadoQuatro * DEZ;
	}
	cout << "\nResultado final de 10 elevado a 4: " << elevadoQuatro << endl;

	for (int x = 0; x < 5; x++) {
		elevadoCinco *= DEZ;
	}
	cout << "\nResultado final de 10 elevado a 5: " << elevadoCinco << endl;

	cout << "\nAtividade (n^2) que lembra matriz com espaco 3x3" << endl;
	int matriz = 1;
  //  f2(n): percorre o vetor duas vezes em laços aninhados (O(n²)).
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			matriz *= DEZ;
			cout << "Resultado a cada passo: " << matriz << endl;
		}
	}

	cout << "\nResultado do O(n^2): " << matriz << endl;
	
	int numeroSecreto = 3; // você pode mudar
    int chute;
    
    cout << "Chute um numero entre 0 a 5" << endl;
    cin >> chute;
    
    if (chute == numeroSecreto) {
    	cout << "Parabens voce acertou o numero secreto!" << endl;
	}
	else if (chute < 3) {
		cout << "Seu chute foi menor do que o numero secreto!" << endl;
	}
	else if (chute > 3) {
		cout << "Seu chute foi maior que o numero secreto!" << endl;
	}
	else {
		cout << "ERRO 404" << endl;
	}

    

	return 0;
}
