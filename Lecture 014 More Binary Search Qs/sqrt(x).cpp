//sqrt integer
class Solution {
public:
    int mySqrt(int x) {
        int st = 0 , end = x;
        long long int ans = -1;
        while(st <= end){
            
            long long int mid = st + (end-st)/2;

            long long int square = mid*mid;

            if(square < x){
                ans = mid;
                st = mid + 1;
            }   else if(square > x){
                end = mid - 1;
            }   else{
                return mid;
            }
        }
        return ans;
    }
};


//for more precision
#include <iostream>
using namespace std;

int SqrtInteger(int x) {
        int st = 0 , end = x;
        long long int ans = -1;
        while(st <= end){
            
            long long int mid = st + (end-st)/2;

            long long int square = mid*mid;

            if(square < x){
                ans = mid;
                st = mid + 1;
            }   else if(square > x){
                end = mid - 1;
            }   else{
                return mid;
            }
        }
        return ans;
    }

double morePrecision(int n , int precision , int tempSol){

    double factor = 1;
    double ans = tempSol;

    for(int i = 0 ; i<precision ; i++){
        factor = factor/10;
        
        for(double j = ans ; j*j<n ; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<< "enter the number : "<<endl;
    cin>>n;

    int tempSol = SqrtInteger(n);

    cout << "Answer is : " << morePrecision(n , 3 , tempSol);

    return 0;
}
