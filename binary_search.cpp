#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int a[], int size, int key){
    int max = (size - 1);
    int min = 0;
    int mid;
    while(max >= min){
        mid = (max + min)/2;
        if(a[mid]==key){
            return mid;
        }
        else if (a[mid] > key){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }
    }
    return -1;
}

int main(){
    int N, key, e;
    cin>>N;
    int a[N];
    for(int i = 0; i < N; i++){
        cin >> e;
        a[i] = e;
    }
    cin>>key;
    sort(a, a+N);
    for(int i = 0; i < N; i++){
        cout<<a[i]<<" ";
    }
    cout << endl;
    cout<<binary_search(a, N, key);
    
}