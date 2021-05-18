#include<iostream>
#include <stdio.h>
using namespace std;

int fact(int n){
   if(n == 1){
       return 1;
   } 
   
   int factorial = fact(n-1);
   return n * factorial;
}

int power(int N, int P){
    if(P == 0){
        return 1;
    }
    
    int powerr = power(N, P-1);
    return N*powerr;
}

int fibb(int N){
    if(N == 0){
        return 0;
    }else if(N == 1){
        return 1;
    } 
    return fibb(N-1) + fibb(N-2);
}

int main()
{
    int N, P;
    cin >> N >>P;
    
    cout << fact(N) << endl;
    cout << fact(N)/(fact(P)*fact(N-P)) << endl;
    cout << power(N, P) << endl;
    cout << fibb(N);

    return 0;
}
