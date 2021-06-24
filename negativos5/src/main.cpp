#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int vetor[5];
    int i, menor;
    for (i = 0; i <= 5; i++){
        cin >> vetor[i];
        if (vetor[i] < 0){
            menor++;
        }
    }
    cout << menor << std::endl;
    return 0;
}
