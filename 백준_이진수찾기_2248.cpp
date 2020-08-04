//
// #include<stdio.h>
// #include<iostream>
// 
// using namespace std;
// 
// long long n, k, idx;
// long long dp[50][50];
// 
// 
// long long combi(long long a,long long b){
// if(a==b||b==0){
// return 1;
// }
// long long& ret =dp[a][b];
// if(ret!=-1) return ret;
// return ret = combi(a-1,b)+combi(a-1,b-1);
// }
// 
// void fun(long long depth, long long a, long long cnt){
// 
// if(cnt==0){
// for(long long i=0; i<depth; i++)
// printf("0");
// printf("\n");
// return;
// }
// int tmp = 0;
// for(long long b=0;b<=min(depth-1,a); b++){
// tmp += combi(depth-1, b);
// }
// if(tmp<=cnt){
// printf("1");
// fun(depth-1,a-1,cnt-tmp);
// }else{
// printf("0");
// fun(depth-1,a,cnt);
// }
// 
// }
// 
// int main(){
// memset(dp,-1,sizeof(dp));
// scanf("%lld %lld %lld3 ", &n, &k, &idx);
// fun(n,k,idx);
// }