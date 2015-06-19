#include<bits/stdc++.h>
using namespace std;int main(){int t,w,h,j,k;cin>>t;while(t--){double a=1;cin>>w>>h;if(h>w)swap(w,h);if(w*h%2!=0)cout<<0;else{for(j=1;j<=ceil(w/2);++j)for(k=1;k<=ceil(h/2);++k)a*=4*pow(cos(M_PI*j/(w+1)),2)+4*pow(cos(M_PI*k/(h+1)),2);cout<<(long long)a;}cout<<endl;}return 0;}
