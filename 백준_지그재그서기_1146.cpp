////
////  백준_지그재그서기_1146.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//#define MAX_ARR 101
//#define MOD 1000000
//#define UP 0
//#define DOWN 1
//int dp[2][MAX_ARR];
//
//int main(){
//    int N;
//    scanf("%d", &N);
//    
//    if(N==1){
//        printf("1\n");
//        return 0;
//    }
//    dp[UP][0] = dp[UP][1] = 1;
//    dp[UP][0] = dp[DOWN][1] =1;
//    
//    for(int i=2; i<=N; i++){
//        for(int j = 0; j<i; j++){
//            dp[UP][i] += dp[DOWN][j]*dp[DOWN][i-j-1]%MOD;
//            dp[UP][i]%=MOD;
//            dp[DOWN][i] += dp[UP][j]*dp[UP][i-j-1]%MOD;
//            dp[DOWN][i]%=MOD;
//        }
//    }
//    
//    int res = dp[UP][N]+dp[DOWN][N];
//    
//    printf("%d\n", (res)%MOD);
//    
//    
//}