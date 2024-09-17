/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void ordenarDecrescente(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; ++i) {
        for (int j = i + 1; j < tamanho; ++j) {
            if (vetor[i] < vetor[j]) {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main() {
    const int TAMANHO = 5;
    int vetor[TAMANHO] = {4, 2, 5, 1, 3};
    
    ordenarDecrescente(vetor, TAMANHO);
    
    cout << "Vetor ordenado em ordem decrescente:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;
    
    return 0;
}
