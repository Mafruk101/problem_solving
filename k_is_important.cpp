#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin>> n>>k;
    int arr[n+1];
    for(int i=1; i<=n;i++){
        cin>>arr[i];
    }
    long long score=0;
    
    while (n>=k){
        if(arr[k]>arr[n-k+1]){
            score=score+arr[k];
            for(int j=k;j<n;j++){
                arr[j]=arr[j+1];
                
            }
            n--;
        }
        else{
            score=score+arr[n-k+1];
            for(int j=n-k+1;j<n;j++){
                arr[j]=arr[j+1]; 
            }
            n--;
        }
    }
        
    

    // for(int i=1; i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<score<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--)
    solve();

}