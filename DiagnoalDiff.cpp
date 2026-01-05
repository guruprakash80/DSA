#include <bits/stdc++.h>
using namespace std;

int main() {
   
int r;
cin>>r;

 int arr[r][r];
for(int i=0;i<r;i++){
    for(int j=0;j<r;j++){
        cin>>arr[i][j];
    }
}
// difference btw primary secondary diagonal
int p,s;
p=0;
s=0;
for(int i=0;i<r;i++){
   
        
    p+=arr[i][i];
        
        s+=arr[i][r-1-i];
    
  
}
cout<<abs(p-s);

    return 0;
}