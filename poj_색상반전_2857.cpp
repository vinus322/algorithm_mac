////
////  poj_색상반전_2857.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 7..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//
//using namespace std;
//
//double H,V, h, v;
//double myX, myY;
//
//struct pos{
//    double left,right;
//    pos(){};
//    pos(double x, double y){
//        left = x, right = y;
//    }
//};
//
//double abs(double x){
//    return x>0? x:-x;
//}
//
//void solve(pos currX,pos currY, int color){
//    double x = currX.left+((currX.right-currX.left)*h);
//    double y = currY.left+((currY.right-currY.left)*v);
//    
//    if(myX<x && myY<y)
//        return solve(pos(currX.left, x), pos(currY.left,y), 1-color);
//    if(myX>x && myY>y)
//        return solve(pos(x, currX.right), pos(y, currY.right), 1-color);
//    
//    if(color==1) printf("black\n");
//    else printf("white\n");
//    
//    return;
//}
//
//
//int main(){
//    int testCase =1;
//    
//    while(1){
//        int n;
//        cin>>H>>V>>h>>v;
//        if(H==0&&V==0&&h==0&&v==0) break;
//        printf("Case %d:\n", testCase++);
//        cin>>n;
//        for(int i=0; i<n; i++){
//            cin>>myX>>myY;
//            solve(pos(0,H),pos(0,V),1);
//        }
//    }
//    return 0;
//    
//}