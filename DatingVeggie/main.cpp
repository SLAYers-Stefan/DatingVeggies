#include <iostream>
#include <graphics.h>
#include <winbgim.h>
#include <cstdlib>
#include <fstream>
using namespace std;
ifstream in ("scene.txt");

struct scene {int nr_dial;
              char background[20];
              struct {char autor[20];
                      char dialog[20];
                      char pers[20];} dialog[100];} scene[10];

int scena_curenta,nr_scene;
char s[10];

void start_scena()
{char pers_vechi[20];
    system("CLS");
    readimagefile(scene[scena_curenta].background,0,0,700,700);
    setfillstyle(SOLID_FILL,BLACK);
    bar(50,500,650,650);
    for (int i=1;i<=scene[scena_curenta].nr_dial;i++)
         {readimagefile(scene[scena_curenta].dialog[i].dialog,50,500,650,650);
          readimagefile(scene[scena_curenta].dialog[i].pers,0,0,700,500);
          if (scene[scena_curenta].dialog[i].autor[0]=='C')
              readimagefile("nume_cartof.bmp",50,460,150,500);
          if (scene[scena_curenta].dialog[i].autor[0]=='E')
              readimagefile(scene[scena_curenta].dialog[i-1].pers,0,0,700,500);
         getch();}
}

void start_joc()
{int ym;
    scena_curenta=1;
    for (int i=1;i<=nr_scene;i++)
        {start_scena();
        scena_curenta++;}

}

void cit_scene()
{int i,j,k;
    in>>nr_scene;
    for (i=1;i<=nr_scene;i++)
         {in>>scene[i].background;
         in>>scene[i].nr_dial;
         for (j=1;j<=scene[i].nr_dial;j++)
              {in>>scene[i].dialog[j].autor;
              in>>scene[i].dialog[j].dialog;
              in>>scene[i].dialog[j].pers;}}
}

int main()
{int xm,ym;
    cit_scene();
    initwindow(700,700);
    readimagefile("startscreen_fb.jpg",0,0,700,700);
    readimagefile("butt_jn.jpg",200,387,500,587);
check_start:
    if (ismouseclick(WM_LBUTTONDOWN)!=0)
        {xm=mousex();
         ym=mousey();
        if (xm>=200 && xm<=500 && ym>=387 && ym<=587)
            start_joc();}
        else
            goto check_start;

    readimagefile("restaurant.jpeg",0,0,700,700);
    readimagefile("Cartof_mandru3.jpeg",0,0,700,500);
    readimagefile("nume_cartof.bmp",50,460,150,500);
    readimagefile("Int3.jpeg",0,500,700,700);
    readimagefile("IR1.jpeg",0,500,700,700);
    bool ok=0;
    while(ok==0)
           if (ismouseclick(WM_LBUTTONDOWN)!=0)
                {ym=mousey();
                clearmouseclick(WM_LBUTTONDOWN);
                if (ym>500)
                    ok=1;}
    readimagefile("IR2.jpeg",0,500,700,700);
    ok=0;
    while(ok==0)
           if (ismouseclick(WM_LBUTTONDOWN)!=0)
                {ym=mousey();
                clearmouseclick(WM_LBUTTONDOWN);
                if (ym>500)
                    ok=1;}
    readimagefile("IR3.jpeg",0,500,700,700);
    ok=0;
    while(ok==0)
           if (ismouseclick(WM_LBUTTONDOWN)!=0)
                {ym=mousey();
                clearmouseclick(WM_LBUTTONDOWN);
                if (ym>500)
                    ok=1;}
    readimagefile("dial_final.jpeg",0,500,700,700);
    delay(5000);
    readimagefile("final.jpeg",0,0,700,700);
    delay(15000);
    getch();

    return 0;
}
