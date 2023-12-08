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
	cout<<"请问要玩什么"<<endl<<"1.猜数游戏"<<endl<<"2.走迷宫"<<endl<<"3.直接退出"<<endl;
	cin>>n;
	if(n==1){
		srand(time(NULL));
		int r=rand()%99+1;
		int a;
		cout<<"这个数的范围1~100"<<endl;
		sleep(1);
		system("cls");
		while(a!=r){
			cout<<"数:";
			cin>>a;
			if(a>r){
				cout<<"大了"<<endl;
			}
			if(a<r){
				cout<<"小了"<<endl;
			}
			sleep(1);
			system("cls");
		}
		cout<<"恭喜你，猜对了!"<<endl;
	  }
	  else if(n==2){
	  	int a=1,b=1;
	  	char w;
	  	cout<<"wasd操作"<<endl;
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
						cout<<"你出地图了"<<endl;
						break;
					}
					else{
						if(x[a-1][b]=='#'){
							cout<<"你撞墙了"<<endl;
							break;
						}
						else{
							a--;
						}
					}
				}
				else if(w=='S'||w=='s'){
					if(a+1==6){
						cout<<"你出地图了"<<endl;
						break;
					}
					else{
						if(x[a+1][b]=='#'){
							cout<<"你撞墙了"<<endl;
							break;
						}
						else{
							a++;
						}
					}
				}
				else if(w=='a'||w=='A'){
					if(b-1==6){
						cout<<"你出地图了"<<endl;
						break;
					}
					else{
						if(x[a][b-1]=='#'){
							cout<<"你撞墙了"<<endl;
							break;
						}
						else{
							b--;
						}
					}
				}
				else if(w=='d'||w=='D'){
					if(b+1==6){
						cout<<"你出地图了"<<endl;
						break;
					}
					else{
						if(x[a][b+1]=='#'){
							cout<<"你撞墙了"<<endl;
							break;
						}
						else{
							b++;
						}
					}
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			cout<<"ok"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==3){
			cout<<"感谢玩"<<endl;
			sleep(1);
			system("cls");
			return;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
int main(){
	cout<<"windows非官方cmd"<<endl;
	cout<<"版权所有 (c) 2023 zhizi。保留所有权利。"<<endl;
	//我就问你前几句话6不6
	while(true){
		cout<<">";
		getline(cin,str);
		if(str=="help"){
			cout<<"game 打开小游戏"<<endl<<"chat 聊天"<<endl<<"note 打开日记本"<<endl<<"html 编写html"<<endl<<"starthtml 打开html文件"<<endl<<"zhizi 打开质子的个人主页"<<endl;
		}
		else if(str=="game"){
			game();
		}
		else if(str=="chat"){
			system("start http://zhiziqixingdeng.github.io/gotochat.html");
		}
	}
}
