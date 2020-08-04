////
////  백준_k번째 수_11004.cpp
////  algorithm
////
////  Created by 김민영 on 2016. 7. 18..
////  Copyright © 2016년 김민영. All rights reserved.
////
//
//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int n,key;
//int arr[5000010];
//
//
//int quick_partition(int left, int right){
//    int mid = (left+right)/2;
//    int pibo = arr[mid];
//    int j = left;
//    
//    swap(arr[left], arr[mid]);
//    
//    for(int i=left+1; i<=right; i++){
//        if(pibo>arr[i]){
//            j++;
//            swap(arr[i], arr[j]);
//        }
//    }
//    swap(arr[left], arr[j]);
//    
//    return j;
//}
//
//
//void quick_search(int left, int right){
//    
//    int pibo  = quick_partition(left, right);
//    if(pibo==key) return;
//    
//    if(pibo>key) quick_search(left, pibo-1);
//    else quick_search(pibo+1, right);
//    
//}
//
//
//
//
//int main(){
//
//    cin>>n>>key;
//    key-=1;
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
//    
//    quick_search(0, n-1);
//    
//    cout<<arr[key]<<endl;
//    
//    return 0;
//}
//
////
////int main(){
////    scanf("%d %d",&n,&key);
////    key -= 1;
////    for (int i=0; i<n; i++) {
////        scanf("%d",&arr[i]);
////    }
////    nth_element(arr,arr+key,arr+n);
////    
////    printf("%d\n",arr[key]);
////    return 0;
////}