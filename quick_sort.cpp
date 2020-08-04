////
////  quick_sort.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 14..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//#define MAX_ARR 1000001
//#define SWAP( x, y, t ) { t=x; x=y; y=t; }
//
//int n;
//int arr[MAX_ARR];
//
//
//int quick_partition(int low, int high){
//    int pibo = arr[low];
//    int j = low;
//    int t;
//    for(int i=low+1; i<=high; i++){
//        if(arr[i]<pibo){
//            j++;
//            SWAP(arr[i], arr[j],t);
//        }
//    }
//    SWAP(arr[low], arr[j],t);
//    return j;
//}
//
//void quick(int low, int high){
//    if(low>high) return;
//    int pibo = quick_partition(low, high);
//    quick(low, pibo-1);
//    quick(pibo+1, high);
//    
//}
//
//
//
//int main(){
//    
//    cin>>n;
//
//    for(int i=0; i<n; i++){
//        scanf("%d", &arr[i]);
//    }
//    quick(0, n-1);
//    
//    for(int i=0; i<n; i++){
//       printf("%d\n", arr[i]);
//    }
//    
//}