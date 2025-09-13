#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int calPoints(vector<string> opr){
    stack<int> st;
    for(int i = 0; i<opr.size(); i++){
        if(opr[i] == "C"){
            st.pop();
        }
        else if(opr[i] == "D"){
            st.push(st.top()*2);
        }
        else if(opr[i] == "+"){
            if(st.size() > 1){
                int temp = st.top();
                st.pop();
                int sum = temp + st.top();
                st.push(temp);
                st.push(sum);
            }
        }
        else{
            st.push(stoi(opr[i]));
        }
        // cout<<st.top()<<endl;
    }
    int sum = 0;
    while(!st.empty()){
        sum = sum + st.top();
        st.pop();
    }
    return sum;
}

int main(){
    vector<string> opr{"5","2","+"};
    int ans = calPoints(opr);
    cout<<ans;
}