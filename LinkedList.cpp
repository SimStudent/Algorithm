#include <bits/stdc++.h>

using namespace std;
// #define ele int

struct LKNode{
    int val;
    LKNode * next;
}*head;

void initLKList(LKNode *head,int val=0){
    head = (LKNode *)malloc(sizeof(LKNode));
    head->val = val;
    head->next = nullptr;
}

void insertElem(LKNode *head,int a){
    LKNode * temp; initLKList(temp,a);
    LKNode * p = head;
    while(p != nullptr){
        p = p->next;
    }
    p->next = temp;
}

void printLKList(LKNode *head){
    LKNode *p = head;
    while(p != nullptr){
        cout<< p->val;
        p = p->next;
    }
    cout<<endl;
}


int main(){
    cout<<"hellow";
    return 0;

}