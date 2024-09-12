#include <iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1 ; i<=n ; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    int ans = fact (n);
    cout<<ans;
    return 0;
}
int nCr(int n, int r){
    int num = fact(n);

    int deno = fact(r) * fact(n-r);

    return num/deno;
}
int main(){
    int n , r;
    cout<<"Enter n and r:";
    cin>>n>>r;

    cout<<"Answer is: "<<nCr(n,r)<<endl;

    return 0;
}
