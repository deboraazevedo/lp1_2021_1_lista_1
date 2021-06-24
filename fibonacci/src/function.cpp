#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

std::vector < unsigned int> fib_seq;
if (n == 0) {
    return fib_seq;
}
else if (n == 1)
{
    return fib_seq;
}
else if (n > 1) {
    fib_seq.push_back(1);
    fib_seq.push_back(1);
    int i;
    for (i = 2; i < n; i++) {
        fib_seq.push_back(fib_seq[i-1] + fib_seq[i-2]);
        if (fib_seq.back() >= n) {
            fib_seq.pop_back();
        }
    }
    
    return fib_seq;

}
}