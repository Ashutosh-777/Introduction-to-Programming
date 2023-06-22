#include <iostream>
using namespace std;
int sumof_digit(long long n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
// int main(){
//     cout<<sumof_digit(999999999999999)<<endl;
// }

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    if(n==1){
        sum=sum+sumof_digit(a[0]);
        }else{
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            long long x=a[i]+a[j];
            sum=sum+sumof_digit(x);
        }
    }
    }
    cout<<sum;
    return 0;
}