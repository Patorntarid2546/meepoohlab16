#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *m,int *n,int *o,int *p);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int*m,int *n,int *o,int *p){
		int qwerty[4]={*m,*n,*o,*p};
		int ytrewq[4] = {0,0,0,0};
	for(int i=0;i<4;i++){
		ytrewq[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(ytrewq[i] == ytrewq[j]){
				i--;
				break;
			}
		}
	}
	*m = qwerty[ytrewq[0]];
	*n = qwerty[ytrewq[1]];
	*o = qwerty[ytrewq[2]];
	*p = qwerty[ytrewq[3]];
}
