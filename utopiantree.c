#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,h; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        h=1;
    for(int i=0;i<n;i++)
        {
        if((i+1)%2==0)
            {
            h++;
        }
        else if((i+1)%2==1)
            {
            h*=2;
        }
        
    }
        printf("%d\n",h);
    }

     return 0;
}
