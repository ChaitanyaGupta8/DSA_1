#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr , int tar){
    int st = 0 , end = arr.size() - 1;
    

    while(st <= end){
        int mid = st +(end-st)/2;
        if(tar > arr[mid]){
            st = mid + 1;
        }
        else if(tar < arr[mid]){
            end = mid - 1;
        }   else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};

    int tar1 = 6;

    cout << "index of target is " << binarySearch(arr , tar1) <<endl;
    return 0;
}
