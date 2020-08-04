////
////  백준_최소스패닝트리(크루스칼)_1197.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 19..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//#define MAX_ARR 100001
//
//struct Edge{
//    int u,v, cost;
//    
//    Edge(){};
//    
//    Edge(int ut,int vt,int costt ){
//        u = ut; v = vt; cost = costt;
//    }
//    
//    bool operator < (const Edge& othere) const{
//        return cost<othere.cost;
//    }
//    
//};
//
//Edge E[MAX_ARR];
//int n, m;
//int parent[MAX_ARR];
//
//
//int find_parent(int x){
//    if(x==parent[x]) return x;
//    else  parent[x]=find_parent(parent[x]);
//    return parent[x];
//}
//
//
//void union_parent(int x, int y){
//    x = find_parent(x);
//    y = find_parent(y);
//    parent[y] =x;
//}
//
//void init(){
//    for(int i=1; i<=n; i++){
//        parent[i] = i;
//    }
//}
//
//int main(){
//    int ans = 0;
//    
//    cin>>n>>m;
//    
//    init();
//    
//    for(int i=0; i<m; i++){
//        int u,v, cost;
//        scanf("%d %d %d", &u,&v,&cost);
//        E[i] = Edge(u,v,cost);
//    }
//    
//    sort(E,E+m);
//    
//    for(int i=0; i<m; i++){
//        Edge tmp = E[i];
//        int x= find_parent(tmp.u);
//        int y = find_parent(tmp.v);
//        if(x!=y){
//            union_parent(x, y);
//            ans+=tmp.cost;
//        }
//        
//    }
//    
//    cout<<ans<<endl;
//}