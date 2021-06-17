/*Move all negative numbers to beginning and positive to end with constant extra space
Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Note: Order of elements is not important here.*/
#include <bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(i==j){
                j++;
            }
            else{
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={ -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    func(arr,9);
    return 0;
}
