#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>


void pestatpolya(int**,int);//���������� ������� ������ ����
void left(int**,int);//���������� ������� ����������� ����� �����
void right(int**,int);//���������� ������� ����������� ����� ������
void up(int**,int);//���������� ������� ����������� ����� �����
void down(int**,int);//���������� ������� ����������� ����� ����

int random_2_4();//���������� ������� ���������� �����(2,4)

void randommasiv(int*,int*,int,int**,int*);//���������� ������� ���������� ��������� ����� 

void func_menu(int);//���������� ������� �������� ����
void func_menu2(int);//���������� ������� ���� � ������� �������

int main(void){

	int **c;     //������� ������
	
	int b=0;	 //������ �������� �������
	int i,j;
	char x;		 //�������� �������� � ����������
	int end=1;		//
	int end_end=1;	//���������� ������
	int meny=1;			//����
	int r_4_2;				//���������� � ������ 2 ��� 4
	int everlast=1;		//����������� �����

	setlocale(LC_ALL,"RU");

func_menu(meny);

int meny_end=1;
while (meny_end){								//����� �������� ����

	while(1){											
		if (_kbhit()){
			x=_getch();	
		if((x=='s')||(x=='S')||(x=='w')||(x=='W')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x==13))
			break;	
		}	
	}
	system("cls");

	if((x=='s')||(x=='S')||(x=='�')||(x=='�')){
		if (meny==1)
			meny=2;
			else if (meny==2)
				meny=3;
		func_menu(meny);	
	}

	if((x=='w')||(x=='W')||(x=='�')||(x=='�')){
		if (meny==3)
			meny=2;
			else if (meny==2)
				meny=1;
		func_menu(meny);
	}

	if(x==13)
		meny_end=0;		
}												//����� �������� ����

	if(meny==1)
		b=4;				

	if(meny==2){								//����� ���� � �������
		func_menu2(meny);
			meny_end=1;
					while (meny_end){

							while(1){											
								if (_kbhit()){
									x=_getch();	
								if((x=='s')||(x=='S')||(x=='w')||(x=='W')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x==13))
									break;	
								}	
							}
							system("cls");

							if((x=='s')||(x=='S')||(x=='�')||(x=='�')){
								if (meny==2)
									meny=3;
									else if (meny==3)
										meny=4;
										else if (meny==4)
											meny=5;
											else if (meny==5)
												meny=6;
				  								else if (meny==6)
													meny=7;
													else if (meny==7)
														meny=8;
								func_menu2(meny);	
							}

							if((x=='w')||(x=='W')||(x=='�')||(x=='�')){
								if (meny==8)
									meny=7;
									else if (meny==7)
										meny=6;
										else if (meny==6)
											meny=5;
											else if (meny==5)
												meny=4;
												else if (meny==4)
													meny=3;
													else if (meny==3)
														meny=2;
								func_menu2(meny);
							}

							if(x==13)
								meny_end=0;								
						}
	
			if (meny==2)
				b=4;
				else if (meny==3)
					b=5;
					else if (meny==4)
						b=6;
						else if (meny==5)
							b=7;
				 			else if (meny==6)
								b=8;
						  		else if (meny==7)
									b=9;
									else if (meny==8)
										b=10;
	}											//����� ���� � �������
	else if(meny==3)
		everlast=0;
		
	if(everlast==1){							//���� ��� ������������ ������
			c=(int**)calloc(b,sizeof(int*));
				for(i=0;i<b;i++)
					c[i]=(int*)calloc(b,sizeof(int));
			for(i=0;i<b;i++)
				for(j=0;j<b;j++)
					c[i][j]=0;

		r_4_2=random_2_4();
			randommasiv(&i,&j,b,c,&end_end);
				c[i][j]=r_4_2;				
		pestatpolya(c,b);
						
						while(end){							//������� ���� ����

							while(1){											
								if (_kbhit()){
									x=_getch();	
								if((x=='a')||(x=='A')||(x=='s')||(x=='S')||(x=='d')||(x=='D')||(x=='w')||(x=='W')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�'))
									break;	
								}	
							}
							system("cls");

							if((x=='a')||(x=='A')||(x=='�')||(x=='�')){
								left(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&end_end);
											if(end_end==1)
												c[i][j]=r_4_2;
								
										pestatpolya(c,b);									
							}

							if((x=='d')||(x=='D')||(x=='�')||(x=='�')){
								right(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&end_end);
											if(end_end==1)				
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);										
							}

							if((x=='s')||(x=='S')||(x=='�')||(x=='�')){
								down(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&end_end);
											if(end_end==1)
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);										
							}

							if((x=='w')||(x=='W')||(x=='�')||(x=='�')){
								up(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&end_end);
											if(end_end==1)
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);									
							}

								for(i=0;i<b;i++)	
									for(j=0;j<b;j++)
										if(c[i][j]==2048)
											end=0;
								if(end_end==0)
									end=0;
						}
	}
		else{										//����������� �����
					b=2;
			int endermen=1;
			int **zran;
							zran=(int**)calloc(b,sizeof(int*));
								for(i=0;i<b;i++)
									zran[i]=(int*)calloc(b,sizeof(int));
					c=(int**)calloc(b,sizeof(int*));
						for(i=0;i<b;i++)
							c[i]=(int*)calloc(b,sizeof(int));
				for(i=0;i<b;i++)
					for(j=0;j<b;j++)
						c[i][j]=0;
	
								r_4_2=random_2_4();
									randommasiv(&i,&j,b,c,&endermen);
										if(endermen==1)
											c[i][j]=r_4_2;							
								pestatpolya(c,b);
											
				while(1){							//���� ������������ ������

							while(1){											
								if (_kbhit()){
									x=_getch();	
								if((x=='a')||(x=='A')||(x=='s')||(x=='S')||(x=='d')||(x=='D')||(x=='w')||(x=='W')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�')||(x=='�'))
									break;	
								}	
							}
							system("cls");

							if((x=='a')||(x=='A')||(x=='�')||(x=='�')){
								left(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&endermen);
											if(endermen==1)
												c[i][j]=r_4_2;
								
										pestatpolya(c,b);								
							}

							if((x=='d')||(x=='D')||(x=='�')||(x=='�')){
								right(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&endermen);
											if(endermen==1)				
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);										
							}

							if((x=='s')||(x=='S')||(x=='�')||(x=='�')){
								down(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&endermen);
											if(endermen==1)
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);										
							}

							if((x=='w')||(x=='W')||(x=='�')||(x=='�')){
								up(c,b);
									r_4_2=random_2_4();
										randommasiv(&i,&j,b,c,&endermen);
											if(endermen==1)
												c[i][j]=r_4_2;
										
										pestatpolya(c,b);									
							}

							if(endermen==0){							//�������� � ���������� �������������� �������						
									free(zran);
										zran=(int**)calloc(b,sizeof(int*));
											for(i=0;i<b;i++)
												zran[i]=(int*)calloc(b,sizeof(int));
										for(i=0;i<b;i++)
											for(j=0;j<b;j++)
												zran[i][j]=c[i][j];							
									if(b<6)//������ ��� ��
										free(c);
									c=(int**)realloc(c,(b+2)*sizeof(int*));
										for(i=0;i<b+2;i++)
											c[i]=(int*)realloc(c[i],(b+2)*sizeof(int));
		
								for(i=0;i<b+2;i++)
									for(j=0;j<b+2;j++)
										c[i][j]=0;												
		
												for(i=1;i<b+1;i++)
													for(j=1;j<b+1;j++)
														c[i][j]=zran[i-1][j-1];	
																									
								b=b+2;
								system("cls");
								pestatpolya(c,b);									
							}
				}	
		}

