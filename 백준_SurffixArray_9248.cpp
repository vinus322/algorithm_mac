//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//#define Pair pair<int, int>
//
//#define MAX 500005
//
//string S;
//int N, K;
//vector<int> RA, SA, LCP;
//
//bool cmp(const int &a, const int &b){
//    if(RA[a]!=RA[b])
//        return RA[a]<RA[b];
//    
//    return RA[a+K]<RA[b+K];
//    
//}
//
//int main(){
//    
//    cin >> S;
//    
//    N = (int) S.size();
//    
//    RA = vector<int>(N+1,-1);
//    SA = vector<int>(N);
//    
//    
//    //suffix array
//    
//
//    for(int i=0; i<N; i++){
//        SA[i] = i;
//        RA[i] = S[i];
//    }
//    
//    for(int k=1; k < N; k<<=1){
//        
//        //sort based on ranking
//        K=k;
//        sort(SA.begin(), SA.end(), cmp);
//        
//        vector<int> tmpRA(N, 0);
//        for(int i =1; i<N; i++){
//            //if ranking pair is different increase rank
//            tmpRA[i] = tmpRA[i-1]+cmp(SA[i-1], SA[i]);
//        }
//
//        //updating RA[] from tempRA[]
//        for(int i=0; i<N; i++){
//            RA[SA[i]] = tmpRA[i];
//        }
//    }
//    
//    
//    //Longest Common Prefix
//    
//    LCP = vector<int>(N, 0);
//    
//    for (int i = 0, l=0; i < N; i++) {
//        if (RA[i] == N - 1) continue;
//        
//        int j = SA[RA[i]+1];
//        l = (l)? l-1 : 0;
//    
//        // increase L properly
//        while (S[i + l] == S[j + l]) l++;
//        
//        LCP[RA[i]] = l;
//        
//    }
//    
//    //result
//    for(int i=0; i<N; i++)
//        cout << SA[i]+1 << " ";
//    
//    
//    cout<< "\nx ";
//    for (int i = 0; i < N-1; i++)
//        cout << LCP[i] << " ";
//
//    
//    cout<<endl;
//    
//}