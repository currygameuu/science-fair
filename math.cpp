#include <iostream>

using namespace std;

int main(){
    float S;
    float ans;
    for(int p=3.0;p<=100.0;p++){
        S = (p*(1+p))/4.0;
        // cout << "S: " << S << endl;
        for(int n=1;n-1<p;n++){
            for(int length=1; n+(length-1)<p; length++){
                ans = (length*(2*n+(length-1)))/2;
                // cout << "ans:" << ans << endl;
                if(S == ans){
                    cout << 'C' << p << " T1: " << n << "~" << n+(length-1) << endl;
                }
            }
        }
    }
}