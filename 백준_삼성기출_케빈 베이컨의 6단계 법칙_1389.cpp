////
////  백준_삼성기출_케빈 베이컨의 6단계 법칙_1389.cpp
////  algorithm
////
////  Created by 김민영 on 2017. 10. 5..
////  Copyright © 2017년 김민영. All rights reserved.
////
//
//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int arr[101][101];
//int N, M;
//
//int min(int a, int b){
//    return a>b? b:a;
//}
//
//int main(){
//    for(int i=0; i<=100; i++){
//        for(int j =0; j<=100; j++){
//            arr[i][j] = 10000;
//        }
//    }
//    
//    scanf("%d %d", &N, &M);
//    
//    for(int i=0; i<M; i++){
//        int a,b;
//        scanf("%d %d", &a, &b);
//        arr[a][b] = arr[b][a] =1;
//    }
//    
//    
//    for(int i=1; i<=N; i++){
//        for(int j =1; j<N; j++){
//            if(i==j) continue;
//            if(arr[i][j]==1) continue;
//            
//            for(int m = 1; m<=N; m++){
//                 if(i==m || j==m) continue;
//                
//                arr[i][j] = min(arr[i][j], arr[i][m]+arr[m][j]);
//                arr[i][j] = min(arr[i][j], arr[j][i]);
//                
//            }
//            
//        }
//    }
//    
//    
//    
//    
//    
//    return 0;
//}
