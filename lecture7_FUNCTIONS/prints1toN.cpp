#include <iostream>
using namespace std;
//void does not return anything so do not assign it to any variable
void print_1_to_n(int n){
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
}
int main(){
int n;
cin>>n;
print_1_to_n(n);
}