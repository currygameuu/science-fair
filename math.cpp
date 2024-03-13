#include <iostream>

using namespace std;

int main(){
    float S;
    float ans;
    for(int p=3.0;p<=100.0;p++){
        S = (p*(1+p))/2.0;
        // cout << "S: " << S << endl;
        for(int n=1;n-1<p;n++){
            for(int length=1; n+(length-1)<p; length++){
                ans = (length*(2*n+(length-1)))/2;
                // cout << "ans:" << ans << endl;
                if(S/2.0 == ans){
                    cout << 'C' << p << " T1: " << n << "~" << n+(length-1) << endl;
                }
                else if((S-n+1)/2.0 == ans && n>1){
                    cout << 'C' << p << " T1: " << n << '~' << n+(length-1) << " 平分點: "<< n-1 << endl;
                }
                else if((S-n-length)/2.0 == ans && n+length<=p){
                    cout << 'C' << p << " T1: " << n << '~' << n+(length-1) << " 平分點: "<< n+length << endl;
                }
                else if((S-2*n-length+1)/2.0 == ans && n>1 && n+length<=p){
                    cout << 'C' << p << " T1: " << n << '~' << n+(length-1) << " 平分點: "<< n-1 << ", " << n+length << endl;
                }
            }
        }
    }
}