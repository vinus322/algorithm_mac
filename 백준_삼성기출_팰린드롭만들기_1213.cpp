////
////  백준_삼성기출_팰린드롭만들기_1213.cpp
////  algorithm
////
////  Created by 김민영 on 2017. 10. 5..
////  Copyright © 2017년 김민영. All rights reserved.
////
//
//#include<iostream>
//
//using namespace std;
//
//int length;
//int alpa[28];
//
//
//
//int main(){
//    string res ="";
//    
//    int oddChar = -1;
//    
//    char tmp;
//    while((tmp = getchar())!='\n'){
//        length++;
//        alpa[tmp-'A']++;
//    }
//    
//    for(int i=0; i<27; i++){
//        if(alpa[i]==0) continue;
//        
//        if(alpa[i]%2!=0){
//            if(length%2==0||oddChar!=-1){
//                printf("I'm Sorry Hansoo\n");
//                return 0;
//            }
//            oddChar = i;
//        }
//        
//        for(int j =0; j<alpa[i]/2; j++){
//            res+=i+'A';
//        }
//    }
//    
//    if(oddChar!=-1)
//        res+=oddChar+'A';
//    
//    for(int i=27; i>=0; i--){
//       if(alpa[i]==0) continue;
//        for(int j =0; j<alpa[i]/2; j++){
//            res+=i+'A';
//        }
//    }
//    cout<<res<<endl;
//    
//
//    return 0;
//    
//}
//
//
//
//
