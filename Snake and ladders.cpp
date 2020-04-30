#include<simplecpp>
#include<ctime>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main_program
{

    int i,y=150,x=150,j=81,k=100;
    int x1=150,y1=770,n,m;char r;
   int w;int a;
initCanvas("Chess",1600,1000);
repeat(5)
{
for(i=1;i<11;i++)
{
   Rectangle ri(x,y,70,70);
Text ti(x,y,k);
   if(i%2==0)
   {
       ri.setColor(COLOR("yellow"));
       ri.setFill(1);
       ri.imprint();
   }
   else
   {
       ri.setColor(COLOR("green"));
       ri.setFill(1);
       ri.imprint();
   }

ti.imprint();
k--;
  x=x+70;
}
x=150;
y=y+140;
k=k-10;
}
int z=220;
repeat(5)
{
for(i=1;i<11;i++)
{
   Rectangle ri(x,z,70,70);
   Text ti(x,z,j);
   if(i%2==0)
   {
       ri.setColor(COLOR("green"));
       ri.setFill(1);
       ri.imprint();

   }
   else
   {
       ri.setColor(COLOR("yellow"));
       ri.setFill(1);
       ri.imprint();
   }
   ti.imprint();
j++;

  x=x+70;
}
x=150;
z=z+140;
j=j-30;
}

Line l1(273,150,133,290),l2(307,150,167,290),l3(233,190,267,190),l4(183,240,217,240);
Line l5(273,770,203,560),l6(307,770,237,560),l7(240,671,274,671),l8(220,611,254,611),l9(260,731,294,731);
Line l10(623,360,483,560),l11(657,360,517,560),l12(595,400,629,400),l13(525,500,559,500),l14(560,450,594,450);

Turtle t1;
t1.penUp();
t1.moveTo(350,500);
t1.penDown();
repeat(14)
{
    t1.forward(10);
    t1.right(60);
    t1.forward(10);
    t1.left(60);
}
t1.penUp();
t1.moveTo(350,500);
t1.right(180);
Turtle t2;
t2.penUp();
t2.moveTo(640,770);
t2.penDown();
repeat(40)
{
    t2.forward(20);
    t2.left(150);
    t2.forward(20);
    t2.right(150);
}
t2.forward(10);
t2.moveTo(770,360);

Turtle t3;
t3.penUp();
t3.moveTo(500,290);
t3.penDown();
repeat(12)
{
    t3.forward(10);
    t3.left(45);
    t3.forward(10);
    t3.right(45);
}
t3.penUp();
t3.moveTo(690,210);
int q=1;
Circle c1(x1,y1,10);
c1.setColor(COLOR("red"));
c1.setFill(1);

Text e1(1000,500,"DICE");
Rectangle d1(1000,500,80,80),d2(1100,500,80,80);
d1.imprint();
d2.imprint();
while(true)
{
while(true)
{
w=getClick();
n=w/65536;
m=w%65536;
if(n>920 && n<1080 && m>420 && m<580)
{
a = (rand()+getpid())%6+1;
Text e2(1100,500,a);
e2.imprint();

repeat(a)
{

    x1+=70;
    if(x1<=770 && x1>700)
{
    x1=770;
y1=y1-70;
break;
}
c1.moveTo(x1,y1);
wait(0.2);
}
if(x1==770)break;
}
if(x1==770)break;
}
c1.moveTo(x1,y1);
while(true)
{

w=getClick();
n=w/65536;
m=w%65536;
if(n>920 && n<1080 && m>420 && m<580)
{
a = (rand()+getpid())%6+1;
Text e2(1100,500,a);
e2.imprint();


repeat(a)
{
   x1-=70 ;
   if(x1<220 && x1>=150)
   {
       y1=y1-70;
       x1=150;
       break;
   }
c1.moveTo(x1,y1);
wait(0.2);

}
if(x1==150)break;
}
q++;
if(x1==150)break;
}
if(x1>=150 && y1>=150 && x1<220 && y1<220)
{
    cout<<q;
    Text e2(1100,500,"WON");
x1=150;y1=770;
wait(0.5);
c1.moveTo(x1,y1);
break;
}
if(x1==150 && y1==770)
{
cout<<endl<<"if u want to play again type y";
cin>>r;
if(r=='y')continue;
}
}
wait(50000);
}




