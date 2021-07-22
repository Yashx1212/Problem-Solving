#include <bits/stdc++.h>

using namespace std;

int solve(string s){
    int n=s.length();
    int count=0;

    for(int i=0;i<n/2;i++){
        int left=i;
        int right=n-i-1;
        while(left < right){
            if(s[left]==s[right]){
                break;
            }else{
                right--;
            }
        }

        if(left==right){
            return -1;
        }

        for(int j=right;j<n-left-1;j++){
            swap(s[j],s[j+1]);
            count++;
        }
        
    }

    return count;

}

int main(){
    string s;
    cin>>s;
    string t=s;
    reverse(s.begin(),s.end());
    cout<<max(solve(t),solve(s))<<endl;

    return 0;
}