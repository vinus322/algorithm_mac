////
////  환상의 듀엣.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 2..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define MAX_ARR 2001
//#define INF 100000000
//
//int n;
//int arr[MAX_ARR];
//int dp[MAX_ARR][MAX_ARR];
//
//
//int dfs(int depth, int s1, int s2){
//    int &ret = dp[s1][s2];
//    if(ret!=-1) return ret;
//    if(depth==n+1) return 0;
//    
//    int tmp;
//    
//    ret = dfs(depth+1,depth,s2)+abs(arr[s1]-arr[depth]);
//    if(s2==0) tmp = dfs(depth+1,s1,depth);
//    else tmp = dfs(depth+1,s1,depth)+abs(arr[s2]-arr[depth]);
//    ret = (ret>tmp)? tmp: ret;
//    
//    return ret;
//}
//void init(){
//    for(int i=0; i<=n; i++){
//        for(int j=0; j<=n; j++){
//            dp[i][j] = -1;
//        }
//    }
//}
//
//
//int main(){
//    scanf("%d", &n);
//    init();
//    
//    for(int i=1; i<n+1; i++) scanf("%d", &arr[i]);
//    int res  = dfs(1,1,0);
//    
//    printf("%d\n", res);
//    
//}