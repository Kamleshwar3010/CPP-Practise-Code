#include<stdio.h>
int l=0;
	int tas(int *s){
		int r=*s;
		l=1;
		return r;
	}
	void entry (int *s,char c){
	if(tas(&l)==0){
		printf("%c can enter in critical section\n",c);printf("%d",*s);
	//	tas(&l);
			}
	else{
			printf("%c can not enter in critical section\n",c);
	}
}
	void cs(char c){
		while(tas(&l)==1);
printf("%c in critical section\n",c);
	}
	int* exit(int * s){
		l=0;
		s=&l;
		return s;
	}
int main(){
entry(&l, 'p');
cs('p');
tas(exit(&l));
entry(&l, 'q');
cs('q') ;
return 0;
}