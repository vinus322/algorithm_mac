////
////  서로소의 개수.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 13..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//
//int num[110];
//int dp[110][100010];
//int n;
//
//int gcd(int a, int b){
//    if(a%b==0) return b;
//    return gcd(b,a%b);
//}
//
//
//int pow(int n){
//    int res;
//    if(n==1) return 2;
//    if(n==0) return 1;
//    
//    if(n%2==0){
//        res = pow(n/2);
//        return res*res;
//    }
//    else{
//        res = pow((n-1)/2);
//        res = res*res*2;
//        return res;
//    }
//}
//
//int dfs(int depth, int curr_gcd){
//    int& ret = dp[depth][curr_gcd];
//    int res;
//    if(ret) return ret;
//    
//    if(curr_gcd==1){
//         res = pow(n-curr_gcd-1);
//        return res;
//    }
//    
//    
//    
//}
//
//
//
//
//
//int main(){
//    
//    cin>>n;
//    
//    for(int i=0; i<n; i++){
//        int input;
//        cin>>input;
//        
//    }
//
//    
//    
//    
//}