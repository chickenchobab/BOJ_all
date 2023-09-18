#include <iostream>

using namespace std;

int t,x,a[41],b[41],dp[41];

int fibonacci(int n) {
    if(dp[n]) {
        return dp[n];
    }
    if (n == 0) {  
        return dp[0]=0;
    } else if (n == 1) {
        
        return dp[1]=1;
    }
    else {
        return dp[n]=fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    cin.tie(0); cout.tie(0);
    cin>>t;
    while(t--){

        cin>>x;
        for(int i=0;i<=x;i++){
            a[i]=b[i]=dp[i]=0;
        }
        a[0]=1, a[1]=0;
        b[0]=0, b[1]=1;
        
        for(int i=2;i<=x;i++){
            a[i]=a[i-1]+a[i-2];
            b[i]=b[i-1]+b[i-2];
        }
        //fibonacci(x);

        cout<<a[x]<<" "<<b[x]<<'\n';
    }
}