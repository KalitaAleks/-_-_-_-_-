// ������.cpp:; ������� ���� �������.

#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <Atlconv.h>
#include <string>
#include <wincon.h>
using namespace System;

char g[8][8];
char s[65]; 	
int lodya1=0, Quin=0, Kon=0, OF=0,Pesh=0;
HANDLE po=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coorda; 
	
	HANDLE n = CreateSemaphore (NULL,1,1,L"Wt");
int x0;

void pole(){
HANDLE pole=GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(pole,BACKGROUND_BLUE|FOREGROUND_RED );
COORD cord;
cord.X=x0; 
cord.Y=0;
SetConsoleCursorPosition(pole,cord);
printf(" ABCDEFGH ");
int x = 49;
for(int i=1;i<9;i++){
cord.X=x0;
cord.Y=i;
SetConsoleCursorPosition(pole,cord);
char c = x; 
printf("%c",c);
x=x+1;
}
x=49;
for(int i=1;i<9;i++){


cord.X=x0+9; 
cord.Y=i;
SetConsoleCursorPosition(pole,cord);
 
printf("%c",x);
x=x+1;

}

cord.X=x0; 
cord.Y=9;
SetConsoleCursorPosition(pole,cord);
printf(" ABCDEFGH ");
for(int j =1;j<9;j++){
for(int i=1;i<9;)
{
	if(j%2!=0){

cord.X=i+x0; 
cord.Y=j;
SetConsoleCursorPosition(pole,cord);

if(g[j-1][i-1]=='1'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("L");}
if(g[j-1][i-1]=='2'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("K");}
if(g[j-1][i-1]=='3'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("H");}
if(g[j-1][i-1]=='4'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",5);}
if(g[j-1][i-1]=='5'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",6); }
if(g[j-1][i-1]=='6'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("P");}
if(g[j-1][i-1]=='0'){
	SetConsoleTextAttribute(pole,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);
	printf(" ");}
if(g[j-1][i-1]=='7'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("P");}
if(g[j-1][i-1]=='8'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("L");}
if(g[j-1][i-1]=='9'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("K");}
if(g[j-1][i-1]=='a'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("H");}
if(g[j-1][i-1]=='u'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",6);}
if(g[j-1][i-1]=='k'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",5);}

if(g[j-1][i]=='1'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("L");}
if(g[j-1][i]=='2'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("K");}
if(g[j-1][i]=='3'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("H");}
if(g[j-1][i]=='4'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",5);}
if(g[j-1][i]=='5'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",6); }
if(g[j-1][i]=='6'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("P");}
if(g[j-1][i]=='0'){
	SetConsoleTextAttribute(pole,BACKGROUND_GREEN);
	printf(" ");}
if(g[j-1][i]=='7'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("P");}
if(g[j-1][i]=='8'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("L");}
if(g[j-1][i]=='9'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("K");}
if(g[j-1][i]=='a'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("H");}
if(g[j-1][i]=='u'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",6);}
if(g[j-1][i]=='k'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",5);}
}
	if(j%2==0){
cord.X=i+x0; 
cord.Y=j;
SetConsoleCursorPosition(pole,cord);

if(g[j-1][i-1]=='1'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("L");}
if(g[j-1][i-1]=='2'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("K");}
if(g[j-1][i-1]=='3'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("H");}
if(g[j-1][i-1]=='4'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",5);}
if(g[j-1][i-1]=='5'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",6); }
if(g[j-1][i-1]=='6'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("P");}
if(g[j-1][i-1]=='0'){
	SetConsoleTextAttribute(pole,BACKGROUND_GREEN);
	printf(" ");}
if(g[j-1][i-1]=='7'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("P");}
if(g[j-1][i-1]=='8'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("L");}
if(g[j-1][i-1]=='9'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("K");}
if(g[j-1][i-1]=='a'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("H");}
if(g[j-1][i-1]=='u'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",6);}
if(g[j-1][i-1]=='k'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_GREEN);

	printf("%c",5);}

if(g[j-1][i]=='1'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("L");}
if(g[j-1][i]=='2'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("K");}
if(g[j-1][i]=='3'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("H");}
if(g[j-1][i]=='4'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",5);}
if(g[j-1][i]=='5'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",6); }
if(g[j-1][i]=='6'){
	SetConsoleTextAttribute(pole,FOREGROUND_BLUE|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("P");}
if(g[j-1][i]=='0'){
	SetConsoleTextAttribute(pole,BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);
	printf(" ");}
if(g[j-1][i]=='7'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("P");}
if(g[j-1][i]=='8'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("L");}
if(g[j-1][i]=='9'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("K");}
if(g[j-1][i]=='a'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("H");}
if(g[j-1][i]=='u'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",6);}
if(g[j-1][i]=='k'){
	SetConsoleTextAttribute(pole,FOREGROUND_GREEN|FOREGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_RED);

	printf("%c",5);}

	}

i=i+2;}
}

}
void pozicii(){



int y=0;
for (int i=0; i<8;i++){
for(int j =0; j<8;j++){	
	g[i][j]=s[y];
		y=y+1;

	}
	
}}
void wlodya(){

for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	
	 if(g[i][j]=='5')

	 {for(int q=0; q<8;q++)
	 {
		if(g[i][q]=='8'){
			int kon=0;int f=0, z=0, t=0, vlod=0;
int peshka=0, oficer=0,quin=0;
			// ����� �� �����������
			f=1;
			
			if(q<j&&q!=(j-1)){
				for(int o=q+1;o<j;o++){
					if(g[i][o]!='0'){
						z=1;
					}
					if(g[i-1][o]=='6'||g[i-1][q-1]=='6'){
						peshka=1;

					}
				}
			if(j!=(0||1)&&((g[i+1][j]=='2'&&j-2>q)||(g[i+1][j+1]=='2'&&j+1-2>q)|| (g[i+1][j-1]=='2'&&j-1-2>q)||(g[i-1][j]=='2'&&j-2>q)||(g[i-1][j+1]=='2'&&j+1-2>q)|| (g[i-1][j-1]=='2'&&j-1-2>q))&&z==0){
			kon=1;}

			//vrag lodiya
			for(int p=0; p<q; p++){
			
				
				if(g[i][p]=='1'){vlod=1;}
				if(g[i][p]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y<j;y++){
			if(p!=i&&vlod==1){
			
				if(g[p][y]=='1'){vlod=2;}
				if(g[p][y]!='0'&&vlod==2&&g[p][y]!='8'){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[p][y]=='1'){vlod=1;}
				if(g[p][y]!='0'&&vlod==1){vlod=0;}
				
			}}
			}
//oficer
				int p=0, n=0,m=0,o=0,t1=0;
			for(int t2=q; t2<j;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}
			
			
			//quin
			n=0,m=0,o=0, t1=0;
						for( p=0; p<q; p++){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='4'){n=1;}
				if(g[i][p]!='0'&&n==1){n=0;}
				
			
				}

			for(p=0; p<8;p++)
			{for(int y=q; y<j;y++){
			if(p!=i&&quin==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='4'){m=1;}
				if(g[p][y]!='0'&&m==1){m=0;}
				
			}
			if(p!=i&&quin==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='4'){o=1;}
				if(g[p][y]!='0'&&o==1){o=0;}
			}}}
				
			if(n==1||m==1||o==1){quin=1;}
			
			n=0,m=0,o=0, t1=0,p=0;
			for(int t2=q; t2<j;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			
			}

			if(n==1||m==1||o==1||t1==1){quin=1;}
	}
			if(q>j&&j!=(q-1)){
				for(int o=j+1;o<q;o++){
				if(g[i][o]!='0'){
						z=1;
					}
				if(g[i-1][o]=='6'||g[i-1][q+1]=='6'){
						peshka=1;

					}
				}
			if(j!=(6||7)&&((g[i+1][j]=='2'&&j+2<q)||(g[i+1][j+1]=='2'&&j+1+2<q)|| (g[i+1][j-1]=='2'&&j-1+2<q)||(g[i-1][j]=='2'&&j+2<q)||(g[i-1][j+1]=='2'&&j+1+2<q)|| (g[i-1][j-1]=='2'&&j-1+2<q))&&z==0){
			kon=1;}
			//v lodiya
				for(int p=7; p>q; p--){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='1'){vlod=1;}
				if(g[i][p]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=j; y<q;y++){
			if(p!=i&&vlod==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='1'){vlod=2;}
				if(g[p][y]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='1'){vlod=1;}
				if(g[p][y]!='0'&&vlod==1){vlod=0;}
			}}}

			//oficer
				int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=j; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}
			
			
			//quin
			n=0,m=0,o=0, t1=0;
						for( p=7; p>q; p--){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='4'){n=1;}
				if(g[i][p]!='0'&&n==1){n=0;}
				
			
				}

			for(p=0; p<8;p++)
			{for(int y=j; y<q;y++){
			if(p!=i&&quin==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='4'){m=1;}
				if(g[p][y]!='0'&&m==1){m=0;}
				
			}
			if(p!=i&&quin==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='4'){o=1;}
				if(g[p][y]!='0'&&o==1){o=0;}
			}}}
				
			if(n==1||m==1||o==1){quin=1;}
			
			n=0,m=0,o=0, t1=0,p=0;
			for(int t2=j; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			
			}

			if(n==1||m==1||o==1||t1==1){quin=1;}


			}
			if(q<j&&q==j-1){z=3;}
			if(q>j&&j==q-1){
				z=2;
			}
			 
			if(g[i+1][j]=='0')
			{t=t+1;}
			if(g[i-1][j]=='0')
			{t=t+1;}
			if(g[i+1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i+1][j-1]=='0' && z!=3 )	{t=t+1;}
			if(g[i-1][j-1]=='0' && z!=3 ){t=t+1;}
			if(g[i+2][j]== '7'&&g[i+1][j+1]=='0'&& z!=2){t=t-1;}
			if(g[i+2][j]== '7'&&g[i+1][j-1]=='0'&& z!=3){t=t-1;}
if(g[i+2][j+1]== '7'||g[i+2][j-1]== '7'&&g[i+1][j]=='0'){t=t-1;}
if(f=1&&(quin&&oficer&&peshka&&vlod&&kon)==0&&t==0&&z==0){printf("White lode is attacking the black king, horizontally. Mat black"); lodya1=1;}
if(f=1&&(quin||oficer||peshka||vlod||kon)==1||t!=0&&z==0){printf("White lode is attacking the black king, horizontally. Shah black");lodya1=1;}
if(f=1&&t==0&&z==(2||3)){printf("White lode is attacking the black king, horizontally. Mat black");lodya1=1;}
if(f=1&&t!=0&&z==(2||3)){printf("White lode is attacking the black king, horizontally. Shah black");lodya1=1;}



			



}

if(g[q][j]=='8'){
			int kon=0;int f=0, z=0, t=0, vlod=0;
int peshka=0, oficer=0,quin=0;
			// ����� �� ��������� 
			f=1;
			
			if(q<i&&q!=(i-1)){
				for(int o=q+1;o<i;o++){
					if(g[o][j]!='0'){
						z=1;
					}}
					if(g[q-1][j+1]=='6'||g[q-1][j-1]=='6'){
						peshka=1;

					}
			
				for(int o =i-2; o<q+2;o++){
						if(i!=1&&q!=7){
							if(g[o][j-1]||g[o][j+1]=='2'){kon=1;}}
						
							if(i<=o<=q+1){if(g[o][j-2]||g[o][j+2]=='2'){kon=1;}}
					}
					
					//lod
					for(int p=0; p<q; p++){
			
				
				if(g[p][j]=='1'){vlod=1;}
				if(g[p][j]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			if(p!=i&&vlod==1){
			
				if(g[y][p]=='1'){vlod=2;}
				if(g[y][p]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[y][p]=='1'){vlod=1;}
				if(g[y][p]!='0'&&vlod==1){vlod=0;}
				
			}}
			}
			//oficer
			int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=q; t2<i;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}
			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}

			//quin
			
			for( p=0; p<q; p++){
			
				
				if(g[p][j]=='4'){quin=1;}
				if(g[p][j]!='0'&&quin==1){quin=0;}
				
			
				}

			for( p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			
			if(p!=i){
			
				if(g[y][p]=='4'){quin=1;}
				if(g[y][p]!='0'&&quin==1){quin=0;}
				
			}}
			}
		
		p=0, n=0,m=0,o=0, t1=0;
			for(int t2=q; t2<i;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){quin=1;}
			}
			
			







				
			}
			if(q>i&&i!=(q-1)){
				for(int o=i+1;o<q;o++){
				if(g[o][j]!='0'){
						z=1;
					}}
				if(g[q+-1][j-1]=='6'||g[q-1][j+1]=='6'){
						peshka=1;

					}
				

				

				for(int o =q-2; o<i+2;o++){
						if(q!=1&&i!=7){
							if(g[o][j-1]=='2'){kon=1;}

						
						}
						if(q!=0){
							if((q-1)<=o<=i){if(g[o][j+2]=='2'){kon=1;}
							if(g[o][j-2]=='2'){kon=1;}
							}}}


				//lod
			
for(int p=7; p>q; p--){
			
				
				if(g[p][j]=='1'){vlod=1;}
				if(g[p][j]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y>i;y--){
			if(p!=i&&vlod==1){
			
				if(g[y][p]=='1'){vlod=2;}
				if(g[y][p]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[y][p]=='1'){vlod=1;}
				if(g[y][p]!='0'&&vlod==1){vlod=0;}
				
			}}
			}

			//oficer
			int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=i; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
				if((i-p)<-1&&(i+p)>8){break;}
			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}

			//quin
			
			for(p=7; p>q; p--){
			
				
				if(g[p][j]=='4'){quin=1;}
				if(g[p][j]!='0'&&quin==1){quin=0;}
				
			
				}

			for( p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			
			if(p!=i){
			
				if(g[y][p]=='4'){quin=1;}
				if(g[y][p]!='0'&&quin==1){quin=0;}
				
			}}
			}
			 p=0, n=0,m=0,o=0, t1=0;
			for(int t2=i; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){quin=1;}
			}

			




	 }

	 if(q<i&&q==i-1){z=3;}
			if(q>i&&i==q-1){
				z=2;
			}
				 
			if(g[i][j+1]=='0')
			{t=t+1;}
			if(g[i][j-1]=='0')
			{t=t+1;}
			if(g[i+1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j+1]=='0' && z!=3 )	{t=t+1;}
			if(g[i+1][j-1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j-1]=='0' && z!=3 ){t=t+1;}
			if(g[i+2][j+2]== '7'&&g[i+1][j+1]=='0'&& z!=2){t=t-1;}
			if(g[i+2][j-2]== '7'&&g[i+1][j-1]=='0'&& z!=2){t=t-1;}
			if(g[i][j+2]=='7'&&g[i-1][j+1]=='0'){t=t-1;}
			if(g[i][j-2]=='7'&&g[i-1][j-1]=='0'){t=t-1;}
			if(g[q][j+2]=='7'&&g[i][j+1]=='0'){t=t-1;}
			if(g[q][j-2]=='7'&&g[i][j-1]=='0'){t=t-1;}
if(f=1&&(quin&&oficer&&peshka&&vlod&&kon)==0&&t==0&&z==0){printf("White lode is attacking the black king, vertically. Mat black");lodya1=1;}
if(f=1&&(quin||oficer||peshka||vlod||kon)==1||t!=0&&z==0){printf("White lode is attacking the black king, vertically. Shah black");lodya1=1;}
if(f=1&&t==0&&z==(2||3)){printf("White lode is attacking the black king, vertically. Mat black");lodya1=1;}
if(f=1&&t!=0&&z==(2||3)){printf("White lode is attacking the black king, vertically. Shah black");lodya1=1;}

}


}


}}}}
void blodya(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	
	 if(g[i][j]=='u')

	 {for(int q=0; q<8;q++)
	 {
		if(g[i][q]=='1'){
			int kon=0;int f=0, z=0, t=0, vlod=0;
int peshka=0, oficer=0,quin=0;
			// ����� �� �����������
			f=1;
			
			if(q<j&&q!=(j-1)){
				for(int o=q+1;o<j;o++){
					if(g[i][o]!='0'){
						z=1;
					}
					if(g[i-1][o]=='7'||g[i-1][q-1]=='7'){
						peshka=1;

					}
				}
			if(j!=(0||1)&&((g[i+1][j]=='9'&&j-2>q)||(g[i+1][j+1]=='9'&&j+1-2>q)|| (g[i+1][j-1]=='9'&&j-1-2>q)||(g[i-1][j]=='9'&&j-2>q)||(g[i-1][j+1]=='9'&&j+1-2>q)|| (g[i-1][j-1]=='9'&&j-1-2>q))&&z==0){
			kon=1;}

			//vrag lodiya
			for(int p=0; p<q; p++){
			
				
				if(g[i][p]=='8'){vlod=1;}
				if(g[i][p]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y<j;y++){
			if(p!=i&&vlod==1){
			
				if(g[p][y]=='8'){vlod=2;}
				if(g[p][y]!='0'&&vlod==2&&g[p][y]!='1'){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[p][y]=='8'){vlod=1;}
				if(g[p][y]!='0'&&vlod==1){vlod=0;}
				
			}}
			}
//oficer
				int p=0, n=0,m=0,o=0,t1=0;
			for(int t2=q; t2<j;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}
			
			
			//quin
			n=0,m=0,o=0, t1=0;
						for( p=0; p<q; p++){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='k'){n=1;}
				if(g[i][p]!='0'&&n==1){n=0;}
				
			
				}

			for(p=0; p<8;p++)
			{for(int y=q; y<j;y++){
			if(p!=i&&quin==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='k'){m=1;}
				if(g[p][y]!='0'&&m==1){m=0;}
				
			}
			if(p!=i&&quin==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='k'){o=1;}
				if(g[p][y]!='0'&&o==1){o=0;}
			}}}
				
			if(n==1||m==1||o==1){quin=1;}
			
			n=0,m=0,o=0, t1=0,p=0;
			for(int t2=q; t2<j;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			
			}

			if(n==1||m==1||o==1||t1==1){quin=1;}

			
			
			
			
			}
			if(q>j&&j!=(q-1)){
				for(int o=j+1;o<q;o++){
				if(g[i][o]!='0'){
						z=1;
					}
				if(g[i-1][o]=='7'||g[i-1][q+1]=='7'){
						peshka=1;

					}
				}
			if(j!=(6||7)&&((g[i+1][j]=='9'&&j+2<q)||(g[i+1][j+1]=='9'&&j+1+2<q)|| (g[i+1][j-1]=='9'&&j-1+2<q)||(g[i-1][j]=='9'&&j+2<q)||(g[i-1][j+1]=='9'&&j+1+2<q)|| (g[i-1][j-1]=='9'&&j-1+2<q))&&z==0){
			kon=1;}
			//v lodiya
				for(int p=7; p>q; p--){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='8'){vlod=1;}
				if(g[i][p]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=j; y<q;y++){
			if(p!=i&&vlod==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='8'){vlod=2;}
				if(g[p][y]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='8'){vlod=1;}
				if(g[p][y]!='0'&&vlod==1){vlod=0;}
			}}}

			//oficer
				int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=j; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}
			
			
			//quin
			n=0,m=0,o=0, t1=0;
						for( p=7; p>q; p--){
			
				if(g[i][p]=='0'){}
				if(g[i][p]=='k'){n=1;}
				if(g[i][p]!='0'&&n==1){n=0;}
				
			
				}

			for(p=0; p<8;p++)
			{for(int y=j; y<q;y++){
			if(p!=i&&quin==1){
				if(g[p][y]=='0'){}
				if(g[p][y]=='k'){m=1;}
				if(g[p][y]!='0'&&m==1){m=0;}
				
			}
			if(p!=i&&quin==0){
				if(g[p][y]=='0'){}
				if(g[p][y]=='k'){o=1;}
				if(g[p][y]!='0'&&o==1){o=0;}
			}}}
				
			if(n==1||m==1||o==1){quin=1;}
			
			n=0,m=0,o=0, t1=0,p=0;
			for(int t2=j; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
				if((i-p)<-1&&(i+p)>8){break;}

			}
			}

			if(n==1||m==1||o==1||t1==1){quin=1;}


			}
			if(q<j&&q==j-1){z=3;}
			if(q>j&&j==q-1){
				z=2;
			}
			 
			if(g[i+1][j]=='0')
			{t=t+1;}
			if(g[i-1][j]=='0')
			{t=t+1;}
			if(g[i+1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i+1][j-1]=='0' && z!=3 )	{t=t+1;}
			if(g[i-1][j-1]=='0' && z!=3 ){t=t+1;}
			if(g[i+2][j]== '6'&&g[i+1][j+1]=='0'&& z!=2){t=t-1;}
			if(g[i+2][j]== '6'&&g[i+1][j-1]=='0'&& z!=3){t=t-1;}
