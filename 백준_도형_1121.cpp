////
////  백준_도형_1121.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 25..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//#define MAX_N 51
//int arr[MAX_N], n, k;
//
//void swap(int i, int j){
//    int t = arr[i];
//    arr[i] = arr[j];
//    arr[j] =t;
//}
//
//
//int pibo_partition(int left, int right){
//    int mid=arr[left];
//    int j = left;
//    for(int i=left+1;i<=right; i++){
//        if(arr[i]<mid){
//            j++;
//            swap(i,j);
//        }
//    }
//    swap(left,j);
//    
//    return j;
//}
//
//void quick_sort(int left, int right){
//    if(left>=right) return;
//    int mid = pibo_partition(left, right);
//    quick_sort(left,mid-1);
//    quick_sort(mid+1,right);
//}
////이전에서 썻는가 안썻는가?
//long long dp[2][11][60001];
//
//int main(){
//    scanf("%d", &n);
//    
//    for(int i=0; i<n; i++){
//        scanf("%d", &arr[i]);
//    }
//    quick_sort(0,n-1);
//    
//    scanf("%d", &k);
//    
//    for(int i=n-1; i>=0; i--){
//        for(int j =0; j<k; j++){
//            for (int s=0; s<60001; s++) {
//                if (j == k-1)
//                    dp[i%2][j][s] = (s > arr[i] ? 1 : 0) + dp[(i+1)%2][j][s];
//                else
//                    dp[i%2][j][s] = (dp[(i+1)%2][j][s] + dp[(i+1)%2][j+1][min(s+arr[i], 60000)]);
//                
//            }
//        }
//    }
//    
//    printf("%lld\n", dp[0][0][0]);
//    return 0;
//    
//    
//}