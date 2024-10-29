#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
const int N=1e3+2,MOD=1e9+7;

bool isDivBy3(int num){
    if(num==0){
        return 1;
    }
    else if(num%3==0){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"enter the limit";
    cin>>n;
    int op=0;
    vi nums(n);
    cout<<"enter ur array";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        if((nums[i])%3!=0){
            if((nums[i]-1)%3==0){
                op++;
            }
            else if((nums[i]+1)%3==0){
                op++;
            }
        }
    }
    cout<<"you need "<<op<<" operations.";

 return 0;
}