#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
string str;
char x[6][6] = {
		{'1','1','1','1','1','1'},
    {'1','.', '#', '#', '#', '#'},
    {'1','.', '.', '.', '.', '#'},
    {'1','#', '#', '#', '.', '#'},
    {'1','#', '.', '.', '.', '#'},
    {'1','#', '#', '#', '.', '.'}
};
void game(){
	int n;
	while(true){
	cout<<"����Ҫ��ʲô"<<endl<<"1.������Ϸ"<<endl<<"2.���Թ�"<<endl<<"3.ֱ���˳�"<<endl;
	cin>>n;
	if(n==1){
		srand(time(NULL));
		int r=rand()%99+1;
		int a;
		cout<<"������ķ�Χ1~100"<<endl;
		sleep(1);
		system("cls");
		while(a!=r){
			cout<<"��:";
			cin>>a;
			if(a>r){
				cout<<"����"<<endl;
			}
			if(a<r){
				cout<<"С��"<<endl;
			}
			sleep(1);
			system("cls");
		}
		cout<<"��ϲ�㣬�¶���!"<<endl;
	  }
	  else if(n==2){
	  	int a=1,b=1;
	  	char w;
	  	cout<<"wasd����"<<endl;
	  	while(a!=5||b!=5){
	  		system("cls");
	  		for(int i=1;i<=5;i++){
	  			for(int j=1;j<=5;j++){
	  				if(i==a&&j==b){
	  					cout<<'w';
						}
						else{
							cout<<x[i][j];
						}
					}
					cout<<endl;
				}
				cin>>w;
				if(w=='w'||w=='W'){
					if(a-1==0){
						cout<<"�����ͼ��"<<endl;
						break;
					}
					else{
						if(x[a-1][b]=='#'){
							cout<<"��ײǽ��"<<endl;
							break;
						}
						else{
							a--;
						}
					}
				}
				else if(w=='S'||w=='s'){
					if(a+1==6){
						cout<<"�����ͼ��"<<endl;
						break;
					}
					else{
						if(x[a+1][b]=='#'){
							cout<<"��ײǽ��"<<endl;
							break;
						}
						else{
							a++;
						}
					}
				}
				else if(w=='a'||w=='A'){
					if(b-1==6){
						cout<<"�����ͼ��"<<endl;
						break;
					}
					else{
						if(x[a][b-1]=='#'){
							cout<<"��ײǽ��"<<endl;
							break;
						}
						else{
							b--;
						}
					}
				}
				else if(w=='d'||w=='D'){
					if(b+1==6){
						cout<<"�����ͼ��"<<endl;
						break;
					}
					else{
						if(x[a][b+1]=='#'){
							cout<<"��ײǽ��"<<endl;
							break;
						}
						else{
							b++;
						}
					}
				}
				else{
					cout<<"����"<<endl;
				}
			}
			cout<<"ok"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==3){
			cout<<"��л��"<<endl;
			sleep(1);
			system("cls");
			return;
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
int main(){
	cout<<"windows�ǹٷ�cmd"<<endl;
	cout<<"��Ȩ���� (c) 2023 zhizi����������Ȩ����"<<endl;
	//�Ҿ�����ǰ���仰6��6
	while(true){
		cout<<">";
		getline(cin,str);
		if(str=="help"){
			cout<<"game ��С��Ϸ"<<endl<<"chat ����"<<endl<<"note ���ռǱ�"<<endl<<"html ��дhtml"<<endl<<"starthtml ��html�ļ�"<<endl<<"zhizi �����ӵĸ�����ҳ"<<endl;
		}
		else if(str=="game"){
			game();
		}
		else if(str=="chat"){
			system("start http://zhiziqixingdeng.github.io/gotochat.html");
		}
	}
}
