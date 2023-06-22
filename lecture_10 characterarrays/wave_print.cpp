#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"next i j"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"next j i"<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[j][i];
        }
        cout<<endl;
    }
    cout<<"next n m"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}