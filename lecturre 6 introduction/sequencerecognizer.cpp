#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
  
    int i;
    for( i=0;i<n;i++){
        if(s[i]>s[i+1]){
            if(i==n-2){
                cout<<"TRUE"<<endl;
            }else{
            continue;
            }
        }
        else{
            break;
        }  
    }

    i++;
    for( i;i<n;i++){
        if(s[i]<s[i+1]){
            if(i==n-2){
                cout<<"TRUE"<<endl;
                break;
            }else{
            continue;
            }
        }
        else{
            cout<<"FALSE"<<endl;
            break;
        }  
    }
   
   
    
    return 0;
}