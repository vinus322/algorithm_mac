////
////  이진 암호화.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
///*TestCase
// 4 0000
// 4 1101
// */
//
//
//#include <stdio.h>
//#include<iostream>
//
//using namespace std;
//
//int n;
//char S[1<<19];
//
//void f(int k, int s){
//    int sum =0;
//    if(s==1){
//        printf("%c", S[k]);
//        return;
//    }
//    
//    
//    for(int i=k; i<k+s;i++){
//        sum+=(S[i]-'0');
//    }
//    
//    if(sum==0||sum==s)
//        printf("%d", (bool)sum);
//    else{
//        printf("-");
//        f(k, s/2);
//        f(k+s/2, s/2);
//    }
//    
//}
//
//
//int main(){
//    
//    scanf("%d %s", &n, S);
//    f(0,n);
//    cout<<"\n";
//    return 0;
//
//}