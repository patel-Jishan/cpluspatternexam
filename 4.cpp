/* Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
loop.
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1*/
#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>=1;i--){
     for(k=5;k>i;k--){
        cout<<" ";
     }
        for(j=1;j<=i;j++){
            if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
}