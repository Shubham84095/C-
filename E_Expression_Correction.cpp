#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool flag = true;

bool isValidExpression(string& expr) {
    int n = expr.length();

    for (int i = 1; i < n; i++) {
        if ((expr[i - 1] == '+' || expr[i - 1] == '-') && expr[i] == '=') {
            return false;
        }
        if ((expr[i - 1] == '+' || expr[i - 1] == '-') && (expr[i] == '+' || expr[i] == '-')) {
            return false;
        }
        
        if (expr[i - 1] == '=' && (expr[i] == '+' || expr[i] == '-')) {
            return false;
        }
    }

    if(expr[0] == '+' || expr[0] == '-' || expr[n-1] == '-' || expr[n-1] == '+') return false;
    
    return true;
}


ll findLength(ll num) {
    if (num == 0) return 1; 
    ll length = 0;
    while (num != 0) {
        length++;
        num /= 10;
    }
    return length;
}

ll evaluateSide(string& s) {
    ll result = 0, num = 0;
    bool add = true;
    int sz = 0;
    for (char ch : s) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
            sz++;
            if(sz != findLength(num) || sz > 10){
                flag = false;
            }
        } else if (ch == '+' || ch == '-') {
            result += (add ? num : -num);
            num = 0;
            add = (ch == '+');
            sz = 0;
        }
    }
    result += (add ? num : -num);
    return result;
}


bool isCorrect(string& equation) {
    int equalPos = equation.find('=');
    string lhs = equation.substr(0, equalPos);
    string rhs = equation.substr(equalPos + 1);
    return evaluateSide(lhs) == evaluateSide(rhs);
}

string tryToFix(string equation) {
    int n = equation.size();
    for (int i = 0; i < n; i++) {
        if (!isdigit(equation[i])) continue;
        char digit = equation[i];
        string modified = equation.substr(0, i) + equation.substr(i + 1);
        for (int j = 0; j < modified.size(); j++) {
            string test = modified.substr(0, j) + digit + modified.substr(j);
            flag = true;
            if (isCorrect(test) && flag && isValidExpression(test)) return test;
        }
        string test = digit + modified;
        if(isCorrect(test) && flag && isValidExpression(test)) return test;
        test = modified + test;
        if(isCorrect(test) && flag && isValidExpression(test)) return test;
    }
    return "Impossible";
}

int main() {
    string equation;
    cin >> equation;

    if (isCorrect(equation)) {
        cout << "Correct" << endl;
    } else {
        cout << tryToFix(equation) << endl;
    }

    return 0;
}
