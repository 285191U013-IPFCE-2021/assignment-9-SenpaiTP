#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    bool result = false;

    while(result != true){
        if(a[n] == x){
            result = true;
        }
        else{
            search(a, n - 1, x);
        }
    }


    return result;
}