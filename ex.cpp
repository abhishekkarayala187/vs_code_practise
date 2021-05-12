#include<iostream>
#include<string>
using namespace std;

int main(){
    int num, integer = 1;
    cin>>num;
    for(int j = 1; j <= num; j++){
        for (int i = 1; i <= j; i++){
            cout<<integer <<" ";
            integer++;
        }
        cout<<endl;
    } 

}