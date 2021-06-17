/*Rearrange positive and negative numbers with constant extra space and orderas they where in original array
Input:  [12 11 -13 -5 6 -7 5 -3 -6]
Output: [-13 -5 -7 -3 -6 12 11 6 5]*/
#include <bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int j,i;
    for(int i=0;i<n;i++){
        int key=arr[i];
        if(key>0){
            continue;
        }
        else{
            j=i-1;
            while(j>=0 && arr[j]>0){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6 };
    func(arr,9);
    return 0;
}