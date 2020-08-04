////
////  정상회담2.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include<iostream>
//using namespace std;
//#define MOD 987654321
//
//long long dp[5002];
//int n;
//
//int main()
//{
//    scanf("%d",&n);
//    n/=2;
//    dp[0]=dp[1]=1;
//    
//    for(int i=2;i<=n;i++)
//        for(int j=0;j<i;j++)
//            dp[i]+=((dp[j]%MOD)*(dp[i-j-1]%MOD)) % MOD;
//    
//    printf("%lld\n",dp[n]%MOD);
//    
//    return 0;
//}