#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int rev(long long int x)
    {int sum=0;
    while(x>0)
        {
        sum=(sum*10)+x%10;
        x/=10;
    }
     return sum;
}

int main() {

  long long  int i,j,k,count=0;
    scanf("%lld%lld%lld",&i,&j,&k);
     for(int l=i;l<=j;l++)
        {
        if((l-rev(l))%k==0)
            {
            count++;
        }
    }
        printf("%lld",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
