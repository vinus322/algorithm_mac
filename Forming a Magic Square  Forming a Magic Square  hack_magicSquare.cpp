////
////  Forming a Magic Square  Forming a Magic Square  hack_magicSquare.cpp
////  algorithm
////
////  Created by 김민영 on 2020. 8. 2..
////  Copyright © 2020년 김민영. All rights reserved.
////
//
////#include <bits/stdc++.h>
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//
//
//int pattern[2][3][3] ={{{4,9,2},
//                    {3,5,7},
//                    {8,1,6}},
//                    {{8,1,6},
//                     {3,5,7},
//                     {4,9,2}}};
//
//int rotation[4][3][3] = {
//    {{0,1,2},
//     {3,4,5},
//     {6,7,8}},
//    {{2,5,8},
//    {1,4,7},
//    {0,3,6}},
//    {{8,7,6},
//     {5,4,3},
//     {2,1,0}},
//    {{6,3,0},
//     {7,4,1},
//     {8,5,2}}};
//
//
//// Complete the formingMagicSquare function below.
//int formingMagicSquare(vector<vector<int>> s) {
//    
//    int minRes = 98765432;
//    
//    
//    int tmpPattern[3][3];
//    for(int k=0; k<2; k++){
//        for(int i=0; i<4; i++){
//            for(int r=0; r<3; r++){
//                for(int c=0; c<3; c++){
//                    int num = rotation[i][r][c];
//                    int t_r = num/3, t_c = num%3;
//                    tmpPattern[r][c] = pattern[k][t_r][t_c];
//            }
//        }
//        
//        int sum = 0;
//        for(int r=0; r<3; r++){
//            for(int c=0; c<3; c++){
//                sum += abs(s[r][c]-tmpPattern[r][c]);
//            }
//        }
//                           
//        if(minRes>sum)
//            minRes = sum;
//        
//        }
//    }
//    
//    
//    cout << minRes << endl;
//    return minRes;
//}
//
//int main()
//{
//    //ofstream fout(getenv("OUTPUT_PATH"));
//    
//    vector<vector<int>> s(3);
//    for (int i = 0; i < 3; i++) {
//        s[i].resize(3);
//        
//        for (int j = 0; j < 3; j++) {
//            cin >> s[i][j];
//        }
//        
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    }
//    
//    int result = formingMagicSquare(s);
//    
//    //fout << result << "\n";
//    
//    //fout.close();
//    
//    return 0;
//}
