////
////  백준_기업투자_2662.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 9. 2..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//
////기업의 인덱스에 왓을때 투자 액수
//int dp[21][301];
//int n, money;
//int m[21][301];
//int tres[21];
//int res[21], ans;
//
//void copy_res(int value){
//    if(ans>=value) return;
//    ans = value;
//    for(int i=0; i<n; i++)
//        res[i] = tres[i];
//}
//
//
//void func(int idx, int gold, int value){
//    if(gold==money){
//        copy_res(value);
//        return;
//    }
//    if(idx==n){
//        copy_res(value);
//        return;
//    }
//    
//    int& ret = dp[idx][gold];
//    if(ret>=value) return;
//    ret = value;
//    
//    for(int i=0; i<=(money-gold); i++){
//        tres[idx] =i;
//        func(idx+1,gold+i,value+m[idx][i]);
//    }
//    tres[idx] =0;
//    return;
//}
//
//int main(){
//    
//    memset(dp, -1, sizeof(dp));
//    
//    scanf("%d %d", &money, &n);
//    
//    int fmoney;
//    //for(int i=0; i<money; i++){
//    while(scanf("%d", &fmoney)!=EOF){
//       // scanf("%d", &fmoney);
//        for(int j=0; j<n; j++)
//            scanf("%d", &m[j][fmoney]);
//    }
//    
//    func(0,0,0);
//    
//    printf("%d\n", ans);
//    
//    for(int i=0; i<n; i++){
//        printf("%d ",res[i]);
//    }
//    printf("\n");
//    return 0;
//}