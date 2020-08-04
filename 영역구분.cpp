////
////  영역구분.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 5..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//
//
///*testCase
//8
//1 1 0 0 0 0 1 1
//1 1 0 0 0 0 1 1
//0 0 0 0 1 1 0 0
//0 0 0 0 1 1 0 0
//1 0 0 0 1 1 1 1
//0 1 0 0 1 1 1 1
//0 0 1 1 1 1 1 1
//0 0 1 1 1 1 1 1
////*/
////int map[2<<7][2<<7], n, gray, white;
////
////void func(int a, int b, int s){
////    bool isOne = true;
////    
////    
////    for(int i=a; i<a+s; i++){
////        for(int j=b; j<b+s; j++){
////            if(map[i][j]!=map[a][b])
////                isOne =false;
////        }
////    }
////    
////    if(isOne){
////        if(map[a][b]==1) gray++;
////        else white++;
////        return;
////    }else{
////        func(a,b,s/2);
////        func(a+s/2,b,s/2);
////        func(a,b+s/2,s/2);
////        func(a+s/2,b+s/2,s/2);
////    }
////    
////}
////
////
////int main(){
////    
////    cin>>n;
////    
////    for(int i=0; i<n; i++)
////        for(int j=0; j<n; j++)
////            scanf("%d",&map[i][j]);
////    
////    func(0,0,n);
////    
////    cout<<white<<"\n"<<gray<<endl;
////    
////    return 0;
////    
////}
//
//
//int P[2<<7][2<<7], n;
//
//bool isOne(int a, int b, int s, int v){
//    
//    for(int i=a; i<a+s; i++){
//        for(int j=b; j<b+s; j++){
//            if(P[i][j]!=v) return false;
//        }
//    }
//    
//    return true;
//}
//
//
//int f(int a, int b, int s, int v){
//    if(s==1) return (P[a][v]==v);
//    if(isOne(a,b,s,v)) return 1;
//    return f(a,b,s/2,v)+f(a+s/2,b,s/2,v)+f(a,b+s/2,s/2,v)+f(a+s/2,b+s/2,s/2,v);
//}
//
//int main(){
//
//    cin>>n;
//
//    for(int i=0; i<n; i++)
//        for(int j=0; j<n; j++)
//            scanf("%d",&P[i][j]);
//
//    cout<< f(0,0,n,0)<<"\n"<< f(0,0,n, 1)<<endl;
//
//    return 0;
//
//}
