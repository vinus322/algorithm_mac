////
////  CDJ_Alphabet_Cake.cpp
////  algorithm
////
////  Created by Hubring on 2019. 2. 14..
////  Copyright © 2019년 Hubring. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//char cake[30][30];
//int R, C;
//
//struct Point{
//    int x, y;
//};
//
//struct OccupyRect{
//    char letter;
//    Point start, end;
//};
//
//struct Initial{
//    char letter;
//    Point point;
//};
//
//vector<Initial> initialList;
//vector<OccupyRect> rectList;
//
//
//bool inRengeCake(Point p){
//    return (p.x<R && p.y<C);
//}
//
//
//bool inRangeRect(Point start, Point end, Point p){
//    return (start.x<=p.x&&start.y<=p.y)&&(end.x>=p.x&&end.y>=p.y);
//}
//
//
//bool isOccupied(Point p){
//    int len = (int) rectList.size();
//    
//    for(int i=0;i<len; i++){
//        OccupyRect rect = rectList[i];
//        if(inRangeRect(rect.start, rect.end, p)){
//            return true;
//        }
//    }
//    return false;
//}
//
//Initial existInitial(OccupyRect rect){
//    int len = (int) initialList.size();
//    int cnt = 0;
//    Initial res;
//    res.letter = '?';
//    
//    for(int i=0;i<len; i++){
//        Initial initial = initialList[i];
//        if(rect.letter!='?'&&
//           initial.letter==rect.letter) continue;
//        
//        if(inRangeRect(rect.start, rect.end, initial.point)){
//            res = initial;
//            cnt++;
//        }
//    }
//    
//    if(cnt>1){
//        res.letter = '-';
//    }
//    return res;
//}
//
//int dir[2][2] = { {0,1}, {1,0} };
//
//Point maxEnd;
//char maxLetter;
//int maxSize;
//
//void sliceCake(OccupyRect rect, int dirIdx){
//    char curr  = rect.letter;
//    
//    if(isOccupied(rect.end)) return;
//    
//    Initial exist = existInitial(rect);
//    
//    if(exist.letter=='-') return;
//    
//    if(exist.letter!='?'){
//        if(rect.letter!='?') return;
//        rect.letter = exist.letter;
//        curr = rect.letter;
//    }
//    
//    if(rect.letter!='?'){
//        int size = (rect.end.x - rect.start.x+1)*(rect.end.y - rect.start.y+1);
//        if(size>maxSize){
//            maxLetter = rect.letter;
//            maxEnd.x = rect.end.x;
//            maxEnd.y = rect.end.y;
//            maxSize = size;
//        }
//    }
//    
//    for(int i=dirIdx; i<2; i++){
//        rect.end.x+=dir[i][0];
//        rect.end.y+=dir[i][1];
//        
//        if(inRengeCake( rect.end)){
//            rect.letter = curr;
//            sliceCake(rect,i);
//        }
//        rect.end.x-=dir[i][0];
//        rect.end.y-=dir[i][1];
//    }
//}
//
//void fillRect(OccupyRect rect){
//    char letter  = rect.letter;
//    
//    for(int i=rect.start.x; i<=rect.end.x; i++){
//        for(int j = rect.start.y; j<=rect.end.y; j++){
//            cake[i][j] = letter;
//        }
//    }
//}
//
//void solve(int testNum){
//    initialList.clear();
//    rectList.clear();
//    
//    cin >> R >> C;
//    
//    for(int i = 0; i<R; i++){
//        cin >> cake[i];
//        for(int j =0; j<C; j++){
//            if(cake[i][j]=='?') continue;
//            initialList.push_back({cake[i][j], {i,j}});
//        }
//    }
//    
//    for(int i = 0; i<R; i++){
//        for(int j =0; j<C; j++){
//            maxSize = 0;
//            Point p = {i, j};
//            if(isOccupied(p)) continue;
//            OccupyRect rect = {cake[i][j], p, p};
//            sliceCake(rect,0);
//            rect.letter = maxLetter;
//            rect.end.x = maxEnd.x;
//            rect.end.y = maxEnd.y;
//            rectList.push_back(rect);
//        }
//    }
//    
//    for(int i =0; i<rectList.size(); i++){
//        fillRect(rectList[i]);
//    }
//    
//    cout << "Case #" <<testNum << ":"<<endl;
//    for(int i = 0; i<R; i++){
//        for(int j =0; j<C; j++){
//            cout << cake[i][j];
//        }
//        cout<<endl;
//    }
//}
//
//
//int main(){
//    int testCase;
//    cin >> testCase;
//    
//    for (int i=0; i<testCase; i++) {
//        solve(i+1);
//    }
//    
//}