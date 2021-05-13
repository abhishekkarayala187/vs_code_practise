#include<iostream>
using namespace std;

void triplets(int a, int b, int c){
    int x,y,z;
    int temp;
    a >= b ? (temp = a, y = b): (temp = b, y = a);
    temp >= c ? (x = temp, z = c): (x = c, z = temp);
    if(x*x == y*y + z*z){
        cout<<"pythogorian triplets";
    } else{
        cout<<"Not pythogorian triplets";
    }
}

int main(){
    //check for pythogorian triplets
    //Pythagorean triples are a2+b2 = c2 where a, b and c are the three positive integers.
    // These triples are represented as (a,b,c). Here, a is the perpendicular, b is the base 
    // and c is the hypotenuse of the right-angled triangle.
    // The most known and smallest triplets are (3,4,5).
    int a, b, c;
    cin>>a>>b>>c;
    triplets(a, b, c);
}