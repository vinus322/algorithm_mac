//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//
//int currDepth, num;
//int my_num;
//
//void find_parent(int n, int& currDepth, int& num){
//    int p = 1;
//    int depth = 0;
//    while(p<n){
//        p*=2;
//        depth+=1;
//    }
//    
//    currDepth = depth;
//    num = p;
//}
//
//
//void search_my_node(int depth, int num){
//    if(my_num==num){
//        currDepth = depth;
//        return;
//    }
//    if(num>my_num) search_my_node(depth-1, num-depth);
//    else search_my_node(depth, num+depth);
//}
//
//
//int minimum_node(int depth, int num){
//    if(depth==0) return num;
//    minimum_node(depth-1, num-depth);
//}
//
//
//int maximum_node(int depth, int num){
//    if(depth==0) return num;
//    maximum_node(depth-1, num+depth);
//}
//
//
//
//int main(){
//    int max, min;
//    
//    cin>>my_num;
//    
//    //find_parent(my_num, currDepth, num);
//    //search_my_node(currDepth,num);
//    //max = minimum_node(currDepth,my_num);
//    //min = maximum_node(currDepth,my_num);
//    
//    cout<<max<<" "<<min<<endl;
//    
//    return 0;
//}