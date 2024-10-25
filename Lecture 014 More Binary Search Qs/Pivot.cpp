#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> arr){
    int st = 0 , end = arr.size() - 1;

    while( st < end){
        int mid = st + (end - st)/2;

        if(arr[mid] >= arr[0]){
            st = mid + 1;
        }   else{
            end = mid;
        }

    }
    return st;
}

int main(){
    vector<int> arr = {7,9,0,1,3};

    cout<< "Pivot Index is : " << getPivot(arr) <<endl;
    return 0;
}
