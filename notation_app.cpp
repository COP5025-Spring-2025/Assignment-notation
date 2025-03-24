#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;


bool isOperator(char c) {
    //complete code here
}


int precedence(char op) {
    //complete code here
    return 0;
}


string detectNotation(const string& expr) {

    //complete code here, use isOperator function
    if (expr.find('(') != string::npos || expr.find(')') != string::npos) return "infix";

    return "unknown";
}


int evalPostfix(vector<string> tokens, map<string, int>& vars) {
    stack<int> s;
    for (const auto& token : tokens) {
        if (isOperator(token[0]) && token.size() == 1) {
            int b = s.top(); s.pop();
            //complete line
            switch (token[0]) {
                case '+': //complete line
                case '-': s.push(a - b); break;
                //complete line
                //complete line
            }
        } else {
            if (isalpha(token[0])) //complete line
            else //complete line;
        }
    }
    return s.top();
}


int evalPrefix(vector<string> tokens, map<string, int>& vars) {
    stack<int> s;
    for (//compelte line) {
        const string& token = tokens[i];
        if (isOperator(token[0]) && //complete line) {
            int a = s.top(); s.pop();
            int //complete line
            switch (token[0]) {
                //complete line
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                //complete line
            }
        } else {
            if (//complete line);
            else s.push(stoi(token));
        }
    }
    return s.top();
}

// Convert infix to postfix
vector<string> infixToPostfix(const string& expr) {
    stack<char> ops;
    vector<string> output;
    for (size_t i = 0; i < expr.length(); ++i) {
        char c = expr[i];
        if (isspace(c)) continue;
        if (isdigit(c) || isalpha(c)) {
            output.push_back(string(1, c));
        } else if (c == '(') {
            ops.push(c);
        } else if (c == ')') {
            while (!ops.empty() && ops.top() != '(') {
                output.push_back(string(1, ops.top()));
                ops.pop();
            }
            ops.pop(); // remove '('
        } else if (isOperator(c)) {
            while (!ops.empty() && precedence(ops.top()) >= precedence(c)) {
                output.push_back(string(1, ops.top()));
                ops.pop();
            }
            ops.push(c);
        }
    }
    while (!ops.empty()) {
        output.push_back(string(1, ops.top()));
        ops.pop();
    }
    return output;
}


vector<string> tokenize(const string& expr) {
    vector<string> tokens;
    stringstream ss(expr);
    string tok;
    //complete line
    return tokens;
}

// Extract variables for evaluation
set<string> extractVariables(const vector<string>& tokens) {
    set<string> vars;
    for (const auto& tok : tokens) {
        //complete line
    }
    return vars;
}
