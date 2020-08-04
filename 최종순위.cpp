////
////  최종순위.cpp
////  algorithm
////
////  Created by 김민영 on 2019. 1. 19..
////  Copyright © 2019년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//
//void solved(){
//    
//    int t,m;
//    
//    scanf("%d", &t);
//    
//    int size = t+1;
//    
//    int lastYearRankHash[size];
//    memset(lastYearRankHash, 0, sizeof(lastYearRankHash));
//    
//    int rankNext[size][size];
//    int connect[size];
//    for(int i =0; i<size; i++){
//        memset(rankNext[i], 0, sizeof(rankNext[i]));
//    }
//    memset(connect, 0, sizeof(connect));
//    
//    //작년 순위
//    for(int i=1; i<size; i++){
//        int team;
//        scanf("%d", &team);
//        lastYearRankHash[team] = i;
//        
//        for(int j=1; j<size; j++){
//            if(lastYearRankHash[j]) continue;
//            rankNext[team][j] = 1;
//            connect[j]++;
//        }
//    }
// 
//    
//    scanf("%d", &m);
//    
//    //변경순위
//    for(int i =0; i<m; i++){
//        int team1, team2;
//        scanf("%d %d", &team1, &team2);
//        if(!rankNext[team1][team2]){
//            rankNext[team1][team2] = 1;
//            connect[team1]--;
//            
//            rankNext[team2][team1] = 0;
//            connect[team2]++;
//        }else{
//            rankNext[team1][team2] = 0;
//            connect[team1]++;
//            
//            rankNext[team2][team1] = 1;
//            connect[team2]--;
//        }
//    }
//    
//    queue<int> Q;
//    
//    for(int i =1 ;i<size; i++){
//        if(connect[i]==0) Q.push(i);
//    }
//    
//    int result[t], r = 0;
//    memset(result, 0, sizeof(result));
//    
//    
//    while (!Q.empty()) {
//        if(Q.size()>1){
//            printf("?\n");
//            return;
//        }
//        
//        int team = Q.front();
//        Q.pop();
//        
//        result[r++] = team;
//        
//        for(int i=1; i<size; i++){
//            if(!rankNext[team][i]) continue;
//            rankNext[team][i] = 0;
//            connect[i]--;
//            if(!connect[i]) Q.push(i);
//        }
//        
//    }
//    
//    if(r<t){
//        printf("IMPOSSIBLE\n");
//        return;
//    }
//    
//    
//    for(int i =0 ; i<t; i++){
//        printf("%d ", result[i]);
//    }
//    printf("\n");
//}
//
//int main(){
//    int testCase;
//    scanf("%d", &testCase);
//    
//    for(int i =0; i<testCase; i++){
//        solved();
//    }
//
//}
