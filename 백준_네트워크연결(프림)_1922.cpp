////
////  백준_네트워크연결(프림)_1922.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 19..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<climits>
//
//using namespace std;
//#define MAX_ARR 1010
//
//
//int arr[MAX_ARR][MAX_ARR];
//int cost[MAX_ARR];
//int selected[MAX_ARR];
//int n, m;
//int ans;
//
//int getVertax(){
//    
//    int v = 0;
//    
//    for(int i=1; i<=n; i++)
//    {
//        if(selected[i]) continue;
//        v = i;
//        break;
//    }
//    
//    
//    for(int i = 1; i<=n; i++){
//        if(!selected[i] && cost[i]<cost[v])
//            v = i;
//    }
//    
//    return v;
//}
//
//
//void prim(int s){
//    
//    for(int i=1; i<=n; i++){
//        if(arr[s][i]) cost[i] = arr[s][i];
//        else cost[i] = INT_MAX;
//    }
//    selected[s] =1;
//    cost[s] =0;
//    
//    
//    for(int i=0; i<n; i++){
//        
//        int u = getVertax();
//        selected[u] = true;
//        ans+=cost[u];
//        
//        for(int v=1; v<=n; v++){
//            if(!arr[u][v]) continue;
//            if(cost[v]>arr[u][v]) cost[v] = arr[u][v];
//        }
//        
//    }
//    
//    
//}
//
//
//int main(){
//    
//    cin>>n>>m;
//    
//    for(int i=0; i<m; i++){
//        int u, v, cost;
//        scanf("%d %d %d", &u, &v, &cost);
//        arr[u][v] = cost;
//        arr[v][u] = cost;
//    }
//    
//    prim(1);
//    
//    cout<<ans<<endl;
//    
//}