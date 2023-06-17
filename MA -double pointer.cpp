
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    //imp part 
     int **arr;
     arr= new int*[m];
      for( int i=0;i<m;i++){
          arr[i]=new int[n];
      }
      
      //ends here
       for( int i=0;i<n;i++){
           for(int j=0;j<n;j++){
              arr[i][j]=10;
              cout<<arr[i][j]<<"  ";
           }

           cout<<endl;
       }
    return 0;
}