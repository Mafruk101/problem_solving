#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        int arr1[x];
        for (int j=0;j<x;j++){
            cin>>arr1[j];
        }
        
        int oddCount=0;
        int mod4_0Count =0;
        int mod4_2Count=0;
        for(int j=0;j<x;j++){
            if(arr1[j]%2==1){
                oddCount++;
            }
            if(arr1[j]%4==0){
                mod4_0Count++;
            }
            if(arr1[j]%4==2){
                mod4_2Count++;
            }

        }
        cout<<max(oddCount, max( mod4_0Count, mod4_2Count));
        cout<<endl;
    }
    
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         int x;
//         cin>>x;
//         int arr1[x];
//         for (int j=0;j<x;j++){
//             cin>>arr1[j];
//         }
        
//         int count=1;
//         for (int j=0;j<x-1;j++){
//             for(int k=j+1;k<x;k++){
//                 if(arr1[j]==arr1[k]){
//                     count++;
//                 }
//             }
//             if(count>1){
//                 break;
//             }
//         }
//         if(count==1){
//             for (int a=0; a<100000; a++){
//                 for (int j=0;j<x;j++){
//                     arr1[j]=arr1[j]-2;
//                     if(arr1[j]<0){
//                         arr1[j]=arr1[j]*(-1);
//                     }
//                 }
//                 count =1;
//                 for (int j=0;j<x-1;j++){
//                     for(int k=j+1;k<x;k++){
//                         if(arr1[j]==arr1[k]){
//                             count++;
//                         }
//                     }
//                     if(count>1){
//                         break;
//                     }
//                 }
                
//             }
//         }

//         cout<<count;
//         cout<<endl;
//     }
// }