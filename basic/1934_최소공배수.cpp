#include<cstdio>
#include<iostream>

using namespace std;

int GCD_function(int a, int b){
    int r;

    while(b !=0){
        r = a%b;
        a = b;
        b = r;
    }

    return a;

}

int main(void){

    int cnt;
    int a,b;
    int GCD, LCM;
    
    cin >> cnt;

    int ary[cnt][3]; // 1col : a, 2col : b, 3col : LCM


    for(int i=0; i<cnt; ++i)
    {
        
        cin >> a >> b ;

        // GCD
        GCD = GCD_function(a,b);
        // LCM
        LCM = a*b/GCD;
        // cout << LCM << "\n";

        ary[i][0]=a;
        ary[i][1]=b;
        ary[i][2]=LCM;

        // cout << "ary[cnt][0]" << ary[cnt][0] << "\n";
        // cout << ary[cnt][1] << "\n";
        // cout << ary[cnt][2] << "\n";

    }
    
    for (int i=0; i<cnt; i++){
        cout << ary[i][2] << "\n";
    }
    return 0;
}