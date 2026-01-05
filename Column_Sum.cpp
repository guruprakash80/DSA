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
// column wise sum..
for(int j=0;j<c;j++){
    int sum=0;
    for(int i=0;i<r;i++){
     sum+=  arr[i][j];
    }
    cout<<sum<<" ";
}

    return 0;
}