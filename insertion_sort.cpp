#include<iostream>
using namespace std;

void insertion_sort(int A[], int size){
    int key, j, i;
    for (j= 1; j < size; j++){
        key = A[j];
        i = j-1;

        while(i >= 0 && A[i] > key){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
    }

    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
}
int main(){
    int A[] = {3, 4, 5, 6, 1, 2};

    insertion_sort(A, 6);
}