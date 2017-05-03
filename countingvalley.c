#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,u=0,ans=0;
    char a[1000000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(i=0;i<n;i++){
        if(a[i]=='U')
            { u++;}
        if(a[i]=='D'){
            u--;
        }
        if(a[i]=='U'&&u==0){
            ans++;
        }
        
    }
    cout<<ans;
    /* Enter your 
    code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
