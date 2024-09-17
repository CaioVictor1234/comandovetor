/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    const int TAMANHO = 5;
    string nomes[TAMANHO];
    
    cout << "Digite 5 nomes:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cin >> nomes[i];
    }
    
    sort(nomes, nomes + TAMANHO);
    
    cout << "Nomes ordenados:" << endl;
    for (int i = 0; i < TAMANHO; ++i) {
        cout << nomes[i] << endl;
    }
    
    return 0;
}
