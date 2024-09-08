//Find sum of all even numbers form 1 to n.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter bvalue of n:";
    cin>>n;
    int sum = 0;
    for(int i = 2 ; i<=n ; i = i+2){
        sum += i;

    } 
    cout<<"Value of sum is:"<<sum<<endl;
    return 0;
}
