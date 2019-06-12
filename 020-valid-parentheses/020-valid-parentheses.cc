
#include <stdlib.h>
#include <stdio.h> 
#include <string>
#include <stack>
#include <iostream>
using namespace std;
// class Solution {
// public:
//     bool isValid(string s) {
        
//     }
// };
    bool isValid(string s) {
        if(s.length()%2!=0)
            return false;
        stack<char> s1;
        for(int i=0;i<s.length();i++){
            if(s1.size()==0 && (s.at(i)==')' || s.at(i)==']'||s.at(i)=='}') )
                return false;
            switch (s.at(i))
            {
                case '(':s1.push(s.at(i));break;
                case ')':if(s1.top()=='('){if(s1.size()>0)s1.pop();else return false;} break;
                case '[':s1.push(s.at(i));break;
                case ']':if(s1.top()=='['){if(s1.size()>0)s1.pop();else return false;}break;
                case '{':s1.push(s.at(i));break;
                case '}':if(s1.top()=='{'){if(s1.size()>0)s1.pop();else return false;}break;
                default:
                    break;
            }
        }
        if(s1.size()==0)
            return true;
        return false;
    }
int main(){
    string s1 = "()",s2 ="()[]{}",s3 = "(]",s4 = "([)]",s5 = "{[]}",s6="){";
    printf("%d ",isValid(s1)); 
    printf("%d ",isValid(s2)); 
    printf("%d ",isValid(s3)); 
    printf("%d ",isValid(s4)); 
    printf("%d ",isValid(s5)); 
    printf("%d ",isValid(s6)); 
    return 0;
}