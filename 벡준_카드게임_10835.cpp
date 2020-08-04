////
////  벡준_카드게임_10835.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 2..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<string.h>
//
//using namespace  std;
//#define MAX_ARR 2001
//
//int _left[MAX_ARR];
//int _right[MAX_ARR];
//int n, N;
//
//int dp[MAX_ARR][MAX_ARR];
//
//
//int dfs(int l, int r){
//    if(l==n||r==n) return 0;
//    int &res = dp[l][r];
//    if(res!=-1) return res;
//    res =0;
//    
//    res = dfs( l+1,  r);
//    res = max(res,dfs( l+1,  r+1));
//    if(_right[r]<_left[l])  res = max(res, dfs( l, r+1)+_right[r]);
//    
//    return res;
//}
//
//
//
//int main(){
//    memset(dp, -1, sizeof(dp));
//    scanf("%d", &n);
//    
//    for(int i=0; i<n; i++) scanf("%d", &_left[i]);
//    for(int i=0; i<n; i++) scanf("%d", &_right[i]);
//
//    printf("%d\n", dfs(0,0));
//    
//    
//}