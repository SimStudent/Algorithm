#include <bits/stdc++.h>
using namespace std;

int random_number(int min,int max){
	return rand() % (max-min+1) + min;
}

void printList(int res[]){
	int size = sizeof(res)/sizeof(res[0]);
	for(int i=0;i<size;i++){
		printf("%d ",res[i]);
	}
}













int main(){
	for(int i = 0;i<1000;i++){
		int temp = random_number(1,10);
		
		if(temp>=1 && temp<=10){
			cout<<temp<<" true"<<endl;
		}
		else cout<<"false";
	}
}




