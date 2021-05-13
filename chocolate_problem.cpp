#include<iostream>
using namespace std;

/* So the question is given that I have certain amount of rupees and I can buy a chocolate in one rupee, 
and with three chocolate wrappers I can buy extra chocolate.
So tell how many chocolate I can have with the money.
*/

void chocolate(int N){
    int wrappers_chocolate = 0, sum = 0, wrappers = 0;
    sum = sum + N;
    wrappers_chocolate = N/3;
    wrappers = N%3;
    int temp = 0;
    while(wrappers_chocolate > 0){
        sum = sum + wrappers_chocolate; //20
        if(wrappers_chocolate >= 3){
        wrappers = wrappers_chocolate%3; //2
        }else{
            wrappers = 0;
        }
        wrappers_chocolate = (temp + wrappers_chocolate)/3; //1
        temp = wrappers_chocolate+wrappers; //3
        
    }
    cout << sum;
}

int main(){
    int N;
    cin>>N;
    chocolate(N);
}