/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 5;
    int vetor[TAMANHO] = {10, 25, 8, 30, 15};
    int menor = vetor[0];
    
    for (int i = 1; i < TAMANHO; ++i) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    cout << "O menor valor no vetor é: " << menor << endl;
    
    return 0;
}
