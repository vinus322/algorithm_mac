////
////  백준_소수찾기_1978.cpp
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
//int arr[1001];
//
//void find_prim(){
//    arr[1] = arr[0] = 1;
//    
//    for(int i = 2 ; i*i < 1001 ; i++){
//        if ( arr[i] == 0 ){
//            for(int j = i+i ; j < 1001 ; j += i){
//                arr[j] = 1;
//            }
//        }
//    }
//}
//
//
//int main(){
//    find_prim();
//    int n, cnt=0;
//    scanf("%d", &n);
//    
//    for(int i=0; i<n; i++){
//        int input;
//        scanf("%d", &input);
//        if(arr[input]==0) cnt++;
//    }
//    
//    printf("%d\n", cnt);
//    return 0;
//    
//}