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
return count;
}
int main(){
    char name[100];
    cin>>name;
    cout<<string_length(name)<<endl;

    return 0;
}