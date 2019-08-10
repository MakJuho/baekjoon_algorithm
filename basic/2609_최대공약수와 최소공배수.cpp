#include<cstdio>
#include<iostream>

using namespace std;

int GCD_function(int a,int b){

    while(b!=0){
        int r= a%b;
        a = b;
        b = r;
    }
    return a;

}

int LCM_function(int a,int b, int r){
    return (a*b)/r;
}

int main(void){

    int a,b,GCD,LCM;
    //24, 18
    cin >> a >> b ;

    //GCD
    GCD=GCD_function(a,b);
    LCM=LCM_function(a,b,GCD);


    cout << GCD << "\n";
    cout << LCM;
    return 0;
}
