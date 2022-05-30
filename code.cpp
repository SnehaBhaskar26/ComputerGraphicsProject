#include<iostream>
#include<graphics.h>
class animation 
{ 
 public: 
 virtual void drawing(int i)=0; 
 void drawing(); 
}; 
void animation::drawing() 
{ 
 int i,j,k,l; 
 for(i=230,k=150;i>100;i--,k++) 
 { 
 setcolor(YELLOW); 
 for(j=30;j>0;j--) 
 circle(340,i,j); 
 setcolor(BROWN); 
 drawing(5); 
 setcolor(YELLOW); 
 arc(k,250,20,180,6); 
 arc(k-10,250,20,180,6); 
 l=k+50; 
 setcolor(BLUE); 
 arc(l+100,200,20,180,6); 
 arc(l+90,200,20,180,6); 
 arc(l+150,170,30,140,6); 
 arc(l+140,170,30,140,6); 
 delay(150); 
 cleardevice(); 
 } 
 setcolor(BROWN); 
 drawing(5); 
 setcolor(YELLOW); 
 for(i=30;i>0;i--) 
 circle(340,90,i); 
} 
class second: public animation 
{ 
 void drawing(int i) 
 { 
 if (i!=0) 
 { 
 line(0,300,200,147); 
 arc(225,165,30,150,30); 
 line(250,148,400,300); 
 line(350,250,498,151); 
 arc(527,175,43,137,36); 
 line(553,150,640,250); 
 } 
 } 
}; 
int main() 
{ 
 animation *an; 
 second se; 
 an=&se; 
 initwindow(1800,700); 
 an->drawing(); 
 an->drawing(5); 
 getch(); 
 return 0; 
} 