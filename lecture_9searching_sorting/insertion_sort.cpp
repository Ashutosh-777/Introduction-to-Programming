#include <iostream>
using namespace std;
//every round make array sorted till i
void insertionSort(int n, vector<int> &a){
    for(int i = 1;i<n;i++){
        if(a[i-1]>a[i]){
            int j = i;
            int x = a[i];
            while(j>=0&&a[j-1]>x){
                a[j]=a[j-1];
                j--;
            }
            a[j]=x;
        }
    }
    // Write your code here.
}
void Insertion_Sort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=a[i];
        while(j>=0&&x<a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=x;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Insertion_Sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}