if(g[i+2][j+1]== '6'||g[i+2][j-1]== '6'&&g[i+1][j]=='0'){t=t-1;}
if(f=1&&(quin&&oficer&&peshka&&vlod&&kon)==0&&t==0&&z==0){printf("Black lode is attacking the white king, horizontally. Mat white");lodya1=1;}
if(f=1&&(quin||oficer||peshka||vlod||kon)==1||t!=0&&z==0){printf("Black lode is attacking the white king, horizontally. Shah white");lodya1=1;}
if(f=1&&t==0&&z==(2||3)){printf("Black lode is attacking the white king, horizontally. Mat white");lodya1=1;}
if(f=1&&t!=0&&z==(2||3)){printf("Black lode is attacking the white king, horizontally. Shah white");lodya1=1;}



			



}

if(g[q][j]=='1'){
			int kon=0;int f=0, z=0, t=0, vlod=0;
int peshka=0, oficer=0,quin=0;
			// ����� �� ��������� 
			f=1;
			
			if(q<i&&q!=(i-1)){
				for(int o=q+1;o<i;o++){
					if(g[o][j]!='0'){
						z=1;
					}}
					if(g[q+1][j+1]=='7'||g[q+1][j-1]=='7'){
						peshka=1;

					}
			
				for(int o =i-2; o<q+2;o++){
						if(i!=1&&q!=7){
							if(g[o][j-1]||g[o][j+1]=='9'){kon=1;}}
						
							if(i<=o<=q+1){if(g[o][j-2]||g[o][j+2]=='9'){kon=1;}}
					}
					
					//lod
					for(int p=0; p<q; p++){
			
				
				if(g[p][j]=='8'){vlod=1;}
				if(g[p][j]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			if(p!=i&&vlod==1){
			
				if(g[y][p]=='8'){vlod=2;}
				if(g[y][p]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[y][p]=='8'){vlod=1;}
				if(g[y][p]!='0'&&vlod==1){vlod=0;}
				
			}}
			}
			//oficer
			int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=q; t2<i;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}

			//quin
			
			for( p=0; p<q; p++){
			
				
				if(g[p][j]=='k'){quin=1;}
				if(g[p][j]!='0'&&quin==1){quin=0;}
				
			
				}

			for( p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			
			if(p!=i){
			
				if(g[y][p]=='k'){quin=1;}
				if(g[y][p]!='0'&&quin==1){quin=0;}
				
			}}
			}
		
		p=0, n=0,m=0,o=0, t1=0;
			for(int t2=q; t2<i;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
				if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){quin=1;}
			}
			
			







				
			}
			if(q<i&&q!=(i-1)){
				for(int o=i+1;o<q;o++){
				if(g[q][j]!='0'){
						z=1;
					}}
				if(g[q+1][j-1]=='7'||g[q+1][j+1]=='7'){
						peshka=1;

					}
				

				

				for(int o =q-2; o<i+2;o++){
						if(q!=1&&i!=7){
							if(g[o][j-1]=='9'){kon=1;}

						
						}
						if(q!=0){
							if((q-1)<=o<=i){if(g[o][j+2]=='9'){kon=1;}
							if(g[o][j-2]=='9'){kon=1;}
							}}}


				//lod
			
for(int p=7; p>q; p--){
			
				
				if(g[p][j]=='8'){vlod=1;}
				if(g[p][j]!='0'&&vlod==1){vlod=0;}
				
			
				}

			for(int p=0; p<8;p++)
			{for(int y=q; y>i;y--){
			if(p!=i&&vlod==1){
			
				if(g[y][p]=='8'){vlod=2;}
				if(g[y][p]!='0'&&vlod==2){vlod=1;}
				
			}
			if(p!=i&&vlod==0){
			
				if(g[y][p]=='8'){vlod=1;}
				if(g[y][p]!='0'&&vlod==1){vlod=0;}
				
			}}
			}

			//oficer
			int p=0, n=0,m=0,o=0, t1=0;
			for(int t2=i; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){oficer=1;}
			}

			//quin
			
			for(p=7; p>q; p--){
			
				
				if(g[p][j]=='k'){quin=1;}
				if(g[p][j]!='0'&&quin==1){quin=0;}
				
			
				}

			for( p=0; p<8;p++)
			{for(int y=q; y<i;y++){
			
			if(p!=i){
			
				if(g[y][p]=='k'){quin=1;}
				if(g[y][p]!='0'&&quin==1){quin=0;}
				
			}}
			}
			 p=0, n=0,m=0,o=0, t1=0;
			for(int t2=i; t2<q;t2++){
			for(;;){p=p+1;
			if((i-p)>-1&&(t2-p)>-1&&(i-p)<8&&(t2-p)<8){
				if(g[i-p][t2-p]=='3'){n=1;}
				if(g[i-p][t2-p]!='0'&&n==1){n=0;}

				
			}
			if((i-p)>-1&&(t2+p)<8&&(i-p)<8&&(t2+p)>-1){
			if(g[i-p][t2+p]=='3'){m=1;}
				if(g[i-p][t2+p]!='0'&&m==1){m=0;}

			}
			if((i+p)<8&&(t2+p)<8&&(i+p)>-1&&(t2+p)>-1){
			if(g[i+p][t2+p]=='3'){o=1;}
				if(g[i+p][t2+p]!='0'&&o==1){o=0;}

			}

				if((i+p)<8&&(t2-p)>-1  &&(i+p)>-1&&  (t2-p)<8 ){
			if(g[i+p][t2-p]=='3'){t1=1;}
				if(g[i+p][t2-p]!='0'&&t1==1){t1=0;}

			}
					if((i-p)<-1&&(i+p)>8){break;}

			}
			if(n==1||m==1||o==1||t1==1){quin=1;}
			}

			




	 }

	 if(q<i&&q==i-1){z=3;}
			if(q>i&&i==q-1){
				z=2;
			}
				 
			if(g[i][j+1]=='0')
			{t=t+1;}
			if(g[i][j-1]=='0')
			{t=t+1;}
			if(g[i+1][j+1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j+1]=='0' && z!=3 )	{t=t+1;}
			if(g[i+1][j-1]=='0' && z!=2 )	{t=t+1;}
			if(g[i-1][j-1]=='0' && z!=3 ){t=t+1;}
			if(g[i+2][j+2]== '6'&&g[i+1][j+1]=='0'&& z!=2){t=t-1;}
			if(g[i+2][j-2]== '6'&&g[i+1][j-1]=='0'&& z!=2){t=t-1;}
			if(g[i][j+2]=='6'&&g[i-1][j+1]=='0'){t=t-1;}
			if(g[i][j-2]=='6'&&g[i-1][j-1]=='0'){t=t-1;}
			if(g[q][j+2]=='6'&&g[i][j+1]=='0'){t=t-1;}
			if(g[q][j-2]=='6'&&g[i][j-1]=='0'){t=t-1;}
