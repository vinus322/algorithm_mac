////
////  CDJ_Pony Express.cpp
////  algorithm
////
////  Created by hubring on 2019. 3. 4..
////  Copyright © 2019년 hubring. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//#define INF 1e12
//#define LL long long
//
//inline double min(double x, double y) {
//    return x > y ? y : x;
//}
//
//LL D[101][101];
//double T[101][101];
//pair<LL, LL> horse[101];
//int N, Q;
//
//
//
//void solve(){
//
//    scanf("%d %d", &N, &Q);
//    
//    for(int i = 0; i<N; i++){
//        scanf("%lld %lld", &horse[i].first, &horse[i].second);
//    }
//
//    for(int i =0; i<N; i++){
//        for(int j =0; j<N; j++){
//            scanf("%lld", &D[i][j]);
//            
//            if(D[i][j]<0)
//                D[i][j] = INF;
//            
//            T[i][j] = INF;
//        }
//    }
//    
//    
//    for(int k=0; k<N; k++){
//        for(int i=0; i<N; i++){
//            for(int j=0; j<N; j++){
//                if(D[i][j]>D[i][k]+D[k][j]){
//                    D[i][j]=D[i][k]+D[k][j];
//                }
//                if(D[i][j]<=horse[i].first){
//                    T[i][j] =min(T[i][j], (D[i][j]/(double)horse[i].second));
//                }
//            }
//        }
//    }
//    
//    
//    for(int k=0; k<N; k++){
//        for(int i=0; i<N; i++){
//            for(int j=0; j<N; j++){
//                T[i][j] =min(T[i][j],T[i][k]+T[k][j]);
//            }
//        }
//    }
//    
//    for(int i =0; i<Q; i++){
//        int start, end;
//        scanf("%d %d", &start, &end);
//        printf("%.9lf ", T[start-1][end-1]);
//    }
//    printf("\n");
//}
//
//int main(){
//    int testCase;
//    scanf("%d", &testCase);
//
//    for(int i=0; i<testCase; i++){
//        printf("Case #%d: ", i+1);
//        solve();
//    }
//
//}