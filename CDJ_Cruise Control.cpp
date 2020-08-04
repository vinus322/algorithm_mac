////
////  CDJ_Cruise Control.cpp
////  algorithm
////
////  Created by Hubring on 2019. 2. 23..
////  Copyright © 2019년 Hubring. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//
//void solve(){
//    int D,N;
//    
//    scanf("%d %d", &D, &N);
//
//    double maxTimeSpan = 0.0;
//    for(int i=0; i<N; i++){
//        int K, S;
//        scanf("%d %d", &K, &S);
//        
//        double tiemSpan = (double)(D-K)/S;
//        
//        if( tiemSpan > maxTimeSpan ){
//            maxTimeSpan = tiemSpan;
//        }
//        
//    }
//    
//    double mySpeed = D/maxTimeSpan;
//    
//    printf("%lf\n", mySpeed );
//    
//}
//
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
//    return 0;
//}