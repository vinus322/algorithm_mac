////
////  백준_서로수의 개수_1750.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 1..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//#define MAX_N 110
//#define MAX_NUM 100001
//
//
//int dp[MAX_N][MAX_NUM];
//int num[MAX_NUM];
//int n;
//
//
//int gcd(int a, int b){
//    if(a%b==0) return b;
//    return gcd(b, a%b);
//}
//
//
////
////int dfs(int depth, int curr){
////    int max, min;
////    int &ret = dp[depth][curr];
////    if(ret) {
////        if(ret==-1) return 0;
////        return ret;
////    }
////    if(depth==n){
////     if(curr==1) return 1;
////     else return 0;
////    }
////    int tmp = num[depth];
////    if(curr>tmp){
////        max = curr, min = tmp;
////    }else{
////        max = tmp ,min = curr;
////    }
////    ret += dfs(depth+1, gcd(max, min));
////    ret%=10000003;
////    ret += dfs(depth+1, curr);
////    if(ret==0){
////     ret =-1;
////     return 0;
////    }
////    
////    return ret%10000003;
////    
////}
////
////void solve1(){
////    int res =0;
////    scanf("%d", &n);
////    
////    for(int i=0; i<n; i++){
////        scanf("%d", &num[i]);
////    }
////
////    for(int i=0; i<n; i++){
////        res += dfs(i+1, num[i]);
////        res%=10000003;
////    }
////    printf("%d\n", res%10000003);
////}
//
//int main(){
//    scanf("%d", &n);
//    
//    for(int i=0; i<n; i++){
//        scanf("%d", &num[i]);
//    }
//    for(int i=1; i<=n; i++){
//        dp[i][num[i-1]]+=1;
//        for(int j=1; j<MAX_NUM; j++){
//            int res = 0;
//            if(!dp[i-1][j]) continue;
//            dp[i][j]+=dp[i-1][j]; //해당 수를 넣지 않을 경우
//            dp[i][j]%=10000003;
//            
//            if(num[i-1]>j) res = gcd(num[i-1],j);
//            else res = gcd(j,num[i-1]);
//            dp[i][res]+=dp[i-1][j]; //해당 수를 넣었을 경우
//            dp[i][res]%=10000003;
//        }
//    }
//    printf("%d\n", dp[n][1]%10000003);
//    return 0;
//}
//