if(f=1&&quin==0&&oficer==0&&peshka==0&&vlod==0&&kon==0&&t==0&&z==0){printf("Black lode is attacking the white king, vertically. Mat white");lodya1=1;}
if(f=1&&(quin==1||oficer==1||peshka==1||vlod==1||kon==1||t!=0)&&z==0){printf("Black lode is attacking the white king, vertically. Shah white");lodya1=1;}
if(f=1&&t==0&&z==(2||3)){printf("Black lode is attacking the white king, vertically. Mat white");lodya1=1;}
if(f=1&&t!=0&&z==(2||3)){printf("Blacklode is attacking the white king, vertically. Shah white");lodya1=1;}

}


}


}}}}
void wkon(){int wkon1=0, cv=0;
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	
	 if(g[i][j]=='5'){
		 if(i>1&&i<6&&j!=(0||7)){
			 if(g[i-2][j-1]=='9'	||g[i-2][j+1]=='9'	||g[i+2][j-1]=='9'	||g[i+2][j+1]=='9'	){wkon1=1;}	 }
		 		 if(j>1&&j<6&&i!=(0||7)){
			 if(g[i-1][j-2]=='9'	||g[i-1][j+2]=='9'	||g[i+1][j-2]=='9'	||g[i+1][j+2]=='9'	){wkon1=1;}	 }
				 		 if(i==0&&j!=(0||7)){
			 if(g[i+2][j-1]=='9'	||g[i+2][j+1]=='9'	){wkon1=1;}	 }
						 	 if(i==7&&j!=(0||7)){
			 if(g[i-2][j-1]=='9'	||g[i-2][j+1]=='9'	){wkon1=1;}	 }
			 	 if(j==7&&i!=(0||7)){
			 if(g[i-1][j-2]=='9'	||g[i+1][j-2]=='9'	){wkon1=1;}	 }

				 	 if(j==0&&i!=(0||7)){
			 if(g[i-1][j+2]=='9'	||g[i+1][j+2]=='9'	){wkon1=1;}	 }

					 	 if(j==7&&i!=(0||7||6||1)){
			 if(g[i-2][j-1]=='9'	||g[i+2][j-1]=='9'	){wkon1=1;}	 }

				 if(j==0&&i!=(0||7||6||1)){
			 if(g[i-2][j+1]=='9'	||g[i+2][j+1]=='9'	){wkon1=1;}	 }

				  if(i==7&&j!=(0||7||6||1)){
			 if(g[i-1][j-2]=='9'	||g[i-1][j+2]=='9'	){wkon1=1;}	 }
				   if(i==0&&j!=(0||7||6||1)){
			 if(g[i+1][j-2]=='9'	||g[i+1][j+2]=='9'	){wkon1=1;}	 }
				    if(j==7&&i==(0||1)){
			 if(g[i+2][j-1]=='9'	){wkon1=1;}	 }
					  if(j==0&&i==(0||1)){
			 if(g[i+2][j+1]=='9'	){wkon1=1;}	 }
					    if(i==7&&j==(0||1)){
			 if(g[i-1][j+2]=='9'	){wkon1=1;}	 }
						  if(i==0&&j==(0||1)){
			 if(g[i+1][j+2]=='9'	){wkon1=1;}	 }

						      if(j==7&&i==(6||7)){
			 if(g[i-2][j-1]=='9'	){wkon1=1;}	 }
					  if(j==0&&i==(6||7)){
			 if(g[i-2][j+1]=='9'	){wkon1=1;}	 }
					    if(i==7&&j==(6||7)){
			 if(g[i-1][j-2]=='9'	){wkon1=1;}	 }
						  if(i==0&&j==(6||7)){
			 if(g[i+1][j-2]=='9'	){wkon1=1;}	 }
						  if(i!=(0||7)&&j!=(0||7)){
							  if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j-1]=='0'){cv=cv+1;}
							   if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
							   if(g[i+1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
}

						  if(i==0&&j!=(0||7)){
						   if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j-1]=='0'){cv=cv+1;}
						  if(g[i+1][j]=='0'){cv=cv+1;}
						  }
						    if(i==7&&j!=(0||7)){
						   if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
						  if(g[i-1][j]=='0'){cv=cv+1;}
						  }
							  if(j==0&&i!=(0||7)){
						   if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j]=='0'){cv=cv+1;}
						  if(g[i][j+1]=='0'){cv=cv+1;}
						  }
						     if(j==7&&i!=(0||7)){
						   if(g[i+1][j-1]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j]=='0'){cv=cv+1;}
						  if(g[i][j-1]=='0'){cv=cv+1;}
						  }

							 if(i==0&&j==0){
							 if(g[i+1][j]=='0'){cv=cv+1;}
							 if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i][j+1]=='0'){cv=cv+1;}
							 }
							 if(i==7&&j==0){
							 if(g[i-1][j]=='0'){cv=cv+1;}
							 if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i][j+1]=='0'){cv=cv+1;}
							 }
							 if(j==7&&i==0){
							 if(g[i+1][j]=='0'){cv=cv+1;}
							 if(g[i+1][j-1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							 }
							  if(j==7&&i==7){
							 if(g[i-1][j]=='0'){cv=cv+1;}
							 if(g[i-1][j-1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							 }


	 }


	
	}}

	if(wkon1==1&&cv==0){printf("The white horse is attacking the black king. Mat black");Kon=1;}
		if(wkon1==1&&cv!=0){printf("The white horse is attacking the black king. Shah black");Kon=1;}

}
void bkon(){	int wkon1=0, cv=0;
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){

	 if(g[i][j]=='u'){
		 if(i>1&&i<6&&j!=(0||7)){
			 if(g[i-2][j-1]=='2'||g[i-2][j+1]=='2'||g[i+2][j-1]=='2'||g[i+2][j+1]=='2'	){wkon1=1;}	 }
		 		 if(j>1&&j<6&&i!=(0||7)){
			 if(g[i-1][j-2]=='2'||g[i-1][j+2]=='2'||g[i+1][j-2]=='2'||g[i+1][j+2]=='2'	){wkon1=1;}	 }
				 		 if(i==0&&j!=(0||7)){
			 if(g[i+2][j-1]=='2'||g[i+2][j+1]=='2'	){wkon1=1;}	 }
						 	 if(i==7&&j!=(0||7)){
			 if(g[i-2][j-1]=='2'||g[i-2][j+1]=='2'	){wkon1=1;}	 }
			 	 if(j==7&&i!=(0||7)){
			 if(g[i-1][j-2]=='2'||g[i+1][j-2]=='2'	){wkon1=1;}	 }

				 	 if(j==0&&i!=(0||7)){
			 if(g[i-1][j+2]=='2'||g[i+1][j+2]=='2'	){wkon1=1;}	 }

					 	 if(j==7&&i!=(0||7||6||1)){
			 if(g[i-2][j-1]=='2'||g[i+2][j-1]=='2'	){wkon1=1;}	 }

				 if(j==0&&i!=(0||7||6||1)){
			 if(g[i-2][j+1]=='2'||g[i+2][j+1]=='2'	){wkon1=1;}	 }

				  if(i==7&&j!=(0||7||6||1)){
			 if(g[i-1][j-2]=='2'||g[i-1][j+2]=='2'	){wkon1=1;}	 }
				   if(i==0&&j!=(0||7||6||1)){
			 if(g[i+1][j-2]=='2'||g[i+1][j+2]=='2'	){wkon1=1;}	 }
				    if(j==7&&i==(0||1)){
			 if(g[i+2][j-1]=='2'	){wkon1=1;}	 }
					  if(j==0&&i==(0||1)){
			 if(g[i+2][j+1]=='2'	){wkon1=1;}	 }
					    if(i==7&&j==(0||1)){
			 if(g[i-1][j+2]=='2'	){wkon1=1;}	 }
						  if(i==0&&j==(0||1)){
			 if(g[i+1][j+2]=='2'	){wkon1=1;}	 }

						      if(j==7&&i==(6||7)){
			 if(g[i-2][j-1]=='2'	){wkon1=1;}	 }
					  if(j==0&&i==(6||7)){
			 if(g[i-2][j+1]=='2'	){wkon1=1;}	 }
					    if(i==7&&j==(6||7)){
			 if(g[i-1][j-2]=='2'	){wkon1=1;}	 }
						  if(i==0&&j==(6||7)){
			 if(g[i+1][j-2]=='2'	){wkon1=1;}	 }


  if(i!=(0||7)&&j!=(0||7)){
							  if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j-1]=='0'){cv=cv+1;}
							   if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
							   if(g[i+1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
}

						  if(i==0&&j!=(0||7)){
						   if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j-1]=='0'){cv=cv+1;}
						  if(g[i+1][j]=='0'){cv=cv+1;}
						  }
						    if(i==7&&j!=(0||7)){
						   if(g[i][j+1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							  if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
						  if(g[i-1][j]=='0'){cv=cv+1;}
						  }
							  if(j==0&&i!=(0||7)){
						   if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i+1][j]=='0'){cv=cv+1;}
						  if(g[i][j+1]=='0'){cv=cv+1;}
						  }
						     if(j==7&&i!=(0||7)){
						   if(g[i+1][j-1]=='0'){cv=cv+1;}
							  if(g[i-1][j]=='0'){cv=cv+1;}
							  if(g[i-1][j-1]=='0'){cv=cv+1;}
							  if(g[i+1][j]=='0'){cv=cv+1;}
						  if(g[i][j-1]=='0'){cv=cv+1;}
						  }

							 if(i==0&&j==0){
							 if(g[i+1][j]=='0'){cv=cv+1;}
							 if(g[i+1][j+1]=='0'){cv=cv+1;}
							  if(g[i][j+1]=='0'){cv=cv+1;}
							 }
							 if(i==7&&j==0){
							 if(g[i-1][j]=='0'){cv=cv+1;}
							 if(g[i-1][j+1]=='0'){cv=cv+1;}
							  if(g[i][j+1]=='0'){cv=cv+1;}
							 }
							 if(j==7&&i==0){
							 if(g[i+1][j]=='0'){cv=cv+1;}
							 if(g[i+1][j-1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							 }
							  if(j==7&&i==7){
							 if(g[i-1][j]=='0'){cv=cv+1;}
							 if(g[i-1][j-1]=='0'){cv=cv+1;}
							  if(g[i][j-1]=='0'){cv=cv+1;}
							 }


	
	 }
	
	}}
	if(wkon1==1&&cv==0){printf("The black horse is attacking the white king. Mat white");Kon=1;}
		if(wkon1==1&&cv!=0){printf("The black horse is attacking the white king. Shah white");Kon=1;}
}
void Wpesh(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int pesh=0, cv=0;

		if(g[i][j]=='5'){
			if(i<7&&j>0&&j<7){
				if(g[i+1][j+1]=='7'||g[i+1][j-1]=='7'){
				pesh=1;
				}}

				if(i<7&& j==0){
					if(g[i+1][j+1]=='7'){pesh=1;}
				}
				if(i<7&& j==7){
					if(g[i+1][j-1]=='7'){pesh=1;}
				}

				if(g[i][j+1]=='0'){cv=cv+1;}
				if(g[i][j-1]=='0'){cv=cv+1;}
				if(g[i+1][j+1]=='0'){cv=cv+1;}
				if(g[i-1][j+1]=='0'){cv=cv+1;}
				if(g[i-1][j-1]=='0'){cv=cv+1;}
				if(g[i+1][j-1]=='0'){cv=cv+1;}
				if(g[i-1][j]=='0'){cv=cv+1;}
				if(g[i+1][j]=='0'){cv=cv+1;}

			}
		if(pesh==1){printf("white pawn is attacking the black king");Pesh=1;}
		}

	

}}
void bpesh(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int pesh=0, cv=0;

		if(g[i][j]=='u'){
			if(i>0&&j>0&&j<7){
				if(g[i-1][j+1]=='6'||g[i+1][j-1]=='6'){
				pesh=1;
				}}

				if(i>0&& j==0){
					if(g[i-1][j+1]=='6'){pesh=1;}
				}
				if(i>0&& j==7){
					if(g[i-1][j-1]=='6'){pesh=1;}
				}

				if(g[i][j+1]=='0'){cv=cv+1;}
				if(g[i][j-1]=='0'){cv=cv+1;}
				if(g[i+1][j+1]=='0'){cv=cv+1;}
				if(g[i-1][j+1]=='0'){cv=cv+1;}
				if(g[i-1][j-1]=='0'){cv=cv+1;}
				if(g[i+1][j-1]=='0'){cv=cv+1;}
				if(g[i-1][j]=='0'){cv=cv+1;}
				if(g[i+1][j]=='0'){cv=cv+1;}

			}
		if(pesh==1){printf("black pawn is attacking the white  king");Pesh=1;}
		}

}}
void wof(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int oficer=0, cv=0;

	if(g[i][j]=='5'){
	 
		
				int p=0, n=0,m=0,o=0,t1=0;
			
			for(int hjk=0;hjk<8;hjk++){p=p+1;
			 n=0,m=0,o=0,t1=0;
			if((i-p)>-1&&(j-p)>-1&&(i-p)<8&&(j-p)<8){
				if(g[i-p][j-p]=='a'){n=1;}
				

				
			}
			if((i-p)>-1&&(j+p)<8&&(i-p)<8&&(j+p)>-1){
			if(g[i-p][j+p]=='a'){m=1;}
			

			}
			if((i+p)<8&&(j+p)<8&&(i+p)>-1&&(j+p)>-1){
			if(g[i+p][j+p]=='a'){o=1;}
			

			}

				if((i+p)<8&&(j-p)>-1  &&(i+p)>-1&&  (j-p)<8 ){
			if(g[i+p][j-p]=='a'){t1=1;}
				

			}
				if(n==1||m==1||o==1||t1==1){oficer=1;}
					if((i-p)<0&&(i+p)>7){break;}

					
			}
			if(oficer==1){printf("white officer is attacking the black king");OF=1;}
	if(g[i][j+1]=='0'){cv=cv+1;}
	if(g[i][j-1]=='0'){cv=cv+1;}
	if(g[i+1][j]=='0'){cv=cv+1;}
	if(g[i-1][j]=='0'){cv=cv+1;}
			
	
			}

	}
	


	}}
