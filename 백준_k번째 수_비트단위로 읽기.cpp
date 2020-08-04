////
////  백준_k번째 수_비트단위로 읽기.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 18..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include<cstdio>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//char buf[1 << 20];            //이곳에 값을 저장
//int idx, nidx;          //idx는 현재 인덱스, nidx는 총 몇개 입력 받았는지
//
//
//static inline char read()       //stdin에서 일정 구간만큼 입력받고 buf배열에 저장 -> 리턴은 한 글자만 리턴
//{
//    if (idx == nidx)
//    {
//        nidx = fread(buf, 1, 1 << 20, stdin);
//        idx = 0;
//    }
//    
//    return buf[idx++];
//}
//
//static inline int readInt() //한 정수 리턴
//{
//    int sum = 0;
//    char now = read();
//    bool flag = false;
//    while (now == ' ' || now == '\n')
//        now = read();
//    
//    if (now == '-')
//    {
//        flag = true;
//        now = read();
//    }
//    
//    while (now != ' ' && now != '\n')
//    {
//        sum *= 10;
//        sum += now - '0';
//        now = read();
//    }
//    
//    if (flag == true)
//        return -sum;
//    else
//        return sum;
//}
//
//int arr[5000001];
//
//int main()
//{
//    int n, k;
//    n = readInt();
//    k = readInt();
//    for (int i = 1; i <= n; i++)
//        arr[i] = readInt();
//    
//    nth_element(arr + 1, arr + k, arr + n + 1);
//    
//    printf("%d\n", arr[k]);
//}