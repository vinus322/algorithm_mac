////
////  백준_작업_2056.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 19..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//#define MAX_ARR 10010
//
//vector<int> a[MAX_ARR];
//int connect[MAX_ARR];
//int cost[MAX_ARR];
//int resCost[MAX_ARR];
//int n;
//
//queue<pair<int, int>> Q;
//
//
//void topologicalSort(){
//    
//    for(int i=1; i<=n; i++){
//        if(connect[i]) continue;
//        Q.push(make_pair(i,cost[i]));
//        resCost[i] = cost[i];
//    }
//    while(!Q.empty()){
//        pair<int, int> tmp = Q.front(); Q.pop();
//        int idx = tmp.first;
//        int c = tmp.second;
//        
//        for(auto t : a[idx]){
//            connect[t]-=1;
//            resCost[t] = max(resCost[t], c+cost[t]);
//            if(connect[t]==0){
//                Q.push({t,resCost[t]});
//            }
//        }
//        
//    }
//    
//}
//
//int main(){
//    
//    scanf("%d", &n);
//    
//    for(int i=1; i<=n; i++){
//        int ctmp, m;
//        scanf("%d %d", &ctmp, &m);
//        cost[i] = ctmp;
//        connect[i] = m;
//        for(int j =0; j<m; j++){
//            int input;
//            scanf("%d", &input);
//            a[input].push_back(i);
//        }
//        
//    }
//    
//    topologicalSort();
//    
//    int ans =0;
//    for(int i=1; i<=n; i++)
//        ans = max(ans, resCost[i]);
//    
//    cout<<ans<<endl;
//    
//}