#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int a){
    int d = a;
    int sum = 0, rem = 0, power = 0;
     int size = trunc(log10(a)) + 1;
    while(a > 0){
        rem = a%10;
        power = (int)(pow(rem, size)+0.5);
        sum = power + sum;
        a = a/10;
    }
    if(sum == d){
        cout<<"Armstrong";

    }
    else
        cout<<"Not Armstrong";
}

int main(){
    int a;
    cin >> a;
    armstrong(a);
}

