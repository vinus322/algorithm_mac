////
////  백준_보안업체_4243.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 9. 2..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<cstring>
//#include<climits>
//
//using namespace std;
//
////i번째 지점을 n번째 도착하였을 경우 최소값
//#define MIN(x,y) ((x)>(y)? (y) : (x))
//
//int n, s;
//long long dp[2][101][101];
//long long arr[101][101];
//long long ans;
//
//
//void init(){
//    
//    for(int i=0; i<101; i++){
//        for(int j =0; j<101; j++){
//             for(int s =0; s<2; s++)
//                 dp[s][i][j]=-1;
//            arr[i][j] =0;
//        }
//    }
//    
//}
//
//long long  solve(int depth,int start, int left, int right){
//    if(depth==0) return 0;
//    long long& ret = dp[start][left][right];
//    if(ret!=-1) return ret;
//    ret=LLONG_MAX;
//    long long tmp = LLONG_MAX;
//    
//    if(start==0) start=left;
//    else start = right;
//    
//    
//    if(right<n) tmp=solve(depth-1,1,left,right+1)+depth*arr[start][right+1];
//    if(left>1) ret=solve(depth-1,0,left-1,right)+depth*arr[left-1][start];
//
//    if(tmp<ret) ret = tmp;
//    return ret;
//}
//
//
//int main(){
//    int testCase;
//    scanf("%d", &testCase);
//    
//    for(int t = 0; t<testCase; t++){
//        init();
//        scanf("%d %d", &n, &s);
//        for(int i=1; i<=n-1; i++){
//            int dist;
//            scanf("%d",&dist);
//            arr[i][i+1] = dist;
//            arr[i+1][i] = dist;
//        }
//    
//        for(int i=1; i<n; i++){
//            for(int j=i+1; j<=n; j++){
//            arr[i][j] = arr[i][j-1]+arr[j-1][j];
//            arr[j][i] = arr[i][j];
//            }
//        }
//        
//        ans = solve(n-1,0,s,s);
//    
//        printf("%lld\n",ans);
//
//    }
//    return 0;
//}
