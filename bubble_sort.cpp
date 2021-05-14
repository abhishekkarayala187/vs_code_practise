#include<iostream>
using namespace std;

void Bubble_sort(int a[], int size){
    int counter = 1;
    while(counter < size){
        for(int i = 0; i < size - counter; i++){
            if(a[i]>a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++){
        int e;
        cin>>e;
        a[i]=e;
    }

    Bubble_sort(a,N);
}