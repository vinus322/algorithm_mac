////
////  이진 복원.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//char S[1<<19], S2[1<<19];
//int n, p;
//
//void f(int k, int s){
//    char val = S[p++];
//    if(val== '\0')
//        return;
//    if(val=='-'){
//        f(k, s/2);
//        f(k+s/2, s/2);
//    }else{
//        for(int i=k; i<k+s; i++)
//            S2[i] = val;
//    }
//}
//
//int main(){
//    scanf("%d %s", &n, S);
//    f(0, n);
//    printf("%s", S2);
//    return 0;
//    
//    
//}
