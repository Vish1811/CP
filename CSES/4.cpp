#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            continue;
        }
        else{
            s+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
    cout<<s;
    return 0;
}   