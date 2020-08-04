////
////  CDJ_ Ratatouille.cpp
////  algorithm
////
////  Created by 김민영 on 2019. 2. 16..
////  Copyright © 2019년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//int N, P;
//int pack[51][51];
//int ingredient[51];
//int startIdx[51];
//
//float usePack(int ing, int pack, int quot){
//    int remain = pack - (ing*quot);
//    float per = (remain*100)/(float)(ing*quot);
//    
//    return per;
//}
//
//
//int getMaxPackage(){
//    int res = 0, quot = 1;
//    
//    while(true){
//        
//        int cnt = 0;
//        
//        for(int i=0; i<N; i++){
//            int inRangeIdx = -1;
//            for(int j =startIdx[i]; j<P; j++){
//                if(usePack(ingredient[i], pack[i][j],quot)>=-10){
//                    inRangeIdx = j;
//                    break;
//                }
//                
//            }
//            if(inRangeIdx==-1) return res;
//            
//            startIdx[i] = inRangeIdx;
//            if(usePack(ingredient[i], pack[i][inRangeIdx],quot)<=10){
//                cnt++;
//            }
//        }
//        
//        if(cnt == N){
//            res++;
//            
//            for(int i =0; i<N; i++){
//                startIdx[i]++;
//            }
//        }else{
//            quot++;
//        }
//    }
//
//    return  res;
//}
//
//
//
//void solve(int testNum){
//    
//    scanf("%d %d", &N, &P);
//
//    for(int i=0; i<N; i++){
//        scanf("%d", &ingredient[i]);
//        startIdx[i] =0;
//    }
//    
//    for(int i=0; i<N; i++){
//        for(int j =0; j<P; j++){
//            scanf("%d", &pack[i][j]);
//        }
//        sort(pack[i], pack[i]+P);
//    }
//    
//    printf("Case #%d: %d\n", testNum, getMaxPackage());
//    
//}
//
//
//
//int main(){
//    
//    int testCase;
//    scanf("%d", &testCase);
//    
//    for(int i=0 ;i<testCase; i++){
//        solve(i+1);
//    }
//    
//}