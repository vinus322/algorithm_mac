////
////  백준_제곱ㄴㄴ수_1016.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 23..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//using namespace std;
//
//int H[1000001];
//
//int main(){
//    long long min, max;
//    int cnt =0;
//    scanf("%lld %lld", &min, &max);
//    
//    for(long long i=2; i*i<=max; i++){
//        long long num = i*i;
//        for(long long j=min/num; j<=max/num; j++){
//            if(num*j<min) continue;
//            if(!H[(num*j)-min]) cnt++;
//            H[(num*j)-min] = 1;
//        }
//    }
//    
//    printf("%lld\n",max-min-cnt+1);
//    
//    return 0;
//}