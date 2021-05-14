#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int longest_arithmatic(int a[], int size){
    int mx = 2;
    int pre = a[1]-a[0];
    int length = 2;
    int j = 2;
    while(j < size){
        if(pre == a[j]-a[j-1]){
            length++;
            
            
        }else{
            pre = a[j]- a[j-1];
            length = 2;
        }
        j++;
        mx = max(mx, length);
    }
    return mx;
}

int main(){
    int T, N;
    cin>>T;
    for(int i = 1; i <= T; i++){
        cin >> N;
        int a[N], e;
        for(int j = 0; j < N; j++){
            cin >> e;
            a[j] = e;
        }
        printf("Case #%d: %d\n", i, longest_arithmatic(a, N));
    }
    
}