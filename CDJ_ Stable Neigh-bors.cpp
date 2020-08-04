////
////  CDJ_ Stable Neigh-bors.cpp
////  algorithm
////
////  Created by hubring on 2019. 2. 23..
////  Copyright © 2019년 hubring. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string.h>
//#include <algorithm>
//#include <fstream>
//
//using namespace std;
//
//int  N;
//int inputColor[6];
//char colorMap[6] = {'R','O','Y','G','B','V'};
//int startIdx, endIdx;
//
//
//string checkColor(int colorNum, char colorName, int colorMixNum, char colorMixName){
//    string result = "";
//    if(colorMixNum>0){
//        if((colorNum+colorMixNum)!=N&&(colorMixNum+1)>colorNum){
//            return "-1";
//        }
//        
//        if((colorNum+colorMixNum)==N){
//            if(colorNum!=colorMixNum) return "-1";
//            while (colorMixNum>0) {
//               result += colorName;
//               result += colorMixName;
//               colorMixNum--;
//            }
//        }
//    }
//    return result;
//}
//
//
//
//string fillColor(){
//    
//    for(int i =0; i<3; i++){
//        string res = checkColor(inputColor[i*2],colorMap[i*2], inputColor[(i*2+3)%6],colorMap[(i*2+3)%6]);
//        if(!res.empty()){
//            if(res.compare("-1")==0) res = "";
//            return res;
//        }
//    }
//    
//    int R = inputColor[0]-inputColor[3],
//        Y = inputColor[2]-inputColor[5],
//        B = inputColor[4]-inputColor[1];
//    
//    pair<int, char> color[3] = {
//        {R, 'R'},
//        {Y, 'Y'},
//        {B, 'B'}};
//    
//    sort(color,color+3);
//    
//    int size = R + Y + B;
//    string circle(size, '?');
//    
//    if(color[2].first > (color[0].first + color[1].first))
//        return "";
// 
//    for(int i =0; i<size && color[2].first>0;){
//        color[2].first--;
//        circle[i] = color[2].second;
//        i+=2;
//    }
//    
//    for(int i = size-1; i>=0 && color[1].first>0; i--){
//        if(circle[i]!='?') continue;
//        color[1].first--;
//        circle[i] = color[1].second;
//        i--;
//    }
//    
//    for(int i=0; i<size-1 && color[0].first>0; i++){
//        if(circle[i]!='?') continue;
//        color[0].first--;
//        circle[i] = color[0].second;
//    }
//    
//    
//    for(int i =0; i<3; i++){
//        int colorIdx = i*2;
//        int mixColorIdx = (i*2+3)%6;
//        if(inputColor[mixColorIdx]>0){
//            string subStr = "";
//            while (inputColor[mixColorIdx]>0) {
//                subStr += colorMap[colorIdx];
//                subStr += colorMap[mixColorIdx];
//                inputColor[mixColorIdx]--;
//            }
//            
//            for(int j =0; j<circle.size(); j++){
//                if(circle[j]==colorMap[colorIdx]){
//                    circle = circle.substr(0, j) + subStr + circle.substr(j);
//                    break;
//                }
//            }
//        }
//        
//    }
//    
//    return circle;
//}
//
//
//void solve(){
//    startIdx = endIdx = 0;
//    
//    scanf("%d %d %d %d %d %d %d",&N,
//          &inputColor[0],&inputColor[1],
//          &inputColor[2],&inputColor[3],
//          &inputColor[4],&inputColor[5]);
//    
//    
//    string res = fillColor();
//    
//    if(res.size()!=N ){
//        printf("IMPOSSIBLE\n");
//        return;
//    }
//    
//    for(int i =0; i<N; i++){
//        printf("%c", res[i]);
//    }
//    printf("\n");
//}
//
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
//}