void bof(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int oficer=0, cv=0;

	if(g[i][j]=='u'){
	 
		int cv=0;
				int p=0, n=0,m=0,o=0,t1=0;
		
			for(;;){p=p+1;
			n=0,m=0,o=0,t1=0;
			if((i-p)>-1&&(j-p)>-1&&(i-p)<8&&(j-p)<8){
				if(g[i-p][j-p]=='3'){n=1;}
			

				
			}
			if((i-p)>-1&&(j+p)<8&&(i-p)<8&&(j+p)>-1){
			if(g[i-p][j+p]=='3'){m=1;}
				

			}
			if((i+p)<8&&(j+p)<8&&(i+p)>-1&&(j+p)>-1){
			if(g[i+p][j+p]=='3'){o=1;}
			

			}

				if((i+p)<8&&(j-p)>-1  &&(i+p)>-1&&  (j-p)<8 ){
			if(g[i+p][j-p]=='3'){t1=1;}
			

			}if(n==1||m==1||o==1||t1==1){oficer=1;}
				if((i-p)<0&&(i+p)>7){break;}

			}
			
			}if(oficer==1){printf("black officer is attacking the white  king");OF=1;}

	if(g[i][j+1]=='0'){cv=cv+1;}
	if(g[i][j-1]=='0'){cv=cv+1;}
	if(g[i+1][j]=='0'){cv=cv+1;}
	if(g[i-1][j]=='0'){cv=cv+1;}
			
		
	}

	}}
