//
//  hack_NonDivisibleSubset.cpp
//  algorithm
//
//  Created by 김민영 on 2020. 8. 2..
//  Copyright © 2020년 김민영. All rights reserved.
//

//#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



//
//int toggle[101];
//int result = 0;
//void makeSubSet(vector<int> extra, int i, int subLen){
//    int k = extra.size();
//    if(i>=k){
//        if(result<subLen) result = subLen;
//        return;
//    }
//    
//    if(toggle[i]!=-1){
//        //선택한경우
//        toggle[k-i] = -1;
//        makeSubSet(extra, i+1, extra[i]+subLen);
//    }
//    //안한경우
//    toggle[k-i] = 0;
//    makeSubSet(extra, i+1,subLen);
//}




/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> extra(k+1, 0); //나머지
    int result = 0;
    int size = s.size();
    
    for(int i=0; i<size; i++){
        int e = s[i]%k;
        extra[e]++;
    }
    
    //나누어떨어지는 수 하나만 포함 가능
    if(extra[0]>0){
        extra[0] = 1;
    }
    
    //중앙값은 하나만 포함 가능
    if(k%2 == 0 && extra[k/2]>0){
        extra[k/2] = 1;
    }

 
    for(int i=0; i<=(k/2); i++){
        if(extra[i]>extra[k-i]){
            result+=extra[i];
        }else{
            result+=extra[k-i];
        }
    }
    
    
    cout<< result<<endl;
    
    return result;
    
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
    
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    
    int n = stoi(first_multiple_input[0]);
    
    int k = stoi(first_multiple_input[1]);
    
    string s_temp_temp;
    getline(cin, s_temp_temp);
    
    vector<string> s_temp = split(rtrim(s_temp_temp));
    
    vector<int> s(n);
    
    for (int i = 0; i < n; i++) {
        int s_item = stoi(s_temp[i]);
        
        s[i] = s_item;
    }
    
    int result = nonDivisibleSubset(k, s);
    
//    fout << result << "\n";
//    
//    fout.close();
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    
    s.erase(
            s.begin(),
            find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
            );
    
    return s;
}

string rtrim(const string &str) {
    string s(str);
    
    s.erase(
            find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
            s.end()
            );
    
    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;
    
    string::size_type start = 0;
    string::size_type end = 0;
    
    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        
        start = end + 1;
    }
    
    tokens.push_back(str.substr(start));
    
    return tokens;
}

