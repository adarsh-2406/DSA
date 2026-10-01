class Solution {
public:
    int top =-1;
    char stack[10000];
    void push(char ch){
        stack[++top] = ch;
    }
    char pop(){
        return stack[top--];
    }
    int isEmpty(){
        if(top == -1) return 1;
        else return 0;
    }
    char peek(){
        return stack[top];
    }
    bool isValid(string s) {
        int i = 0;
        while(i<s.length()){
            char  ch= s[i++];
            if(ch == '(' || ch == '{' || ch == '['){
                push(ch);
            }
            else if(ch == ')' || ch == '}' || ch==']') {
                if(isEmpty()) return false;
                else if( (ch == ')' && peek()!='(') || (ch == '}' && peek() != '{') || (ch == ']' && peek()!='[') ) {
                    return false;
                }
            pop();
        }
    }
        return top==-1;
    }
};