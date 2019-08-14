#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int N,K;
    int val;
    
    int cashCnt;
    int remainder;
    int cnt = 0;
    int totKindsCash=0;
    int rlt=0;
    cin >> N >> K;

    int aryN[N]={0,};

    while(cnt < N){
        cin >> val;
        aryN[cnt] = val;
        cnt++;
    }


    remainder = K;
    totKindsCash = cnt-1;
    // 가장 큰 금액으로 나누기 + 동전 개수 체크
    while(remainder != 0){
        cashCnt = remainder / aryN[totKindsCash];
        remainder = remainder % aryN[totKindsCash]; 
        if(cashCnt == 0){
            totKindsCash--;
        }else{
            rlt += cashCnt;
        }
    }
    cout << rlt << endl;
    

    // for(int i =0 ; i< sizeof(aryN)/sizeof(int); i++){
    //     cout << aryN[i] << endl;
    // }
    

    return 0;
}