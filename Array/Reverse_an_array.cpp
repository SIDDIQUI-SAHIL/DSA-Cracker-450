/* Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}*/

#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<=right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[4]={2,1,5,4};
    reverse(arr,4);
    return 0;
}