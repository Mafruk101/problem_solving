#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        int arr1[x];
        for (int j=0;j<x;j++){
            cin>>arr1[j];
            if (arr1[j]<=0 || arr1[j]>x){
                cout<<"invalid input"<<endl;
                return 0;
            }
        }
        int arr2[x];
        copy(arr1, arr1+x,arr2);
        sort(arr1,arr1+x);
        
        // for (int j=0;j<x;j++){
        //     cout<<arr1[j]<<" ";
        // }
        // cout<<endl;
        // for (int j=0;j<x;j++){
        //     cout<<arr2[j]<<" ";
        // }
        // cout<<endl;
        int f=0;
        int arr3[x];
        for (int j=0;j<x;j++){
            if(arr1[j]!=arr2[j]){
                arr3[f]=arr2[j];
                f++;
            }
        }
        // for (int m=0;m<f;m++){
        //     cout<<arr3[m]<<" ";
        // }
        // cout<<endl;
        int arr4[f];
        reverse(arr3,arr3+f);

        copy(arr3,arr3+f,arr4);
        sort(arr3,arr3+f);
        bool flag=true;
        for(int m=0;m<f;m++){
            if(arr3[m]!=arr4[m]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;

    }

}