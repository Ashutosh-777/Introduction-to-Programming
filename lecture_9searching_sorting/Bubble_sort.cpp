#include <iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Bubble_Sort(int a[],int n){
    int x=n-1;
    while(x--){
        for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    }
    
}
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble_Sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}