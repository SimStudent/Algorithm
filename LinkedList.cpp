// Commited 2

#include <bits/stdc++.h>

using namespace std;
// #define ele int

struct LKNode{
    int val;
    LKNode * next;
}*head;

void initLKList(LKNode *node,int val=0){
    node = (LKNode *)malloc(sizeof(LKNode));
    node->val = val;
    node->next = nullptr;
}

void backInsert(LKNode *head,int a){
    LKNode * temp; initLKList(temp,a);
    LKNode * p = head;
    while(p != nullptr){
        p = p->next;
    }
    p->next = temp;
    head->val++;
}

void printLKList(LKNode *head){
    LKNode *p = head;
    while(p != nullptr){
        cout<< p->val;
        p = p->next;
    }
    cout<<endl;
}

int getLength(LKNode *head)return head->val;


int main(){
    cout<<"hellow";
    return 0;

}