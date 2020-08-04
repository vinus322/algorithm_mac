////
////  정렬.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 14..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include <stdio.h>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//struct Point{
//    int x, y;
//    bool operator < (const Point &v) const{
//        if(x<v.x)
//            return true;
//        else if(x==v.x&&y<v.y)
//            return true;
//        return false;
//    }
//};
//
//Point p[100010];
//int n;
//
//int main(){
//    
//    scanf("%d", &n);
//    for(int i=0; i<n; i++)
//        scanf("%d %d",&p[i].y, &p[i].x);
//    
//    sort(p,p+n);
//    
//    for(int i=0; i<n; i++)
//        printf("%d %d\n", p[i].y,p[i].x);
//    
//    return 0;
//    
//    
//}