#include <iostream>
using namespace std;
int string_length(char name[])
  {
  int count =0;
  int i=0;
  while(name[i]!='\0'){
    count++;
    i++;
  }
  }
int main(){
    char name[100];
    cin>>name;
    name[3]='x';
    int length = string_length(name);
    for(int i=0;i<length;i++)
    {
        if(c[i]==' '){
            continue;
        }
        else
        cout<<c[i];
    }
    return 0;
}