#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
inline void down(int vk);//ͬ�� 
inline void up(int vk);//vk����ο��� 
inline void press(int vk);//ͬ�� 
inline void press(int vk){
	down(vk);
	up(vk);
}

inline void down(int vk){
	keybd_event(vk,0,0,0);
	return ;
}

inline void up(int vk){
	keybd_event(vk,0,KEYEVENTF_KEYUP,0);
	return ;
}
