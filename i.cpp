/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

const int NUM_MESES = 30;
const int LUGARES_POR_MESA = 5;

int main() {
    int mesas[NUM_MESES] = {LUGARES_POR_MESA}; // Inicializa com 5 lugares em cada mesa
    int codigoMesa, lugaresDesejados;
    int totalLugaresOcupados = 0;
    
    while (totalLugaresOcupados < NUM_MESES * LUGARES_POR_MESA) {
        cout << "Digite o código da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigoMesa;
        
        if (codigoMesa == 0) {
            break;
        }
        
        if (codigoMesa < 100 || codigoMesa > 129) {
            cout << "Código de mesa inválido." << endl;
            continue;
        }
        
        int index = codigoMesa - 100;
        cout << "Digite a quantidade de lugares desejados: ";
        cin >> lugaresDesejados;
        
        if (lugaresDesejados <= 0 || lugaresDesejados > LUGARES_POR_MESA) {
            cout << "Quantidade de lugares inválida." << endl;
            continue;
        }
        
        if (mesas[index] >= lugaresDesejados) {
            mesas[index] -= lugaresDesejados;
            totalLugaresOcupados += lugaresDesejados;
            cout << "Reserva realizada com sucesso!" << endl;
        } else {
            cout << "Não há lugares suficientes na mesa " << codigoMesa << "." << endl;
        }
        
        if (totalLugaresOcupados >= NUM_MESES * LUGARES_POR_MESA) {
            cout << "Todos os lugares estão ocupados." << endl;
            break;
        }
    }
    
    return 0;
}
