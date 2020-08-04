////
////  백준_최솟값과최대값_2357.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//#define MAX_ARR 100001
//int arr[MAX_ARR];
//int max_tree[MAX_ARR*4], min_tree[MAX_ARR*4];
//
//int N,M;
//
//void init(int node, int start,int end, int& min_value, int& max_value){
//    if(start==end){
//         min_tree[node] = arr[start];
//         max_tree[node] = arr[start];
//        min_value= max_value = arr[start];
//        return;
//    }
//    int tmp_min_value, tmp_max_value;
//    init(node*2, start, (start+end)/2, min_value, max_value);
//    init(node*2+1,(start+end)/2+1, end, tmp_min_value, tmp_max_value);
//    min_tree[node] = min(min_value, tmp_min_value);
//    max_tree[node] = max(max_value, tmp_max_value);
//    min_value = min_tree[node];
//    max_value = max_tree[node];
//    
//}
//
//int find_max_value(int node, int start,int end, int left, int right){
//    if(left>end || right<start) return 0;
//    if(left<=start&& right>=end) return max_tree[node];
//    return max(find_max_value(node*2, start, (start+end)/2, left, right),find_max_value(node*2+1,(start+end)/2+1,end, left, right) );
//    
//}
//int find_min_value(int node, int start,int end, int left, int right){
//    if(left>end || right<start) return 1000000000;
//    if(left<=start&& right>=end) return min_tree[node];
//    return min(find_min_value(node*2, start, (start+end)/2, left, right),find_min_value(node*2+1,(start+end)/2+1,end, left, right) );
//
//}
//
//
//int main(){
//    scanf("%d %d", &N, &M);
//    
//    for(int i=1; i<=N; i++)
//        scanf("%d", &arr[i]);
//    
//    int tmp1, tmp2;
//    init(1,1,N, tmp1, tmp2);
//    
//    for(int i=0; i<M; i++){
//        int left, right;
//        scanf("%d %d", &left, &right);
//        printf("%d %d\n", find_min_value(1, 1, N,left,right), find_max_value(1, 1, N,left,right));
//    }
//    
//    
//    return 0;
//}