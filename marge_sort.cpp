////
////  marge_sort.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 14..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//#define MAX_ARR 1000001
//#define SWAP( x, y, t ) { t=x; x=y; y=t; }
//
//int n;
//int arr[MAX_ARR];
//
//void marging(int low, int high){
//    
//    int mid = low+((high-low)/2);
//    int i = low;
//    int j = mid+1;
//    int tmp[MAX_ARR];
//    int idx  = low;
//    while(i<=mid&&j<=high){
//        if(arr[i]>arr[j]){
//            tmp[idx++] = arr[j++];
//        }
//        else{
//            tmp[idx++] = arr[i++];
//        }
//    }
//    
//    while(i<=mid) tmp[idx++] = arr[i++];
//    while(j<=high) tmp[idx++] = arr[j++];
//    
//    for(int i=low; i<=high; i++)
//        arr[i] = tmp[i];
//}
//
//
//
//void marge_sort(int low, int high){
//    if(low>=high) return;
//    int mid = low+((high-low)/2);
//    marge_sort(low, mid);
//    marge_sort(mid+1,high);
//    marging(low, high);
//    
//}
//int main(){
//    cin>>n;
//    
//    for(int i=0; i<n; i++)
//        scanf("%d", &arr[i]);
//    marge_sort(0, n-1);
//    for(int i=0; i<n; i++)
//        printf("%d\n", arr[i]);
//    
//
//}