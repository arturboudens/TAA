#include <bits/stdc++.h>

using namespace std;

bool check(){
    string expressao;
    cin >> expressao;

    stack<char> parenteses;

    for(int i = 0; i < expressao.length(); i++){
        if(expressao[i] == '(' || expressao[i] == '[' || expressao[i] == '{'){
            parenteses.push(expressao[i]);
        }
        else if(expressao[i] == ')' || expressao[i] == ']' || expressao[i] == '}'){
            if(parenteses.empty()){
                return false;
            }
            else if(parenteses.top() == '(' && expressao[i] == ')'){
                parenteses.pop();
            }
            else if(parenteses.top() == '[' && expressao[i] == ']'){
                parenteses.pop();
            }
            else if(parenteses.top() == '{' && expressao[i] == '}'){
                parenteses.pop();
            }
            else{
                return false;
            }
        }
    }
    if(parenteses.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    if(check()){
        cout << "OK" << endl;
    }
    else{
        cout << "SyntaxError" << endl;
    }
    
    return 0;
}