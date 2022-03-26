#include <iostream>
using namespace std;

int main()
{

    float alt;
    float peso;
    float IMC;

    cout << "Digite a sua altura: \n";
    cin >> alt;

    cout << "Digite o seu peso: \n";
    cin >> peso;

    IMC = peso / (alt * alt);

    if (17 > IMC) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta muito abaixo do peso!\n";
    }
    else if (IMC >= 17 && IMC < 18.5) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta abaixo do peso!\n";
    }
    else if (IMC >= 18.5 && IMC <= 24.9) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta no peso normal!\n";
    }
    else if (IMC >= 25 && IMC <= 29.9) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta acima do peso!\n";
    }
    else if (IMC >= 30 && IMC <= 34.9) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta em estado de Obesidade I!\n";
    }
    else if (IMC >= 35 && IMC <= 39.9) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta em estado de Obesidade II!\n";
    }
    else if (IMC >= 40) {
        cout << "Seu IMC e: " << IMC << "\n";
        cout << "Voce esta em estado de Obesidade III!\n";
    }
    else {
        cout << "As suas inputs nao sao validas! \n";
    }
        
}
