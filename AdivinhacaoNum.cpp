#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int numeroSecreto = std::rand() % 100 + 1; 
    int palpite;
    int tentativas = 0;

    cout << "=== Jogo de Adivinhação ===\n";
   cout << "Tente adivinhar o número entre 1 e 100.\n";

    do {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Muito baixo! Tente novamente.\n";
        } else if (palpite > numeroSecreto) {
            cout << "Muito alto! Tente novamente.\n";
        } else {
            cout << "Parabéns! Você adivinhou o número em " << tentativas << " tentativas.\n";
        }
    } while (palpite != numeroSecreto);

    return 0;
}
