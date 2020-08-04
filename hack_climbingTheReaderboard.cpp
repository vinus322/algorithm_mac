////
////  hack_climbingTheReaderboard.cpp
////  algorithm
////
////  Created by 김민영 on 2020. 8. 2..
////  Copyright © 2020년 김민영. All rights reserved.
////
//
////#include <bits/stdc++.h>
//#include<iostream>
//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//
//vector<string> split_string(string);
//
//
//
//
//// Complete the climbingLeaderboard function below.
//vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
//    
//    vector<int> rank;
//    vector<int> aliceRanks;
//    
//    rank.push_back(1);
//    int beforeScore = scores[0];
//    for(int i=1; i<scores.size(); i++){
//        if(beforeScore == scores[i]){
//            rank.push_back(rank[i-1]);
//        }else{
//            rank.push_back(rank[i-1]+1);
//        }
//        beforeScore = scores[i];
//    }
//    
//    
//
//    for(int i=0; i<alice.size(); i++){
//        int aliceScore = alice[i];
//        int start = 0, end = scores.size()-1;
//        
//        int aliceRank = -1;
//        
//        int mid = -1;
//        while(end>=start){
//             mid = (start+end)/2;
//            if(scores[mid] == aliceScore){
//                break;
//            }
//            else if(scores[mid]<aliceScore){
//                end = mid-1;
//            }else{
//                start = mid+1;
//            }
//        }
//        
//        aliceRank = (aliceScore>=scores[mid])? rank[mid] : rank[mid]+1;
//        aliceRanks.push_back(aliceRank);
//        
//    }
//    
//        for (int i = 0; i < aliceRanks.size(); i++) {
//            cout << aliceRanks[i];
//    
//            if (i != aliceRanks.size() - 1) {
//                cout << "\n";
//            }
//        }
//    
//    return aliceRanks;
//    
//}
//
//int main()
//{
//    //ofstream fout(getenv("OUTPUT_PATH"));
//    
//    int scores_count;
//    cin >> scores_count;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    
//    string scores_temp_temp;
//    getline(cin, scores_temp_temp);
//    
//    vector<string> scores_temp = split_string(scores_temp_temp);
//    
//    vector<int> scores(scores_count);
//    
//    for (int i = 0; i < scores_count; i++) {
//        int scores_item = stoi(scores_temp[i]);
//        
//        scores[i] = scores_item;
//    }
//    
//    int alice_count;
//    cin >> alice_count;
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    
//    string alice_temp_temp;
//    getline(cin, alice_temp_temp);
//    
//    vector<string> alice_temp = split_string(alice_temp_temp);
//    
//    vector<int> alice(alice_count);
//    
//    for (int i = 0; i < alice_count; i++) {
//        int alice_item = stoi(alice_temp[i]);
//        
//        alice[i] = alice_item;
//    }
//    
//    vector<int> result = climbingLeaderboard(scores, alice);
//    
////    for (int i = 0; i < result.size(); i++) {
////        fout << result[i];
////        
////        if (i != result.size() - 1) {
////            fout << "\n";
////        }
////    }
//    
//    //fout << "\n";
//    
//    //fout.close();
//    
//    return 0;
//}
//
//vector<string> split_string(string input_string) {
//    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
//        return x == y and x == ' ';
//    });
//    
//    input_string.erase(new_end, input_string.end());
//    
//    while (input_string[input_string.length() - 1] == ' ') {
//        input_string.pop_back();
//    }
//    
//    vector<string> splits;
//    char delimiter = ' ';
//    
//    size_t i = 0;
//    size_t pos = input_string.find(delimiter);
//    
//    while (pos != string::npos) {
//        splits.push_back(input_string.substr(i, pos - i));
//        
//        i = pos + 1;
//        pos = input_string.find(delimiter, i);
//    }
//    
//    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
//    
//    return splits;
//}
//
