#include<iostream>
using namespace std;

/* So the question is given that I have certain amount of rupees and I can buy a chocolate in one rupee, 
and with three chocolate wrappers I can buy extra chocolate.
So tell how many chocolate I can have with the money.
*/

/* naive method
int rem_wrapchoc(int choc, int wrap_price){
    if(choc < wrap_price){
        return 0;
    }

    int wrap = choc/wrap_price;

    return wrap + rem_wrapchoc((wrap + choc%wrap_price), wrap_price);
}

*/

int chocolate(int N, int price, int wrap_price){
    int choc = N/price;
    

    // return choc + rem_wrapchoc(choc, wrap_price);

    return choc + ((choc - 1)/(wrap_price - 1));
}

int main(){
    int N;
    int price;
    int wrap_price;
    cin>>N>>price>>wrap_price;
    cout << chocolate(N, price, wrap_price);
}