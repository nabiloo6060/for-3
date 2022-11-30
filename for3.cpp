#include <iostream>
using namespace std;
main (){
	int a,b,i,c;
	cout<<"please enter number:";
	cin>>a;
	cout<<"please enter number:";
	cin>>b;
	
	for(i=1;  i<=a   && i<=b; i++){
		
	if(a%i== 0 &&  b%i==0){
	}
	c=i;
	}
	if(a%b==0)
	cout<<"c"<<"\t"<<a<<"\t"<<"and"<<"\t"<<b<<"\t"<<"is"<<"\t"<<c;
}