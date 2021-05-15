#include<iostream>
#include<stdio.h>
using namespace std;


int record_breaker(int a[], int size){
    int temp = -1;
    int count = 0, curr = 0, i = 0, j = (size - 1);
    while(curr < size){
        if(size == 1 && a[i] > 0){
            return count = 1;
        }
        else if(size > 1 && (a[i] > a[i+1] && a[i] > temp) || (i==(size-1) && a[j] > a[j-1] && a[j] > temp)){
            count++;
            temp = a[i];
        }
        i++;    
        curr++;
    }
    return count;
}
int main(){
    int T, N;
    cin>>T;
    for(int i = 1; i <= T; i++){
        cin >> N;
        int a[N];
        for(int j = 0; j < N; j++){
            int e;
            cin >> e;
            a[j] = e;
        }
        printf("Case #%d: %d\n", i, record_breaker(a, N));
    }
}