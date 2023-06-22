#include <iostream>
using namespace std;
void reversal_of_array(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }

}
int main(){
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    reversal_of_array(a,n);
    for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }

    return 0;
}