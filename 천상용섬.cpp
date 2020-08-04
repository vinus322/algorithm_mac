////
////  천상용섬.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 1..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//#define MAX_N 301
//#define MAX_NUM 1000001
//
//int dp[MAX_N][333];
//vector<int> input[MAX_N];
//int n;
//
//void init(){
//    for(int i=0; i<MAX_N; i++){
//        for(int j=0; j<333; j++)
//            dp[i][j] =0;
//    }
//}
//
//void module(int idx, int n){
//    
//    for(int i=1; i*i<=n; i++){
//        if(i*i==n)input[idx].push_back(i);
//        else if(n%i==0){
//            input[idx].push_back(i);
//            input[idx].push_back(n/i);
//        }
//    }
//}
//
//
//void solve(){
//    init();
//    scanf("%d", &n);
//    
//    for(int i=0; i<n; i++){
//        int tmp;
//        input[i].clear();
//        scanf("%d", &tmp);
//        module(i, tmp);
//        sort(input[i].begin(), input[i].end());
//    }
//    int size = (int)input[0].size();
//    
//    for(int i=0; i<size; i++){
//        dp[0][i] = 1;
//    }
//    
//    
//    for(int i=1; i<n; i++){
//        int jsize = (int)input[i].size();
//        int ksize = (int)input[i-1].size();
//        int j =0;
//        for(int k=0; k<ksize&&j<jsize; k++){
//            if(input[i][j]<input[i-1][k]){
//                j++;
//                dp[i][j]+=dp[i][j-1];
//                k--;
//                continue;
//            }
//            dp[i][j]+=dp[i-1][k];
//        }
//        j++;
//        for(;j<jsize; j++)
//            dp[i][j]+=dp[i][j-1];
//    }
//    int res =0;
//    size = (int)input[n-1].size();
//    
//    for(int i=0; i<size; i++){
//        res += dp[n-1][i];
//    }
//    
//    printf("%d\n", res);
//    
//}
//
//
//int main(){
//
//    int testCase;
//    scanf("%d", &testCase);
//    
//    for(int i=0; i<testCase; i++)
//        solve();
//    
//    return 0;
//    
//}