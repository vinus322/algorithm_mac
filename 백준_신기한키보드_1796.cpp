////
////  백준_신기한키보드_1796.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 13..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include<algorithm>
//#include<climits>
//#include<cstring>
//
//using namespace std;
//
//#define MAX_ARR 1010
//
//char str[MAX_ARR];
//int alpa[27];
//int dp[30][MAX_ARR];
//int depth =0;
//
//int len;
//
//void init(){
//    for(int i=0; i<30; i++)
//        for(int j=0; j<MAX_ARR; j++)
//            dp[i][j] = INT_MAX;
//    
//}
//
//int find_left(int i, char s, int& cnt){
//    int final = s;
//    while(i>=0){
//        if(str[i]==s){
//            cnt++; final = i;
//        }
//        i--;
//    }
//    return final;
//}
//
//int find_right(int i, char s, int& cnt){
//    int final = s;
//    while(i<len){
//        if(str[i]==s){
//            cnt++;final = i;
//        }
//        i++;
//    }
//    return final;
//}
//
//
//
//
//int main(){
//    init();
//    cin>> str;
//    len = (int) strlen(str);
//    
//    for(int i=0; i<len; i++){
//        int idx = str[i]-'a';
//        alpa[idx]+=1;
//    }
//    
//    dp[0][0] =0;
//    
//    for(int i =0; i<26; i++){
//        if(alpa[i]==0) continue;
//        depth+=1;
//        int lcnt, rcnt;
//        for(int curr = 0; curr<len; curr++){
//            if(dp[depth-1][curr]==INT_MAX) continue;
//             lcnt = rcnt = 0;
//            int left = find_left(curr, i+'a',lcnt);
//            int right = find_right(curr, i+'a', rcnt);
//            
//            if(lcnt==alpa[i]){
//                int res =(curr-left)+alpa[i];
//                dp[depth][left] = min(dp[depth-1][curr]+res, dp[depth][left]);
//            }else if(lcnt){
//                int res =(curr-left)+(right - left)+alpa[i];
//                dp[depth][right] = min(dp[depth-1][curr]+res, dp[depth][right]);
//            }
//            
//            if(rcnt==alpa[i]){
//                int res  =(right-curr)+alpa[i];
//                dp[depth][right] = min(dp[depth-1][curr]+res, dp[depth][right]);
//            }else if(rcnt){
//                int res  =(right-curr)+(right - left)+alpa[i];
//                dp[depth][left] = min(dp[depth-1][curr]+res, dp[depth][left]);
//            }
//            
//        }
//        
//    }
//    
//    
//    int res = INT_MAX;
//    for(int i=0; i<len; i++){
//        res= min(res, dp[depth][i]);
//    }
//    
//    cout<<res<<endl;
//    
//    return 0;
//}