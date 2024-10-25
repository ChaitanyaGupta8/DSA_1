#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr , int tar){
    int st = 0, end = arr.size() - 1;
    int ans  = -1;

    while(st <= end){

        int mid = st + (end - st)/2;

        if(arr[mid] == tar){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > tar){
            end = mid - 1;
        }
        else if(arr[mid] < tar){
            st = mid +1;

        }
    }
    return ans;
}

int lastOcc(vector<int> arr , int tar){
    int st = 0, end = arr.size() - 1;
    int ans  = -1;

    while(st <= end){

        int mid = st + (end - st)/2;

        if(arr[mid] == tar){
            ans = mid;
            st = mid + 1;
        }
        else if(arr[mid] > tar){
            end = mid - 1;
        }
        else if(arr[mid] < tar){
            st = mid +1;

        }
    }
    return ans;
}


int main(){
    vector<int> nums = {1,2,3,3,5};
    
    cout<< "First occurence of 3 is at index : "<< firstOcc(nums , 3) <<endl;
    cout<< "Last occurence of 3 is at index : "<< lastOcc(nums , 3) <<endl;

    return 0;
}

//if you want to output in pair<int,int> data type
//then make pair<int,int> p;
//p.first = firstOcc(nums ,3);
//p.second = lastOcc(nums , 3);
//return p;
//in main function
