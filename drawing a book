#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n, int p){
  int ft,bt;
    if(p%2==0)
        {
        ft=p/2;
        bt=(n-p)/2;
    }
    else if(p%2==1)
        {
        ft=(p-1)/2;
        bt=(n-p+1)/2;
    }
    
    
    if(ft>bt)
    return bt;
    else
        return ft;
    
}

int main() {
    int n; 
    scanf("%d", &n);
    int p; 
    scanf("%d", &p);
    int result = solve(n, p);
    printf("%d\n", result);
    return 0;
}
