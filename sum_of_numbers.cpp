#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int N;
    cin>>N;
    int sum = 0;
    // sum of first N numbers 
    cout<<(N*(N+1))/2<<endl;
    
    //sum of first square N numbers
    cout<<(N*(N+1)*(2*N+1))/6<<endl;

    //sum of first cube N numbers;
    cout<<(int)(pow((N*(N+1))/2, 2)+0.5);
}