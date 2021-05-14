#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T,N,e;
    cin>>T;
    for(int i = 0; i < T; i++){
        cin >> N;
        int S[N];
        int diff = 0;
        for(int i = 0; i < N; i++){
            cin>>e;
            S[i] = e;
        }
        
        sort(S, S+N);
        int b[N-1];
        for(int i = 0; i < N; i++){
            b[i] = S[i+1]-S[i];
        }
        sort(b, b+(N-1));
        cout<<b[0]<<"\n";
    }
    
    
    
	return 0;
}
