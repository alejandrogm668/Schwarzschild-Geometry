#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<math.h>
#include<bits/stdc++.h> 
#define PI 3.14159
using namespace std; 


int main (){
ofstream file;
file.open("r.plt");
double mu=0.17;
double u=0.04;
double du=1;
double phi=0;
double phio=0;
double h=0.001; 
double uf=0.04;
double duf=1;
int cont=0;
file<<"set terminal gif"<<endl;
file<<"set xrange [-10:20]"<<endl;
file<<"set yrange [-10:20]"<<endl;
file<<"set output 'fotones.gif'"<<endl;
file<<"plot '-' w lp ls 0.5 ps 1 pt 7  t 'foton',";
file<<"'-' w p ps 3 pt 7 t 'M'"<<endl;
for(double phi=0.5;phi<5;phi=phi+h){
double k1=h*du;
double l1=h*(3*mu*u*u-u);
double k2=h*(du+l1/2);
double l2=h*((3*mu*(u+k1/2)*(u+k1/2))-(u+k1/2));
double k3=h*(du+l2/2);
double l3=h*((3*mu*(u+k2/2)*(u+k2/2))-(u+k2/2));
double k4=h*(du+l3);
double l4=h*((3*mu*(u+k3)*(u+k3))-(u+k3));
uf=u+(k1+2*k2+2*k3+k4)/6;
duf=du+(l1+2*l2+2*l3+l4)/6;
double r=1/u;
double y=r*sin(phi);
double x=r*cos(phi);
du=duf;
u=uf; 
file<<x<<" "<<y<<endl;

}
file<<"e"<<endl;
file<<0<<" "<<0<<endl;

file<<endl<<endl;


file<<"unset output "<<endl;
file<<endl<<endl;
cont=cont+1;
return 0;
}

