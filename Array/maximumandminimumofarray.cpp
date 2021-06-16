/*Maximum and minimum of an array using minimum number of comparisons
int arr[] = { 1000, 11, 445,1, 330, 3000 };
Minimum element is 1
Maximum element is 3000
*/
#include <bits/stdc++.h>
using namespace std;
void minmax(int arr[],int n){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Minimum- "<<min<<" Maximum- "<<max<<endl;
}
int main(){
    int arr[]={1000, 11, 445,1, 330, 3000};
    minmax(arr,6);
    return 0;
}