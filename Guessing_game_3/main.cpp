#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "***************************************" << endl;
    cout << "** Bem-vindo ao jogo de adivinhacao! **" << endl;
	cout << "***************************************\n" << endl;
	cout << "Escolha o seu nivel de dificuldade: " << endl;
	cout << "Facil (F), Media (M) ou Dificil (D)" << endl;
	
	char dificuldade;
	cin >> dificuldade;
	
	int numero_de_tentativas;
	
	if (dificuldade == 'F') {
		numero_de_tentativas = 15;
	}
	else if (dificuldade == 'M') {
		numero_de_tentativas = 10;
	} else {
		numero_de_tentativas = 5;
	}

    // Constantes em C++ devem ser escritas em MAIÚSCULO
    // Motivo: Facilita identificar rapidamente que o valor NÃO deve mudar
    // e evita erros acidentais de modificação.
    
    srand(time(0));
    const int NUMERO_SECRETO = rand() % 50;
	int tentativas = 0;
	bool acerto = false;
	double pontos = 1000.0;	

    for (tentativas; tentativas < numero_de_tentativas; tentativas++) {
	    int chute = 0;
	    
		cout << "Informe o seu chute entre 0 a 50: ";
	    cin >> chute;
	    cout << "O valor do seu chute eh: " << chute << endl;
	    
	    // Coloquei 2.0 porque em C++ int/int gera divisão inteira (descarta decimais).
		// Usando 2.0, a operação vira real (ex.: 1 / 2.0 = 0.5), mantendo os decimais.
	    double pontosPerdidos = abs(chute - NUMERO_SECRETO) / 2.0;
		pontos = pontos - pontosPerdidos;
	
	    // Uso de variáveis booleanas para representar condições
	    // Motivo: melhora a legibilidade do código e evita colocar expressões
	    // complexas diretamente dentro dos ifs.
	    bool acertou = chute == NUMERO_SECRETO; // true se o chute for correto
	    bool maior = chute > NUMERO_SECRETO;    // true se o chute for maior
	
	    if (acertou) {
	        cout << "\nParabens voce acertou o numero secreto!" << endl;
	        acerto = true;
	        break;
	    }
	    else if (maior) {
	        cout << "Seu chute foi maior do que o numero secreto\n" << endl;
	    }
	    else {
	        cout << "Seu chute foi menor do que o numero secreto\n" << endl;
	    }
	}
	
	cout << "\nFim de Jogo!" << endl;
	
	if (acerto == true) {
		cout << "Voce acertou o numero secreto com " << tentativas + 1 << " tentativas." << endl;
		cout.precision(2);
		cout << fixed;
		cout << "Sua pontuacao foi de: " << pontos << endl;
	}
	else {
		cout << "Voce perdeu! Tente novamente!" << endl;
	}
	
    return 0;
}