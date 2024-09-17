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
    int maior = vetor[0];
    
    for (int i = 1; i < TAMANHO; ++i) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    cout << "O maior valor no vetor é: " << maior << endl;
    
    return 0;
}
