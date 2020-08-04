//#include <stdio.h>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<climits>
//
//using namespace std;
//
////i번째 지점을 n번째 도착하였을 경우 최소값
//
//inline long long ABS(long long x) {
//    if( x>0) return x;
//    return -x;
//}
//
//int n;
//long long L;
//long long dp[2][1010][1010];
//long long l[1010], r[1010];
//int lt, rt;
//long long ans;
//
//
//bool cmp(const long long &x,const long long& y){
//    return x>y;
//}
//
//void init(){
//
//    for(int i=0; i<1010; i++){
//        for(int j =0; j<1010; j++){
//             for(int s =0; s<2; s++)
//                 dp[s][i][j]=-1;
//        }
//    }
//}
//
//long long solve(int depth, int start, int left, int right){
//    if(left>lt|| right>rt) return 9876543210;
//    if(depth==0) return 0;
//    
//    long long& ret = dp[start][left][right];
//    if(ret!=-1) return ret;
//    ret=9876543210;
//    
//    long long s;
//    if(start==0) s=l[left-1];
//    else s = r[right-1];
//
//    long long tmp;
//    ret = solve(depth-1,1,left,right+1)+depth*ABS(s-r[right]);
//    tmp = solve(depth-1,0,left+1,right)+depth*ABS(s-l[left]);
//    
//    if(ret>tmp) ret = tmp;
//    return ret;
//}
//
//
//int main(){
//    
//    init();
//    
//    scanf("%d %lld", &n, &L);
//    
//    for(int i=0; i<n; i++){
//        long long dist;
//        scanf("%lld",&dist);
//        
//        if(dist>L) r[rt++] = dist;
//        else l[lt++] = dist;
//    
//    }
//    r[rt++] = L;
//    
//    sort(l, l+lt, cmp);
//    sort(r, r+rt);
//    
//    ans = solve(n,1,0,1);
//    
//    printf("%lld\n",ans);
//    
//    return 0;
//}
