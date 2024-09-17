/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    const int NUM_MERCADORIAS = 100;
    double precoCompra[NUM_MERCADORIAS], precoVenda[NUM_MERCADORIAS];
    int lucroMenorQue10 = 0, lucroEntre10e20 = 0, lucroMaiorQue20 = 0;
    
    cout << "Digite o preço de compra e venda de " << NUM_MERCADORIAS << " mercadorias:" << endl;
    
    for (int i = 0; i < NUM_MERCADORIAS; ++i) {
        cout << "Mercadoria " << (i + 1) << ":" << endl;
        cout << "Preço de compra: ";
        cin >> precoCompra[i];
        cout << "Preço de venda: ";
        cin >> precoVenda[i];
        
        double lucro = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100;
        
        if (lucro < 10) {
            ++lucroMenorQue10;
        } else if (lucro <= 20) {
            ++lucroEntre10e20;
        } else {
            ++lucroMaiorQue20;
        }
    }
    
    cout << "Mercadorias com lucro < 10%: " << lucroMenorQue10 << endl;
    cout << "Mercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "Mercadorias com lucro > 20%: " << lucroMaiorQue20 << endl;
    
    return 0;
}
