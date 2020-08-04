////
////  poj_가장큰직사각형_2559.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 7..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<stack>
//#include<algorithm>
//
//using namespace std;
//
//long long arr[100010];
//int n;
//
//long long max(long long x, long long y){
//    return x>y? x: y;
//}
//
//void solve(){
//    long long res;
//    stack<int> S;
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
//    arr[n] = 0;
//    S.push(0);
//    res=arr[0];
//    
//    for(int i=1; i<=n; i++){
//        long long curr  = arr[i];
//        int input = i;
//        while(!S.empty()){
//            int idx = S.top();
//            if(arr[idx]>=curr){
//                res = max(res,((i-idx)*arr[idx]));
//                arr[idx] = curr;
//                input = idx;
//                S.pop();
//            }
//            else{
//                S.push(input);
//                break;
//            }
//        }
//        if(S.empty()){
//            S.push(0);
//        }
//    }
//    cout<<res<<endl;
//    
//}
//
//
//int main(){
//    
//    while(1){
//        cin>>n;
//        if(n==0) break;
//        solve();
//    }
//    
//    return 0;
//    
//    
//}