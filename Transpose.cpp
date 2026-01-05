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
// Transpose
for(int j=0;j<c;j++){
    for(int i=0;i<r;i++){
     cout<<arr[i][j];
    }
    cout<<endl;
    
}

    return 0;
}