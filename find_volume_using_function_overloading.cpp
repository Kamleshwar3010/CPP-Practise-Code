#include<iostream>
#define pi 3.14159
using namespace std;
float volume(float a){
	return a*a*a;
}
float volume(float l, float b, float h){
	return l*b*h;
}
float volume(float r, float h){
	return 1/3*pi*r*r*h;
}
float volume (double r){
	return 2/3*pi*r*r*r;
}
int main(){
	int option;
	cout<<"To find volume of-\n cube press 1\n cuboid press 2\n cone press 3\n sphere press 4\n";
	cin>>option;
	switch(option){
		case 1:
		float a;
		cout<<"Enter side-\t";
		cin>> a;
		cout<<"Volume of cube = "<<volume(a);
		break;
		case 2:
		float l, b, h;
		cout<<"Enter length,breadth,height-\t";
		cin>>l>>b>>h;
		cout<<"Volume of cuboid = "<<volume(l, b, h);
		break;
		case 3:
		float r, he;
		cout<<"Enter radius,height-\t";
		cin>>r>>he;
		cout<<"Volume of cone = "<<volume(r, he);
		break;
		case 4:
		double ra;
		cout<<"Enter radius-\t";
		cin>>ra;
		cout<<"Volume of sphere = "<<volume(ra);
		break;
		default:
		cout<<" Choose valid option";
	}
return 0;
}