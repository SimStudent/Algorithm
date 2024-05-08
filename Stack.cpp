#include <bits/stdc++.h>
#define Status int
#define elemType int
#define MaxSize 10000

using namespace std;

// 这是数组实现


struct SLNode{
	elemType elem[MaxSize];
	int top;
}Stack;

Status initStack(SLNode Stack){
	Stack.top = -1;
	return 1;
}

bool isEmpty(SLNode Stack){
	if(Stack.top>=-1)return 1;
	else return 0;
}

Status insertElem(SLNode Stack,elemType a){
	if(Stack.top+1 == MaxSize){
		cout<<"已经满了"<<endl;
		return 0;
	}
	else{
		Stack.elem[++(Stack.top)] = a;
		return 1;
	}
}

Status popElem(SLNode Stack){
	if(isEmpty(Stack))return 0;
	else{
		Stack.top--;
		return 1;
	}
}

Status printStack(SLNode Stack){
	cout<<"A Stack| top:"<<Stack.top<<endl;
	for(int i=0;i<=Stack.top;i++){
		// print this elem, for instance
		cout<<Stack.elem[i]<<endl;
	}
	return 1;
}

//Status insertElem(SLNode Stack,elemType a){
//	elemType * temp;
//	temp = (elemType *)malloc(sizeof(elemType));
//	temp
//	
//	return 1;
//}


int main(){
	
}

