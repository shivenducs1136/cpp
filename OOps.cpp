#include<bits/stdc++.h>
// #include"Hero.cpp"
using namespace std;

class Hero{
private:
	int health; 
public:
	char level; 

	int gethealth(){
		return health; 
	}
	void sethealth(int h){
		health = h; 
	}

};

int main(){

	Hero h1 ; 
	Hero *b = new Hero ; 
	(*b).sethealth(20); 
	cout<<(*b).gethealth()<<endl; 
	cout<<b->gethealth()<<endl; 

	cout<<sizeof(h1)<<endl;
	cout<<h1.level<<endl; 
	h1.sethealth(30);
	cout<<h1.gethealth()<<endl; 

	return 0; 
}