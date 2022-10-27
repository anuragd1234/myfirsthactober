#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        int arr[N];
        int arr1[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        int ct=0;
        for(int i=0;i<N;i++){
            
                int r=arr[i]+arr1[i+1];
                
                int s=(arr[i]-arr[i+1])%M;
arr1[ct]=r+s;
ct++;
            }
        
            cout<<*max_element(arr1,arr1+(N));
    }
        }
    

