/* Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
11
12 13
14 15 16
17 18 19 20*/
#include<iostream>
using namespace std;
int main(){
    int n=11;
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<" "<<n;
            n++;
        }
        cout<<endl;
    }
}