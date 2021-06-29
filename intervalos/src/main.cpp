/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    int x;
    int intervalo1, intervalo2, intervalo3, intervalo4, fora, elementos_lidos;
    intervalo1 = intervalo2 = intervalo3 = intervalo4 = fora = elementos_lidos = 0;
    while( cin >> std::ws >> x) {
        elementos_lidos++;
        if (x >= 0 && x < 25){
            intervalo1++;
        }
        else if  (x >= 25 && x < 50){
            intervalo2++;
        }
        else if (x >= 50 && x < 75){
            intervalo3++;
        }
        else if (x >= 75 && x < 100){
            intervalo4++;
        }
        else fora++;
    }

    cout << setprecision(4) << (double)intervalo1/elementos_lidos*100;
    cout << endl;
    cout << setprecision(4) << (double)intervalo2/elementos_lidos*100;
    cout << endl;
    cout << setprecision(4) << (double)intervalo3/elementos_lidos*100;
    cout << endl;
    cout << setprecision(4) << (double)intervalo4/elementos_lidos*100;
    cout << endl;
    cout << setprecision(4) << (double)fora/elementos_lidos*100;
    cout << endl;

    return 0;
}
