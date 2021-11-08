#include "sum.h"


int sum(int a[], int n)
{
    int result;
    
    if(n > 0){
        result = sum(a, n-1) + a[n - 1];
    }
    return result;
}