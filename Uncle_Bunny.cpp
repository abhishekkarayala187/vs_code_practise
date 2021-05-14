#include<iostream>
#include<algorithm>
using namespace std;

int search(int a[], int size, int k){
    int min = 0;
    int max = (size - 1);
    int mid;
    int key = a[k-1];
    sort(a, a+size);
    while(max >= min){
        mid = (min+max)/2;
        if(a[mid] == key){
            return mid+1;
        }
        else if(a[mid] > key){
            max = mid - 1;
        }
        else{
            min = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int T, N, k, e;
    cin>>T;
    for(int i = 0; i < T; i++){
        cin >> N;
        int a[N];
        for(int j = 0; j < N; j++){
            cin>>e;
            a[j] = e;
        }
        cin >> k;
        cout << search(a, N, k) << endl;
    }
}