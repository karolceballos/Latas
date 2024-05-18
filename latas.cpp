#include<iostream>
using namespace std;

int main(){
	
int latas=2,cont=1,igual=0,acum=0,acum2=0,cont2=1;
bool triangular=false,cuadrada=false;

while(igual<=5){
	
            while(acum<latas&&triangular==false){
	         acum+=cont;                 //6   4     latas:5
	         if(acum==latas){
	         	
	         	triangular=true;
		   }
	
	          cont++;
	
              }	
	      acum=0;
	      cont=1;
         while(acum2<latas&&cuadrada==false){
	       acum2=cont2*cont2;
	       if(acum2==latas){              
	       	cuadrada=true;
		 }
	
	
             cont2++;
	
            } 	
	
	     cont2=1;
	     acum2=0;
	     if(triangular==true&&cuadrada==true){
	     	
	     	cout<<latas<<endl;
	     	igual++;
	     }
	     triangular=false;
	     cuadrada=false;
	     latas++;
	
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