setlocale(LC_ALL,"C");

		if(end_end==1){							//������ ��� �������� 
			for(i=0;i<50;i++){
				if ((i%4)==0)
					system("color b3");
					else if ((i%3)==0)
						system("color e6");
						else if((i%2)==0)
							system("color 6e");
							else
								system("color 3b");
				system("cls");

				printf("%c   %c   %c  %c  %c     %c\n",219,219,219,219,219,219);			
				printf(" %c %c %c %c      %c%c    %c\n",219,219,219,219,219,219,219);	
				printf(" %c %c %c %c   %c  %c %c   %c\n",219,219,219,219,219,219,219,219);
				printf(" %c %c %c %c   %c  %c  %c  %c\n",219,219,219,219,219,219,219,219);
				printf(" %c %c %c %c   %c  %c   %c %c\n",219,219,219,219,219,219,219,219);
				printf(" %c %c %c %c   %c  %c    %c%c\n",219,219,219,219,219,219,219,219);	
				printf("  %c   %c    %c  %c     %c\n\n\n\n\n",219,219,219,219,219);
			}
		}
		if(end_end==0){							//������ ��� ���������
			for(i=0;i<50;i++){
				if((i%2)==0)
					system("color c4");
						else
							system("color 4c");
				system("cls");

				printf("\n %c       %c%c%c%c    %c%c%c%c%c  %c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);			
				printf(" %c      %c    %c  %c       %c\n",219,219,219,219,219);	
				printf(" %c      %c    %c  %c       %c\n",219,219,219,219,219);
				printf(" %c      %c    %c   %c%c%c%c   %c%c%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219);
				printf(" %c      %c    %c       %c  %c\n",219,219,219,219,219);
				printf(" %c      %c    %c       %c  %c\n",219,219,219,219,219);	
				printf(" %c%c%c%c%c%c  %c%c%c%c   %c%c%c%c%c   %c%c%c%c%c%c\n\n\n\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);	
				
			}

		}	
		getchar();
	return 0;
}

void pestatpolya(int** mas,int razm){
int i;
int zxc=0;
int s;
setlocale(LC_ALL,"C");

	printf("\n  %c",201);
	for(i=0;i<razm-1;i++)
			printf("%c%c%c%c%c%c",205,205,205,205,205,209);		// ������ �������
	printf("%c%c%c%c%c%c",205,205,205,205,205,187);
	printf("\n");

	for(s=0;s<razm;s++){

		printf("  %c",186);
			for(i=0;i<razm-1;i++)
				printf("     %c",179);			//������ ������ ������
		printf("     %c",186);
		printf("\n");

		printf("  %c",186);
			for(i=0;i<razm;i++){
					if(i==razm-1){
						if(mas[zxc][i]==0)
							printf("     %c",186);
							else if(mas[zxc][i]<9)
								printf("  %d  %c",mas[zxc][i],186);
								else if(mas[zxc][i]<65)
									printf("  %d %c",mas[zxc][i],186);
									else if(mas[zxc][i]<513)
										printf(" %d %c",mas[zxc][i],186);		//����� ����� �� ������� � ����� ������ ������
										else if(mas[zxc][i]<8193)
											printf(" %d%c",mas[zxc][i],186);
											else 
												printf("%d%c",mas[zxc][i],186);
					}
					else{
						if(mas[zxc][i]==0)
							printf("     %c",179);
							else if(mas[zxc][i]<9)
								printf("  %d  %c",mas[zxc][i],179);
								else if(mas[zxc][i]<65)
									printf("  %d %c",mas[zxc][i],179);
									else if(mas[zxc][i]<513)
										printf(" %d %c",mas[zxc][i],179);		//����� ����� �� ������� �� ���� ��������� �������
										else if(mas[zxc][i]<8193)
											printf(" %d%c",mas[zxc][i],179);
											else
												printf("%d%c",mas[zxc][i],179);
						
					}
			}
		printf("\n");
		zxc++;

			printf("  %c",186);
				for(i=0;i<razm-1;i++)
					printf("     %c",179);			//������ ������ ������
			printf("     %c",186);
				printf("\n");

					if(s==razm-1){
					printf("  %c",200);
					for(i=0;i<razm-1;i++)
							printf("%c%c%c%c%c%c",205,205,205,205,205,207);		//����� �������� ������ ������
					printf("%c%c%c%c%c%c",205,205,205,205,205,188);
					printf("\n");
					}
						else{
							printf("  %c",199);
								for(i=0;i<razm-1;i++)
									printf("%c%c%c%c%c%c",196,196,196,196,196,197);		//����� �� �������� ������ ������
							printf("%c%c%c%c%c%c",196,196,196,196,196,182);
							printf("\n");
						}
	}
	setlocale(LC_ALL,"RU");
}

void left(int** mas,int razm){
	int proverka;
	int i,j;
	for(proverka=0;proverka<razm-1;proverka++){
		for(i=0;i<razm;i++)
			for(j=1;j<razm;j++){
				if(mas[i][j-1]==mas[i][j]){
					mas[i][j-1]=2*mas[i][j];				//����������� ����� 
					mas[i][j]=0;
				}
					else if(mas[i][j-1]==0){
						mas[i][j-1]=mas[i][j];
						mas[i][j]=0;
					}
			}
	}
}

void right(int** mas,int razm){
	int proverka;
	int i,j;
	for(proverka=0;proverka<razm-1;proverka++){
		for(i=0;i<razm;i++)
			for(j=razm-2;j>-1;j--){
				if(mas[i][j+1]==mas[i][j]){
					mas[i][j+1]=2*mas[i][j];				//����������� ������			
					mas[i][j]=0;
				}
					else if(mas[i][j+1]==0){
						mas[i][j+1]=mas[i][j];
						mas[i][j]=0;
					}
			}
	}
}

void up(int** mas,int razm){
	int proverka;
	int i,j;
	for(proverka=0;proverka<razm-1;proverka++){
		for(i=1;i<razm;i++)
			for(j=0;j<razm;j++){
				if(mas[i-1][j]==mas[i][j]){
					mas[i-1][j]=2*mas[i][j];				//����������� �����			
					mas[i][j]=0;
				}
					else if(mas[i-1][j]==0){
						mas[i-1][j]=mas[i][j];
						mas[i][j]=0;
					}
			}
	}
}

void down(int** mas,int razm){
	int proverka;
	int i,j;
	for(proverka=0;proverka<razm-1;proverka++){
		for(i=razm-2;i>-1;i--)
			for(j=0;j<razm;j++){
				if(mas[i+1][j]==mas[i][j]){
					mas[i+1][j]=2*mas[i][j];				//����������� ����		
					mas[i][j]=0;
				}
					else if(mas[i+1][j]==0){
						mas[i+1][j]=mas[i][j];
						mas[i][j]=0;
					}
			}
	}
}

int random_2_4(void){
	int r;
	srand(time(NULL));
	r=rand()%10+1;											//��������� ����� 2 ��� 4
	if(r>7)
		return 4;
	else 
		return 2;
}

void randommasiv(int *i1,int *j1,int razm,int** mas,int* end){
	int **z;
	int *z1;
	int i,j,shet=0;
	z=(int**)calloc(razm,sizeof(int*));
	for(i=0;i<razm;i++)
		z[i]=(int*)calloc(razm,sizeof(int));
	for(i=0;i<razm;i++)
		for(j=0;j<razm;j++)
			z[i][j]=i*((razm-1)+1)+(j+1);

	for(i=0;i<razm;i++)
		for(j=0;j<razm;j++)
			if(mas[i][j]!=0)
				z[i][j]=0;

	for(i=0;i<razm;i++)
		for(j=0;j<razm;j++)
			if(z[i][j]!=0)
				shet++;

		if (shet>0){										//�������� �� ������������
			z1=(int*)calloc(shet,sizeof(int));
			int ii=0;

				for(i=0;i<razm;i++)
					for(j=0;j<razm;j++)
						if(z[i][j]!=0){
							z1[ii]=z[i][j];
							ii++;
						}
			int dfg;

				srand(time(NULL));
				ii=rand()%shet;

			dfg=z1[ii];

			for(i=0;i<razm;i++)
				for(j=0;j<razm;j++)
					if(z[i][j]==dfg){
						*i1=i;
						*j1=j;
					}
			*end=1;			
		}
		else
			*end=0;		
}

void func_menu(int men){
	setlocale(LC_ALL,"C");
	
	printf("\n     %c%c%c    %c%c%c%c   %c    %c   %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219);			
	printf("    %c   %c  %c    %c  %c    %c  %c    %c\n",219,219,219,219,219,219,219,219);	
	printf("   %c   %c   %c    %c  %c    %c  %c    %c\n",219,219,219,219,219,219,219,219);
	printf("      %c    %c    %c  %c%c%c%c%c%c   %c%c%c%c \n",219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("     %c     %c    %c       %c  %c    %c\n",219,219,219,219,219,219);
	printf("    %c      %c    %c       %c  %c    %c\n",219,219,219,219,219,219);	
	printf("   %c%c%c%c%c%c   %c%c%c%c        %c   %c%c%c%c\n\n\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);	
	
	setlocale(LC_ALL,"RU");

	if (men==1)
		printf("            ������� ����\n\n");  
	else 
		printf("            ������� ����\n\n");
	if (men==2)
		printf("           ������� ������\n\n"); 
	else																//������� ����
		printf("           ������� ������\n\n");
	if (men==3)
		printf("          ����������� �����\n\n\n"); 
	else
		printf("          ����������� �����\n\n\n"); 
	printf(" ����������:          by Moonshiner\n");                    
	printf(" WASD, Enter                1.0\n"); 	
}

void func_menu2(int men){
	setlocale(LC_ALL,"C");
	
	printf("\n     %c%c%c    %c%c%c%c   %c    %c   %c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219,219,219);			
	printf("    %c   %c  %c    %c  %c    %c  %c    %c\n",219,219,219,219,219,219,219,219);	
	printf("   %c   %c   %c    %c  %c    %c  %c    %c\n",219,219,219,219,219,219,219,219);
	printf("      %c    %c    %c  %c%c%c%c%c%c   %c%c%c%c \n",219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("     %c     %c    %c       %c  %c    %c\n",219,219,219,219,219,219);
	printf("    %c      %c    %c       %c  %c    %c\n",219,219,219,219,219,219);	
	printf("   %c%c%c%c%c%c   %c%c%c%c        %c   %c%c%c%c\n\n\n\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);	
	
	setlocale(LC_ALL,"RU");

	if (men==2)
		printf("                -4x4-\n\n");  
	else 
		printf("                 4x4\n\n");
	if (men==3)
		printf("                -5x5-\n\n"); 
	else
		printf("                 5x5\n\n");
	if (men==4)
		printf("                -6x6-\n\n"); 
	else
		printf("                 6x6\n\n"); 
	if (men==5)
		printf("                -7x7-\n\n"); 
	else																//���� � �������
		printf("                 7x7\n\n"); 											
	if (men==6)
		printf("                -8x8-\n\n"); 
	else
		printf("                 8x8\n\n"); 
	if (men==7)
		printf("                -9x9-\n\n"); 
	else
		printf("                 9x9\n\n"); 
	if (men==8)
		printf("               -10x10-\n\n"); 
	else
		printf("                10x10\n\n"); 
	printf(" ����������:          by Moonshiner\n");                    
	printf(" WASD, Enter                1.0\n"); 	
}



