/* Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
            5
          4 5 4
        3 4 5 4 3
      3 3 4 5 4 3 2
    1 2 3 4 5 4 3 2 1*/
    #include<iostream>
    using namespace std;
    int main(){
        int i,j,k;
        for( i=5 ;i>=1;i--){
            for( k=5;k>=5-i;k--){
                cout<<"  ";
            }
            for( j=i;j<=5;j++){
                cout<<" "<<j;
            }
           
         for(j=4;j>=i;j--){
            cout<<" "<<j;
         }
         cout<<endl;
        }
    }