void wquin(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int quin=0, hor=0, vert=0, dia=0,zg=0,zv=0;
	 if(g[i][j]=='5')
		 
	 {
		 for(int q=0; q<8;q++)
	 {if(g[i][q]=='k'){ quin=1; hor=1;
		
			if(q<j&&q!=(j-1)){
				for(int o=q+1;o<j;o++){
					if(g[i][o]!='0'){
						zg=1;
					}}}
					if(q>j&&j!=(q-1)){
				for(int o=j+1;o<q;o++){
				if(g[i][o]!='0'){
						zg=1;
				}}}}

		
		   if(g[q][j]=='k'){
		  quin=1; vert=1;
		 
		 if(q<i&&q!=(i-1)){
				for(int o=q+1;o<i;o++){
					if(g[o][j]!='0'){
						zv=1;
					}}}

		 if(q>i&&i!=(q-1)){
				for(int o=i+1;o<q;o++){
				if(g[o][j]!='0'){
						zv=1;
				}}}}
		    

	 
	 }

	 if(zg==1){quin=0;}
	  if(zv==1){quin=0;}
	 	int p=0, n=0,m=0,o=0,t1=0;
			
			for(int hjk=0;hjk<8;hjk++){p=p+1;
			 n=0,m=0,o=0,t1=0;
			if((i-p)>-1&&(j-p)>-1&&(i-p)<8&&(j-p)<8){
				if(g[i-p][j-p]=='k'){n=1;}
				

				
			}
			if((i-p)>-1&&(j+p)<8&&(i-p)<8&&(j+p)>-1){
			if(g[i-p][j+p]=='k'){m=1;}
			

			}
			if((i+p)<8&&(j+p)<8&&(i+p)>-1&&(j+p)>-1){
			if(g[i+p][j+p]=='k'){o=1;}
			

			}

				if((i+p)<8&&(j-p)>-1  &&(i+p)>-1&&  (j-p)<8 ){
			if(g[i+p][j-p]=='k'){t1=1;}
				

			}
				if(n==1||m==1||o==1||t1==1){quin=1; dia=1;}
					if((i-p)<0&&(i+p)>7){break;}

					
			}

			if(quin==1&&vert==1&&zv==0){printf("the white Queen attacks the black king vertical");Quin=1;}
			
			if(quin==1&&hor==1&&zg==0){printf("the white Queen attacks the black king horizontal");Quin=1;}
			
			if(quin==1&&dia==1){printf("the white Queen attacks the black king  diagonal");Quin=1;}



	 }}}}
