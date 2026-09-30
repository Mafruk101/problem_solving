#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3; i++){
        arr[i]=n-arr[i];
    }
    cout<< *max_element(arr, arr+3)<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}