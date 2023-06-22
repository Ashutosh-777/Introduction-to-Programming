#include <iostream>
using namespace std;
//using for loop
void selectionSort(vector<int>& a, int n)
{   
    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j =i;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i],a[minIndex]);
    }
}
void selectionSort#2(vector<int>& a, int n)
{   
    for(int i=0;i<n-1;i++){
        int minIndex=-1;
        int min = a[i];
        int j =i;
        while(j<n){
            if(min>a[j]){
                min = a[j];
                minIndex = j;
            }
            j++;
        }
        if(minIndex==-1){
            continue;
        }
        swap(a[i],a[minIndex]);
    }
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int min(int a[],int n){
    int min=a[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            index=i;
        }
    }
    return index;
}
void Selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int index=min(a+i,n-i);
        swap(a[i],a[index+i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }

    return 0;
}