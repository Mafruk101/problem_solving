#include<bits/stdc++.h>
using namespace std;
void solve(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    long long score=0;

    long long result = (arr[0]+arr[2]-arr[1]);
    if(result<=0 || result<=(arr[0]-arr[1])*(-1)){
        score=arr[0]-arr[1];
    }
    else{
        score=result;
    }
    
    if(score<0){
        cout<<score*(-1)<<endl;
    }
    else{
        cout<<score<<endl;
    }
    
    

}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}