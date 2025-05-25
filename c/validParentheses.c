bool isValid(char* s) {
    int len = strlen(s);
    char* stack = malloc(len);
    int top = -1;

    for(int i = 0; i < len; i++){
        char c = s[i];
        if(c == '{' || c == '(' || c == '[') {
            stack[++top] = c;
        } else {
            if(top < 0) {
                free(stack);
                return false;
            }
            char topStack = stack[top--];
            if((c == '}' && topStack != '{') ||
                    (c == ']' && topStack != '[') ||
                    (c == ')' && topStack != '(')){
                free(stack);
                return false;
            }
        }
    }
    bool isValid = (top == -1);
    free(stack);
    return isValid;
        
}