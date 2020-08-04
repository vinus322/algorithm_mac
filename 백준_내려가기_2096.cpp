////
////  백준_내려가기_2096.cpp
////  algorithm
////
////  Created by hubring on 2019. 2. 9..
////  Copyright © 2019년 hubring. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//
//#define List vector<pair<int, int>>
//
//int main(){
//    
//    //현재 위치의 최소, 최대 점수를 저장
//    List curr = List(3, pair<int,int>(0,0));
//    
//    int N;
//    scanf("%d", &N);
//    
//    for(int i=0; i<N; i++){
//        int num1, num2, num3;
//        scanf("%d %d %d", &num1, &num2, &num3);
//        
//        //이전(i-1)의 저장된 현재 위치 점수를 이전 위치 점수로 변경
//        List before = List(3);
//        before[0] = pair<int, int>(curr[0].first, curr[0].second);
//        before[1] = pair<int, int>(curr[1].first, curr[1].second);
//        before[2] = pair<int, int>(curr[2].first, curr[2].second);
//        
//        //현재 위치의 최소 점수 갱신
//        curr[0].first = num1+min(before[0].first,before[1].first);
//        curr[1].first = num2+min(min(before[0].first,before[1].first), before[2].first);
//        curr[2].first = num3+min(before[1].first,before[2].first);
//        
//        //현재 위치의 최대 점수 갱신
//        curr[0].second = num1+max(before[0].second,before[1].second);
//        curr[1].second = num2+max(max(before[0].second,before[1].second), before[2].second);
//        curr[2].second = num3+max(before[1].second,before[2].second);
//    }
//    
//
//    int minValue = min(min(curr[0].first,curr[1].first), curr[2].first);
//    int maxValue = max(max(curr[0].second,curr[1].second), curr[2].second);
//    
//    printf("%d %d\n", maxValue, minValue);
//    
//    return 0;
//}
//
//
//
