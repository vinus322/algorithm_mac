////
////  Network Flow.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 24..
////  Copyright © 2016년 김민영. All rights reserved.
////
///*
// testCase
// 
// 6 10
// 0 1 14
// 0 3 18
// 1 2 15
// 1 3 12
// 2 4 9
// 2 5 6
// 3 1 6
// 3 4 16
// 4 1 11
// 4 5 28
//
// */
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//struct vertex{
//    int weight,idx;
//};
//int rn[100][100];
//int max_flow, n;
//bool check[100];
//vector<int> path;
//
//
//int vertex_sort(const vertex& a, const vertex& b){
//    return a.weight>b.weight;
//}
//
//
//bool PFS(int x, int local_flow){
//
//    vector<vertex>v;
//    vertex vx;
//    
//    
//    //RN을 갱신한다. 실제 구현에선ㄴ FN을 굳이 사용할 필요가 없다.
//    //Max Flow만 구한다면 경로의 현재 flow만 더해가면 된다.
//    if(x==n-1){
//    
//        //max_flow에 현재 경로의 최소 flow를 더해준다.
//        max_flow+=local_flow;
//        
//        for(int i=0; i<path.size()-1; i++){
//            rn[path[i]][path[i+1]]-=local_flow;
//            rn[path[i+1]][path[i]]+=local_flow;
//        }
//        
//        //경로를 초기화하고 출발점은 미리넣어둔다.
//        path.clear();
//        path.push_back(0);
//        
//        return true;
//    }
//    
//    //현재 정점에서 갈수 있는 곳을 저장
//    for(int i=0; i<n; i++){
//        if(rn[x][i]>0&&check[i]==false){
//            vx.idx = i;
//            vx.weight = rn[x][i];
//            v.push_back(vx);
//        }
//    }
//    
//    //우선 순위를 위해 무게에 따라 정렬
//    sort(v.begin(), v.end(), vertex_sort);
//    
//    for(int i=0; i<v.size(); i++){
//        //다음 정점으로 서낵된것 방문되지 않도록 체크
//        check[v[i].idx]= true;
//        
//        //경로에 정점 추가
//        path.push_back(v[i].idx);
//        
//        //용랑이 큰 것부터 차례대로 방문한다.
//        //하나의 경로가 처리되면 다음은 방문하지 않고 true;
//        //리턴하며 종료
//        //이전까지의 간선의 용량중 최소로 갱신해간다.
//        if(PFS(v[i].idx, min(local_flow, v[i].weight)))
//           return true;
//           
//        //체그와 경로에 대해서 복원
//        path.pop_back();
//        check[v[i].idx] = false;
//           
//    }
//    return false;
//}
//
//
//void MaxFlow(){
//    path.push_back(0);
//    while(PFS(0,99999999)){
//        fill(check, check+n, false);
//        check[0] = true;
//    }
//}
//int main(){
//    int m,a,b,c;
//    
//    cin>>n>>m;
//    
//    while(m--){
//    
//        cin>>a>>b>>c;
//        rn[a][b] = c;
//    }
//    
//    MaxFlow();
//    
//    cout<<max_flow<<endl;
//    return 0;
//    
//}