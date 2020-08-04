////
////  백준_구간합구하기_2042.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 4..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//
//#define MAX_ARR 1000001
//
//long long N, M, K;
//long long arr[MAX_ARR];
//long long tree[MAX_ARR*4];
//
////init
//long long init(long long node, long long start, long long end){
//    if(start==end){
//        tree[node] = arr[start];
//        return tree[node];
//    }
//    tree[node] = init(node*2, start, (start+end)/2)+init(node*2+1, (start+end)/2+1, end);
//    return tree[node];
//}
//
//
////sum
//long long sub_sum(long long node,long long left, long long right, long long start, long long end){
//    if(left>end || right<start) return 0;
//    if (left <= start && end <= right) {
//        return tree[node];
//    }
//    return sub_sum(node*2, left,right, start, (start+end)/2)+sub_sum(node*2+1,left,right , (start+end)/2+1, end);
//}
//
//
////updata
//void update(long long node,long long idx, long long start, long long end, long long diff){
//    if(idx<start || idx>end) return;
//    tree[node]+=diff;
//    if(start<end){
//        update(node*2,idx,start,(start+end)/2, diff);
//        update(node*2+1,idx,(start+end)/2+1, end, diff);
//    }
//}
//
//
//int main(){
//    cin>>N>>M>>K;
//    
//    for(long long i=1; i<=N; i++){
//        scanf("%lld",&arr[i]);
//    }
//    
//    init(1,1,N);
//    
//    while(M!=0||K!=0){
//        int Q;
//        long long X,Y;
//        scanf("%d %lld %lld", &Q, &X, &Y);
//
//        if(Q==1){
//            M--;
//            update(1, X, 1, N, Y-arr[X]);
//            arr[X]=Y;
//            
//        }else{
//            K--;
//            cout<<sub_sum(1, X, Y, 1, N)<<"\n";
//        }
//        
//    }
//    
//    return 0;
//    
//}