void bquin(){
for(int i=0; i<8;i++){
	for(int j=0; j<8; j++){
	int quin=0, hor=0, vert=0, dia=0, zv=0, zg=0;
	 if(g[i][j]=='u')
		 
	 {for(int q=0; q<8;q++)
	 {if(g[i][q]=='4'){ quin=1; hor=1;
		
			if(q<j&&q!=(j-1)){
				for(int o=q+1;o<j;o++){
					if(g[i][o]!='0'){
						zg=1;
					}}}
					if(q>j&&j!=(q-1)){
				for(int o=j+1;o<q;o++){
				if(g[i][o]!='0'){
						zg=1;
				}}}}

		
		   if(g[q][j]=='4'){
		  quin=1; vert=1;
		 
		 if(q<i&&q!=(i-1)){
				for(int o=q+1;o<i;o++){
					if(g[o][j]!='0'){
						zv=1;
					}}}

		 if(q>i&&i!=(q-1)){
				for(int o=i+1;o<q;o++){
				if(g[o][j]!='0'){
						zv=1;
				}}}}
		    

	 
	 }

	 if(zg==1){quin=0;}
	  if(zv==1){quin=0;}
	 	int p=0, n=0,m=0,o=0,t1=0;
			
			for(int hjk=0;hjk<8;hjk++){p=p+1;
			 n=0,m=0,o=0,t1=0;
			if((i-p)>-1&&(j-p)>-1&&(i-p)<8&&(j-p)<8){
				if(g[i-p][j-p]=='4'){n=1;}
				

				
			}
			if((i-p)>-1&&(j+p)<8&&(i-p)<8&&(j+p)>-1){
			if(g[i-p][j+p]=='4'){m=1;}
			

			}
			if((i+p)<8&&(j+p)<8&&(i+p)>-1&&(j+p)>-1){
			if(g[i+p][j+p]=='4'){o=1;}
			

			}

				if((i+p)<8&&(j-p)>-1  &&(i+p)>-1&&  (j-p)<8 ){
			if(g[i+p][j-p]=='4'){t1=1;}
				

			}
				if(n==1||m==1||o==1||t1==1){quin=1; dia=1;}
					if((i-p)<0&&(i+p)>7){break;}

					
			}

			if(quin==1&&vert==1){printf("the black Queen attacks the  white  king vertical");Quin=1;}
			
			if(quin==1&&hor==1){printf("the black  Queen attacks the white king horizontal");Quin=1;}
			
			if(quin==1&&dia==1){printf("the black  Queen attacks the white king  diagonal");Quin=1;}



	 }}}}
