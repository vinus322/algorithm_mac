////
////  백준_놀이공원_1561.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 23..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int n,m;
//int t[10001];
//
//void b_search(long long left, long long right){
//    int res[10001], top =0;
//    long long cnt=0;
//    if(left>=right){
//        for(int i=0; i<m; i++){
//            if(right%t[i]==0)res[top++] = i;
//            cnt+=right/t[i];
//        }
//        printf("%d\n",res[top-(cnt-n)-1]+1);
//        return;
//    }
//    long long mid=(left+right)/2;
//    
//    for(int i=0; i<m; i++)
//        cnt+=mid/t[i];
//    
//    if(cnt>=n) b_search(left,mid);
//    if(cnt<n) b_search(mid+1,right);
//}
//
//
//int main(){
//    
//    scanf("%d %d", &n, &m);
//    
//    for(int i=0; i<m; i++){
//        scanf("%d", &t[i]);
//    }
//    
//    if(n<m){
//        printf("%d\n", n);
//        return 0;
//    }
//    n-=m;
//    b_search(0, 60000000000);
//    
//    return 0;
//    
//}