#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n;i++){
        int x;
        cin>>x;
        int arr1[x];
        for (int j=0;j<x;j++){
            cin>>arr1[j];
            if (arr1[j]<0 || arr1[j]>1){
                cout<<"invalid input"<<endl;
                return 0;
            }
        }
        int count1=0;
        int count0=0;

        for(int j=0; j<x;j++){
            if(arr1[j]==1){
                count1++;
            }else{
                count0++;
            }
        }
        if (count1>=count0){
            cout<<"Bessie"<<endl;
        }
        else{
            cout<<"Elsie"<<endl;
        }  
    }
}