void analis(){

	 lodya1=0, Quin=0, Kon=0, OF=0,Pesh=0;
	SetConsoleCursorPosition(po,coorda);
	wlodya();
	blodya();
	wkon();
	bkon();
	Wpesh();
	bpesh();
	wof();
	bof();
	wquin();
	bquin();
	if(lodya1==0&& Quin==0&& Kon==0&& OF==0&&Pesh==0){printf("Inaya");}
}
DWORD WINAPI THREATE(void* arg){
	WaitForSingleObject(n,INFINITE);
HANDLE hFile=CreateFile(L"D:\\�����\\��������\\������\\�������1.txt",GENERIC_READ, FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);                 
DWORD r;

ReadFile(hFile,s,64,&r,NULL);
x0=0;
CloseHandle (hFile);
coorda.X=0; 
coorda.Y=15;
pozicii();
pole();

analis();
long g;
ReleaseSemaphore(n,1,&g);
return 1;

}

DWORD WINAPI THREATE1(void* arg){
	WaitForSingleObject(n,INFINITE);
HANDLE hFile=CreateFile(L"D:\\�����\\��������\\������\\�������2.txt",GENERIC_READ, FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);                 
DWORD r;

ReadFile(hFile,s,64,&r,NULL);
x0=12;
CloseHandle (hFile);

pozicii();
coorda.X=0; 
coorda.Y=19;
pole();

analis();
long g;
ReleaseSemaphore(n,1,&g);
return 1;
}


