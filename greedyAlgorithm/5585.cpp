#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int tot= 1000;
    int nCnt = 0;
    int pay;

    cin >> pay;

    tot = tot - pay; // 남은 금액

    nCnt = nCnt + tot / 500;
    tot = tot % 500;

    nCnt = nCnt + tot / 100;
    tot = tot % 100;

    nCnt = nCnt + tot / 50;
    tot = tot % 50;

    nCnt = nCnt + tot / 10;
    tot = tot % 10;

    nCnt = nCnt + tot / 5;
    tot = tot % 5;

    nCnt = nCnt + tot / 1;


    cout << nCnt;


    return 0;
}