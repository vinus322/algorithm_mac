//
////  백준_아티스트이동호_1582.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 23..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<string.h>
//
//using namespace std;
//#define MAX_ARR 101
//
//int dp[MAX_ARR][MAX_ARR][MAX_ARR][2];
//int res[MAX_ARR][3001];
//int map[MAX_ARR][MAX_ARR];
//int min(int x, int y){
//    return x>y?y:x;
//}
//int max(int x, int y){
//    return x>y? x:y;
//}
//
//
//int main(){
//    int n,m,k;
//    
//    memset(dp,(int)10001,sizeof(dp));
//    memset(res,(int)10001, sizeof(res));
//    
//    scanf("%d %d %d", &n,&m ,&k);
//    
//    for(int i=1; i<=n; i++){
//        char input[MAX_ARR];
//        scanf("%s", input);
//        for(int j=1; j<=m; j++){
//            if(input[j-1]=='B') map[i][j] = 1;
//        }
//    }
//    
//    
//    
//    
//    for(int i=1; i<=n; i++){
//        dp[i][0][0][0]=dp[i][0][0][1] = 0;
//        for(int paint=1; paint<=m; paint++){
//            for(int j=1;j<=m; j++){
//                for(int c=0; c<2; c++){
//                    int diff = (c==map[i][j])? 0:1;
//                    dp[i][j][paint][c] = min(dp[i][j][paint][c],dp[i][j-1][paint-1][(c+1)%2]+diff);
//                    dp[i][j][paint][c] = min(dp[i][j][paint][c],dp[i][j-1][paint][c]+diff);
//                }
//            }
//        }
//        dp[i][m][0][0] = dp[i][m][0][1] = m;
//    }
//    
//    res[0][0]=0;
//    for(int i=1; i<=n; i++){
//        for(int j=0; j<=k; j++){
//            for(int r=0; r<=j&&r<=m; r++){
//                for(int c =0; c<2; c++){
//                    res[i][j] = min(res[i][j],res[i-1][j-r]+dp[i][m][r][c]);
//                }
//            }
//        }
//    }
//    
//    
//    int result = 11001;
//    for(int i=0; i<=k; i++)
//        result = min(result, res[n][i]);
//    
//    printf("%d\n",result);
//    
//    return 0;
//}