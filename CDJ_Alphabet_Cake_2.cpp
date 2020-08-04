////
////  CDJ_Alphabet_Cake_2.cpp
////  algorithm
////
////  Created by 김민영 on 2019. 2. 16..
////  Copyright © 2019년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//
//using namespace std;
//
//
//char cake[30][30];
//int R, C;
//
//
//bool inRengeCake(int x, int y){
//    return (x>=0&&x<R && y>=0&&y<C);
//}
//
//
//int dir[2][2] = { {0,1}, {1,0} };
//
//void solve(int testNum){
//    
//    scanf("%d %d", &R, &C);
//    
//    for(int i=0; i<R; i++){
//        scanf("%s", cake[i]);
//    }
//    
//    for(int d = 0; d<2; d++){
//        for(int i=0; i<R; i++){
//            for(int j=0; j<C; j++){
//                if(cake[i][j] =='?') continue;
//                char letter = cake[i][j];
//                int gox = i, goy = j;
//                while(inRengeCake((gox += dir[d][0]), (goy+=dir[d][1]))){
//                    if(cake[gox][goy]!='?') break;
//                    cake[gox][goy] = letter;
//                }
//                gox = i, goy = j;
//                while(inRengeCake((gox -= dir[d][0]), (goy-=dir[d][1]))){
//                    if(cake[gox][goy]!='?') break;
//                    cake[gox][goy] = letter;
//                }
//            }
//        }
//    }
//    
//    printf("Case #%d:\n", testNum);
//    
//    for(int i=0; i<R; i++){
//        printf("%s\n", cake[i]);
//    }
//    
//    
//}
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
//    
//}