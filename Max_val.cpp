#include <iostream>
using namespace std;

int main() {
   
int r;
cin>>r;
int c;
cin>>c;
 int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
}
//MAx
int max=arr[0][0];
for(int i=0;i<r;i++){
   
    for(int j=0;j<c;j++){
  if(arr[i][j]>max){
   max= arr[i][j];
  }
    }
    
}
cout<<max;

    return 0;
}