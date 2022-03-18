#include <iostream>
using namespace std;



int stck[1000];
int last;

void init(){
    last = -1;
}
void push(int x){
    stck[++last] = x;
}
int size(){
    return last + 1;
}
//last가 0보다 작으면 스택에 아무 정보가 없기때문
bool empty(){
    return (last<0);
}
int top(){
    //empty를 이용해 현재 스택에 값이 존재하는지 판별 true이면 if 문 실행
    if(empty()){
        return -1;
    }else
    return stck[last];
}



int main(){
    
}