////
////  백준_행렬곱셈순서_11049.cpp
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
//#include<climits>
//using namespace std;
//
//#define MAX_ARR 260
//
//
//int arr[MAX_ARR];
//int ranking[MAX_ARR][MAX_ARR];
//int dp[MAX_ARR][MAX_ARR];
//int n;
//
//
//
//void set_table(){
//    
//    for(int sub=1; sub<n; sub++){
//        for(int i =0; i<n-sub; i++){
//            int curr = i+sub;
//            for(int div =0; div<sub; div++){
//                int mid = i+div;
//                int cost = abs(ranking[i][mid] - ranking[mid+1][curr]);
//                ranking[i][curr] = min(ranking[i][mid] , ranking[mid+1][curr]);
//                dp[i][curr] = min(dp[i][curr], dp[i][mid]+dp[mid+1][curr]+cost);
//            }
//        }
//    }
//    
//}
//
//void init(){
//    for(int i=0; i<=n; i++){
//        for(int j=0; j<=n; j++){
//            dp[i][j] = INT_MAX;
//        }
//    }
//}
//
//int main(){
//    scanf("%d", &n);
//    init();
//    
//    for(int i =0; i<n; i++){
//        scanf("%d", &arr[i]);
//        dp[i][i] = 0;
//        ranking[i][i] = arr[i];
//       
//    }
//    set_table();
//    
//    printf("%d\n",dp[0][n-1]);
//    
//    return 0;
//}
