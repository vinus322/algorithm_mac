////
////  poj_가장큰행렬_3494.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 7..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int n;
//int m;
//int arr[2010];
//int res;
//
//void init(){
//    for(int i=0; i<2010; i++)
//        arr[i] =0;
//    res =0;
//}
//int max(int x, int y){
//    return x>y? x : y;
//}
//void max_find(){
// 
//    stack<int> S;
//    int tmp[2010];
//
//    for(int i=0; i<=m; i++)
//        tmp[i] = arr[i];
//    
//    S.push(0);
//
//    for(int i=1; i<=m; i++){
//        int curr  = tmp[i];
//        int input = i;
//        while(!S.empty()){
//            int idx = S.top();
//            if(tmp[idx]>=curr){
//                res = max(res,((i-idx)*tmp[idx]));
//                tmp[idx] = curr;
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
//}
//void solve(){
//    init();
//    for(int i=0; i<n; i++){
//        int tmp;
//        for(int j=0; j<m; j++){
//            cin>> tmp;
//            if(tmp==0) arr[j] = 0;
//            else arr[j] += tmp;
//        }
//        
//        max_find();
//    }
//    cout<< res<<endl;
//
//}
//
//
//int main(){
//    
//    while(scanf("%d %d", &n, &m)!=EOF){
//        solve();
//    }
//    return 0;
//}