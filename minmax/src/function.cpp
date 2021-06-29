#include "function.h"
#include "stddef.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{
    int max = -100000;
    int min = 100000;
    int pos_max, pos_min;

    for (int i = 0; i <= n; i++){
        if (V[i] > max){
            pos_max = i;
            max = V[i];
        }
        else if (V[i] < min){
            pos_min = i;
            min = V[i];
        }
    
    }

    return std::make_pair (min, max);
    
    
}
