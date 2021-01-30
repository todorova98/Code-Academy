int function3(int a, int b){
    return a*b;
}
int function2(int a, int b){
    int c=function3(a,b);
    return c+12;
}
int function1(int a,int b){
    int c;
    c=2*function2(a,b);
    return c;
}

