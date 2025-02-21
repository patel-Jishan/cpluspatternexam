/* Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5*/
#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    for(i=5;i>0;i--){
        for(k=5;k>5-i;k--){
            cout<<" ";
        }
        for(j=i;j<=5;j++){
            cout<<""<<j;
        }
        cout<<endl;
        
    }
}