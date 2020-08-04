////
////  백준_흙길보수하기_1911.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 9. 2..
////  Copyright © 2016년 김민영. All rights reserved.
////
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//
//struct NODE{
//    long long x,y;
//};
//
//NODE node[10001];
//
//int quick_partition(int left, int right){
//    NODE pibo = node[left];
//    int j = left;
//    for(int i=left+1; i<=right; i++){
//        if(node[i].x>pibo.x) continue;
//        if(node[i].x==pibo.x&&(node[i].y>pibo.y)) continue;
//        j++;
//        NODE t = node[i];
//        node[i] = node[j];
//        node[j] = t;
//        
//    }
//    
//    NODE t = node[left];
//    node[left] = node[j];
//    node[j] = t;
//    
//    return j;
//}
//
//
//void quick_sort(int left, int right){
//    if(left>=right) return;
//    int mid = quick_partition(left, right);
//    quick_sort(left,mid-1);
//    quick_sort(mid+1,right);
//}
//
//int main(){
//    int n, l;
//    scanf("%d %d", &n, &l);
//    
//    for(int i=0; i<n; i++){
//        long long x,y;
//        scanf("%lld %lld", &x, &y);
//        node[i].x  = x;
//        node[i].y = y;
//    }
//    
//    quick_sort(0,n-1);
//    
//    long long ans, min,max;
//    ans =0;
//    
//    min = node[0].x;
//    max =node[0].y;
//    if((max - min)%l!=0) max = ((max-min)/l+1)*l+min;
//    
//    for(int i=1; i<n; i++){
//        if(max>=node[i].x){
//            max = node[i].y;
//            if((max - min)%l!=0) max = ((max-min)/l+1)*l+min;
//        }
//        else{
//            ans+=(max-min)/l;
//            min =node[i].x; max = node[i].y;
//            if((max - min)%l!=0) max = ((max-min)/l+1)*l+min;
//        }
//        
//    }
//    ans+=(max-min)/l;
//    
//    printf("%lld\n", ans);
//    return 0;
//}