#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int frequency(int array[],int n, int a){
    int b = 0;
    for(int x=0;x<n;x++){
        if(array[x]==a){
            b+=1;
        }
    }
    return b;
}

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,M,K;
        cin>>N>>M>>K;
        int array[K];
        for(int j=0;j<K;j++){
            cin>>array[j];
        }
        for(int k=1;k<N+M+1;k++){
            int a = k;
            int c = frequency(array[],K,k);
            int y = 0;
            vector<int> v;
            if(c>1){
                if(k<=N){
                    y+=1;
                    v.push_back(k);
                }
            }
        }
        if(v.size()==0){
            cout<<0<<endl;
        }
        else{
            string s = to_string(y);
            for(int m=0;m<y;m++){
                s+= " ";
                s+= to_string(v[m]);
            }
            cout<<s<<endl;
        }
    }
    return 0;
}