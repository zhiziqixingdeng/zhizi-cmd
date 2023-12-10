#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int a,b,c;
cnt;
int main(){
  cin>>a;
  cin>>b;
  cin>>c;
  while(cnt<a*3600+b*60+c){
    cnt++;
    cout<<cnt;
    sleep(1);
    system("cls");
  }
  cout<<"ok"<<endl;
  return 0;
}