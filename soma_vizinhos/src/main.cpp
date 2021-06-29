/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int i=0, m, n, soma=0;
    while (cin >> std::ws >> m 
    && cin >> std::ws >> n)  {
        soma=0;
        if (n > 0) {
            for (i=m; i<m+n; i++)
            soma+=i;
            
        }

        else if (n < 0)
        {
            for (i=m+n+1;i<=m;i++)
            soma+=i;
        }

       else soma = m;
    
    cout << soma << endl;
    }
    
    return 0;

}
