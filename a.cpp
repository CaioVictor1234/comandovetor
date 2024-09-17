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
    int vetor[TAMANHO] = {1, 2, 3, 4, 5};
    
    cout << "Valores do vetor:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cout << vetor[i] << endl;
    }
    
    return 0;
}
