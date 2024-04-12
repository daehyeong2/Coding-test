
#include <bits/stdc++.h>
using namespace std;

vector<string> split(const string& input, string delimiter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos){
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main(){
    string context = "안녕하세요 테스트입니다. 아 테스트 아 아 a b ccc";
    vector<string> result = split(context, "테");
    for(string i : result) cout << i << "\n";
    return 0;
}