DWORD WINAPI THREATE2(void* arg){
	WaitForSingleObject(n,INFINITE);
HANDLE hFile=CreateFile(L"D:\\�����\\��������\\������\\�������3.txt",GENERIC_READ, FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);                 
DWORD r;

ReadFile(hFile,s,64,&r,NULL);
x0=24;
CloseHandle (hFile);
coorda.X=0; 
coorda.Y=23;
pozicii();
pole();

analis();
long g;
ReleaseSemaphore(n,1,&g);
return 1;

}
DWORD WINAPI THREATE3(void* arg){
	WaitForSingleObject(n,INFINITE);
HANDLE hFile=CreateFile(L"D:\\�����\\��������\\������\\�������4.txt",GENERIC_READ, FILE_SHARE_READ,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);                 
DWORD r;

ReadFile(hFile,s,64,&r,NULL);
x0=36;
CloseHandle (hFile);
coorda.X=0; 
coorda.Y=26;
pozicii();
pole();

analis();
long g;
ReleaseSemaphore(n,1,&g);
return 1;

}

int main(array<System::String ^> ^args)
{
	DWORD k;
	HANDLE d=CreateThread(NULL,0,THREATE, NULL, 0,&k);
	
	DWORD aa;
	HANDLE h=CreateThread(NULL,0,THREATE1, NULL, 0,&aa);
	
	DWORD qq;
	HANDLE q=CreateThread(NULL,0,THREATE2, NULL, 0,&qq);

	DWORD om;
	HANDLE op=CreateThread(NULL,0,THREATE3, NULL, 0,&om);



_getch();
CloseHandle (d);
CloseHandle (h);
CloseHandle (n);
CloseHandle (q);
CloseHandle (op);
CloseHandle (po);
    return 0;
}
