#include <stdio.h>
int g1,g2,g3,g4;          
void fun1 (int x, int ); 

void fun2 ()             
{
    int g1=100;          
    if (g1==100)
    {
       int g2=240;        // local g2 hides global g2
       printf("fun2_1  %d %d %d %d\n", g1,g2,g3,g4); //local g1,g2, global g3,g4 
    }
    printf("fun2_2  %d %d %d %d\n", g1,g2,g3,g4);    // local g1, global g2,g3,g4
}

	
void main()
{
	int g3;
	g1=100;
        fun1(110,g4);
        g3=375;        // local g3
	fun2();
}
void fun1 (int p1, int g1)
{
   g3=350;       // global g3
   g4=400;       // global g4
   printf("fun1: %d %d  %d %d %d\n", p1,g1,g2,g3,g4); //local p1, g1. global g2,g3,g4
   g1 = 175;     // parameter g1 changed - local
}

