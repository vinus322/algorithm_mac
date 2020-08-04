////
////  백준_거듭제곱_1740.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 8. 23..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
////이진수를 이용하여 종류별로 쓰고 안쓰고를 표현할 수 있다.
//
//long long n;
//
//int main(){
//    long long res =0;
//    long long tmp = 1;
//    
//    scanf("%lld", &n);
//    
//    while(n){
//        res+=tmp*(n&1);
//        n=n>>1;
//        tmp*=3;
//    }
//    
//    printf("%lld\n",res);
//    
//    return 0;
//}