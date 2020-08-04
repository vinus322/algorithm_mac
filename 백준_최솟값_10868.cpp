////
////  최솟값.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 4..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//#define MAX_ARR 100000
//
//int arr[MAX_ARR], tree[MAX_ARR*4];
//int N,M;
//
//
//int init(int node, int start, int end){
//    if(start==end){
//        return tree[node] = arr[start];
//    }
//    return tree[node] = min(init(node*2, start, (start+end)/2), init(node*2+1, (start+end)/2+1, end));
//}
//
//int min_sub(int node, int start, int end, int left, int right){
//    if(left>end|| right<start){
//        return 1000000000;
//    }
//    if(left<=start&&right>=end)return tree[node];
//    return min(min_sub(node*2,start,(start+end)/2,left,right),min_sub(node*2+1,(start+end)/2+1,end,left,right));
//}
//
//
//int main(){
//    
//    scanf("%d %d",&N,&M);
//    
//    for(int i=1; i<=N; i++)
//        scanf("%d", &arr[i]);
//    init(1,1,N);
//    
//    for(int i=0; i<M; i++){
//        int left, right;
//        scanf("%d %d", &left, &right);
//        printf("%d\n", min_sub(1, 1, N,left,right));
//    }
//    
//    return 0;
//    
//}