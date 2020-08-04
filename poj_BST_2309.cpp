//#include <cstdio>
//#include<iostream>
//
//using namespace std;
//
//
////이분 탐색 문제
////최솟값과 최댓값의 합은 루트의 값이다.
////이를 이용하여 반으로 계속 나우어 키값을 찾아낸다!
//
//
//long long key;
//
//void func(long long low , long long high){
//    long long root =(low+high)/2;
//    if(key== root){
//        printf("%lld %lld\n", low, high);
//        return;
//    }
//    if(key>root)
//        return func(root+1, high);
//    
//    return func(low, root-1);
//}
//
//
//
//void solve(){
//    cin>>key;
//
//    func(1,4294967296);
//    return ;
//}
//
//
//
//int main(){
//    int testCase;
//    cin>>testCase;
//    for(int i=0; i<testCase; i++){
//        solve();
//    }
//    
//    
//    return 0;
//}