#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

#define MAP_ADJ_X 0
#define MAP_ADJ_Y 8

void gotoxy(int x, int y)
{ //모니터상의 x,y 좌표로 이동시키는 함수 
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y - 4);
	printf("         iBB            22222  00000  4   4  88888          iBM         		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y - 3);
	printf("        PgBs                2  0   0  4   4  8   8           BBQi       		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y - 2);
	printf("       Bv g             22222  0   0  44444  88888           iq Bi      		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y - 1);
	printf("      Bb Z              2      0   0      4  8   8           Q  Bi     		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y);
	printf("     QR  B              22222  00000      4  88888           qv iB     		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +1);
	printf("    dBi  B                 ■■■■■■■■■■              gr  BDi   		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +2);
	printf("   D  B  Pv              ■                    ■          B  SZ gi  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +3);
	printf("   B  Q   B              ■                    ■          Xu  uv vU  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +4);
	printf("   Bi BJ  iB             ■                    ■         vB   Bi Bi  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +5);
	printf("  iBi iB   vB            ■                    ■        UB   RB  BR  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +6);
	printf(" kr Zk  BB    Ps         ■                    ■     iZi   KBi  B  B 		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +7);
	printf(" UB  Zr  BBU  irRv       ■                    ■   iDIi  iBBi  dv iB 		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +8);
	printf("SdR  iBv  PBq Bv vPY     ■                    ■iKI  BiiBQv  Bd  vBj		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 9);
	printf("B iB  rBX  BQ iBr  iUKv  ■                    ■r  BK iBr rBP  sQ Pp		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 10);
	printf("sv vB  iBQ jUi  Lj    i    ■■■■■■■■■■rSv    iI  iiQ vBI  Ss		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y +11);
	printf(" iu kQL  EBvQBv  iQUi    YPi              uXi    vDK   DBugBv iZM  Q 		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 12);
	printf("  M  iQS  g   Sv  LXEBII   dv            Mr  vuQQqki iXv  jU rBu  Ei 		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 13);
	printf("   BJ  vMivDi  iXuiibR      Qi          Mi     vBiivqv   sD IP  igb  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 14);
	printf("   LiBi iSPBBk   JkkBQi     Ki          R      sBKkUi  iBBEKL  dbii  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 15);
	printf("   ri sBi iBiiirvLrKR     iVv            VU     vBrvvrri Mu  MQ  U   		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 16);
	printf("    gQ  KQuBri   irvgii   Bi              Bi  iiXXrr   iiQddgr iB    		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 17);
	printf("     qKi  iUBBBDLvsJPBv    Pkr          YPv    BBJjvvIBBBDr   vMi    		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 18);
	printf("       LRi  vBBLi  iVBJir    vb       iDi    viQMv   iqBZi  Pqi      		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 19);
	printf("            VB    irjqBB  i   Qi      Ri     qBQuLii   iB            		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 20);
	printf("            iBvsgi   YXQBBr    Pi    bi    BBBDui  iUbrPZ            		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 21);
	printf("               Ur   s  UBBqIi   ur iji   uUBBdi rv   E               		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 22);
	printf("               iMPRV  ri XBPPviiiUvIi irjZdBi I  iBKDS               		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 23);
	printf("                  vIUvB  Q u             u iJ uQrUK                  		\n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 24);
	printf("                    iiivYvii              YiIrviii                   \n");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 26);
	printf("			 ▶ ←,→,↑,↓ : move");
	gotoxy(MAP_ADJ_X - 2, MAP_ADJ_Y + 28);
	printf("\n			 ▶ ESC : Quit\n");


	return 0;
}