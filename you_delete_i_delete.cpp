#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for (int j=0; j<s.length(); j++){
            if(s[j]=='0'){
                s.erase(j,1);
                break;
            }
        }
        for (int j=0; j<s.length(); j++){
            if(s[j]=='1'){
                s.erase(j,1);
                break;
            }
        }
        cout<<s;
        cout<<endl;
    }
}