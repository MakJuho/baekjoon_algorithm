#include<cstdio>
#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    int cnt;
    string s1;
    cin >> cnt;
    int ary[cnt]={0};
    string tok;
    for(int i=0; i< cnt; i++){
        getline(cin,s1);
        cout << s1.length() << "\n";
        while(s1 != NULL){
            tok = strtok(s1," ");
            cout << tok << "\n";
        }
        // for(int i=0; i<line_cnt; i++){

        // }

    }

    return 0;
}