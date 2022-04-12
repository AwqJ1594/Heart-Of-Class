#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int read(int wts,int s/*TEXT 断层*/,unsigned short int player_choose){
		char a[20000];
		srand((int)time(0));
		switch(wts){
			case 1:
				freopen("txt\\data1.txt","r",stdout);
				break;//开始菜单 
			case 2:
				freopen("txt\\data2.txt","r",stdout);
				break;//选择人物 
			case 3:
				//freopen("\\gameconfig\\maxplayer.txt",r,stdout);
				//while(!cin >> a[i])
				//int tmp;
				//for(int i = strlen(a);i >= 0;i++)tmp = (a[i]-48) * pow(10,i); 
				FLAGS:
				switch(player_choose){
					case 1:
						freopen("\\txt\\player\\player1.txt","r",stdout);
						break;
					case 2:
						freopen("\\txt\\player\\player2.txt","r",stdout);
						break;
					case 3:
						freopen("\\txt\\player\\player3.txt","r",stdout);
						break;//3 player,more?later.
					default:
						player_choose = rand()%3;
						goto FLAGS;
				}
				break;
			
			deault:
				freopen("txt\\debug.txt","r",stdout);
				break;
	}
		int i = s;
		while(!cin >> a[i]){
			if(a[i] == '/'){
				cin >> a[i+1];
				if(a[i+1] == '/'){
					fclose(stdout);
					return i;
				}else cout << a[i];//print the txt.
			}
		}				
	return i;
}
