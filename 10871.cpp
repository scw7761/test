#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> v(n);

    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]<x){
            cout<<v[i]<<" ";
        }
    }



}