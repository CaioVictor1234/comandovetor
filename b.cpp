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
    double vetor[TAMANHO] = {2.5, 3.5, 4.0, 5.0, 6.5};
    double soma = 0.0;
    
    for (int i = 0; i < TAMANHO; ++i) {
        soma += vetor[i];
    }
    
    double media = soma / TAMANHO;
    cout << "A média dos valores do vetor é: " << media << endl;
    
    return 0;
}
