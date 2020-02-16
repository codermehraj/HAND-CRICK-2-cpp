#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<iomanip>
#include<windows.h>
using namespace std;

#define rand() srand(0)

void animation();
void clrscr();
int toss();
int wicket();
int pbat(int w,int b);
int pbowl(int terget,int w,int ball);
int obat(int w,int b);
int obowl(int terget,int w,int b);
void theresult(int result);
void score1(int pr,int pbf,int pw,int wicket);
void score3(int pr,int pbf,int pw,int wicket);
int over(int pbf);
int overball(int pbf);
double crunrate(int r,int pbf);
double srate(int r,int pbf);
 int selectball();
void load();
void gotoxy(int x, int y);
void game();
void score2(int cr,int cbf,int cw,int w,int terget,int cbr);
void score4(int cr,int cbf,int cw,int w,int terget,int cbr);
double rrunrate(int r,int cbr){ return (double)((double)(r*6)/(double)cbr); }
double economy(int pbf,int pr);
void inst();
void cre();
void getmore();
void tuto();


int main()
{

    cout<<"\n\n\n\n\n\tWelcome to hand cricket 2\n\n";
    Sleep(400);
    cout<<"\n\n\tPlease MAXIMIZE your window for better view\n\n";
    Sleep(300);
    cout<<"\n\n\tpress ENTER after maximizing\n\n\n\n";
    getchar();
    clrscr();
    load();
    clrscr();
    animation();
    cout<<"press enter...";
    getchar();
    clrscr();
    load();
    while(1){
    clrscr();
    cout<<"\n\n\n....................................HAND CRICK 2.............................................................\n";
    cout<<"....................................................................................................\n\n";
    cout<<"\n\n_____________________________________________________________________________________\n";
    cout<<"                                       MAIN MENU\n\n";
    Sleep(300);
    cout<<"\t1 >>>  New game\n";
    Sleep(300);
    cout<<"\t2 >>>  Instruction\n";
    Sleep(300);
    cout<<"\t3 >>>  Logo\n";
    Sleep(300);
    cout<<"\t4 >>>  get more games\n";
    Sleep(300);
    cout<<"\t5 >>>  Credits\n";
    Sleep(300);
    cout<<"\t6 >>>  Exit\n";
    cout<<"\n_____________________________________________________________________________________\n";
    Sleep(300);
    cout<<"\nENTER YOUR CHOICE >>> ";
    int op; cin>>op;
    if(op!=1&&op!=2&&op!=3&&op!=4&&op!=5&&op!=6){
    while(op!=1&&op!=2&&op!=3&&op!=4&&op!=5&&op!=6){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 6 ::";
        cin>>op;
    }
   }
    clrscr(); load();
    if(op==1) game();
    else if(op==2) inst();
    else if(op==3) tuto();
    else if(op==4) getmore();
    else if(op==5) cre();
    else if(op==6) break;
    }
    clrscr();
    cout<<endl<<endl<<endl<<"Thanks a lot for playing my HAND CRICKET'16 game"<<endl;
   cout<<endl<<"All rights recived"<<endl<<endl<<"CJC'16"<<endl<<endl<<"Mehrajul Islam"<<endl;
    getchar();
    return 0;
}

void inst(){
    clrscr();
    cout<<"\n\n\n\tHAND CRICK 2\n\tINSTRUCTIONS!!!\n\n";
    Sleep(800);
    cout<<"1 >>> I hardly recomand you not to use any character\n      ex::(do not use any thing without integer)\n";
    Sleep(900);
    cout<<"\n\n2 >>> I also recomand you please do not use + - * / \n";
    Sleep(900);
    cout<<"\n\n3 >>> This a game which depends on your every input \n      so please do not press extra button without noticing..\n";
    Sleep(900);
    cout<<"\n\nThats all\n\n";
    Sleep(300);
    cout<<"press enter....";
    getchar();
}

void cre(){
    clrscr();
    cout<<"\n\n\n\tHAND CRICK 2\n\tCREDITS!!!\n\n";
    Sleep(900);
    cout<<"\tTHE MOST CONFUSING QUSTION (-_-)\n\tHOWEVER....\n\n";
    Sleep(300);
    cout<<"0 >>> Me  !!(o.O)!!\n";
    Sleep(300);
    cout<<"1 >>> ALLAH THE ALMIGHTY\n";
    Sleep(300);
    cout<<"2 >>> My Mother\n";
    Sleep(300);
    cout<<"3 >>> My father\n";
    Sleep(300);
    cout<<"4 >>> My brother\n";
    Sleep(300);
    cout<<"5 >>> Junaid al mahin\n";
    Sleep(300);
    cout<<"6 >>> Towfiqul Islam\n";
    Sleep(300);
    cout<<"7 >>> Asif Mujtaba SOWMIK\n";
    Sleep(300);
    cout<<"7 >>> Rasheed al shafee\n";
    Sleep(300);
    cout<<"8 >>> Biborno vai\n";
    Sleep(300);
    cout<<"9 >>> Arif vai\n";
    Sleep(300);
    cout<<"10 >>> Google\n";
    Sleep(300);
    cout<<"11 >>> Tamim sahriar subeen\n";
    Sleep(300);
    cout<<"12 >>> Chit chat coaders\n";
    Sleep(300);
    cout<<"13 >>> Coders planet\n";
    Sleep(300);
    cout<<"14 >>> fully CJC......\n";
    Sleep(300);
    cout<<"thats all.......\n";
    cout<<"press enter.....";
    getchar();
}


void getmore(){
    clrscr();
    cout<<"\n\nWill be published soon.........\n\nthanks...........\n\npress enter...(my kolla).......\n\n\n";
    getchar();
}

void tuto(){
    animation();
}

void game(){
    int terget=0,res=1;
    clrscr();
    cout<<"\n\n\n";
    int w=wicket();
    clrscr();
    cout<<"\n\n\n";
    int b=selectball();
    clrscr();
    int t=toss();//t=1>>bat;t==2>>ball
    clrscr();
    if(t==1){
        terget=pbat(w,b);
        res=pbowl(terget,w,b);//result=1>>win&result=2>>lost
    }
    else{
        terget=obat(w,b);
        res=obowl(terget,w,b);
    }
    theresult(res);
}

int pbowl(int terget,int w,int bowl){
    clrscr();
    cout<<"\n\nWELCOME TO BOWLING\n\n";
    cout<<"Press 1/2/3/4/5/6 as your ball........\n\n";
    cout<<"\n\nOpponent have "<<w<<" wickets    and \n              "<<bowl<<" balls   in hand\n\n\n";
    cout<<">>>>>>>>>>>>>>>>>>  GOOD LUCK  <<<<<<<<<<<<<<<<<<<<<\n\n";
    cout<<"press enter when you are ready.......\n\n\n\n\n";
    getchar();
    clrscr();
    int cr,ps,cs,cw,cbr,cbf;
    cr=cbf=0;
    cw=w;
    cbr=bowl;
    while(cw!=0&&cbr!=0&&cr<=terget){
        clrscr();
        if(cbf!=0) score2(cr,cbf,cw,w,terget,cbr);
        cbf++;
        cbr--;
        cout<<"   "<<cbf<<"th ball :: \n\nENTER YOUR BALL :: ";
        cin>>ps;
        if(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
    while(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 6 ::";
        cin>>ps;
    }
   }
   cout<<endl;
   cs=(rand()+w+bowl)%6;
   cs++;
   cout<<endl<<"opponent's shot :: "<<cs<<endl<<endl;
   if(ps==cs){
    cout<<".......(@@) WOW (@@).......\n";
    Sleep(1000);
    cout<<"You got a wicket\n"<<endl;
    cw--;
    cout<<endl<<"wicket remaining   :: "<<cw;
    cout<<endl<<"current run        :: "<<cr<<endl;
    cout<<"Ball remaining     :: "<<cbr<<endl<<endl;
    if((terget-cr)>=0)cout<<"Opponenet needs "<<terget-cr<<" runs in "<<cbr<<" balls";
   }
   else {
    cr+=cs;
    cout<<"(-_-)SORRY(-_-)\n";
    Sleep(1000);
    cout<<endl<<"Opponent scored "<<cs<<" runs in "<<cbf<<"th ball.\n"<<endl;
    cout<<"Wicket left     ::   "<<cw<<endl;
    cout<<"Ball left       ::   "<<cbr<<endl;
    cout<<"Current run     ::   "<<cr<<endl;
    if((terget-cr)>=0)cout<<"\nOpponenet needs "<<terget-cr<<" runs in "<<cbr<<" balls";
   }
   cout<<endl<<endl<<"press enter when you are ready......";
   getchar();
   getchar();
   }
   int r;
   if((terget-1)>cr) r=1;
   else if(terget<=cr) r=2;
   else if((terget-1)==cr) r=0;
return r;
}

void gotoxy(int x, int y){
COORD coord;

 coord.X = x;

 coord.Y = y;

 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void load(){
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("loading...");
    gotoxy(30,15);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",177);}
    cout<<"\n\n\npress enter";
    getchar();
}
void score1(int pr,int pbf,int pw,int wicket){
    int r,w,o,ob;
    double crr,sr;
    r=pr;
    w=wicket-pw;
    o=over(pbf);
    ob=overball(pbf);
    crr=crunrate(r,pbf);
    sr=srate(r,pbf);
        cout<<"~~~~~~~~~~~~~~~SCORE~~~~~~~~~~~~~~~\n";
        cout<<"~~~~~~~~~~~~~~~BORD~~~~~~~~~~~~~~~~\n";
    cout<<"\n Player ::\n\n";
    cout<<"          "<<r<<"/"<<w<<"("<<o<<"."<<ob<<" overs)\n\n";
    printf("  Run Rate    ::  %.2lf\n",crr);
    printf("  Strike Rate ::  %.2lf\n",sr);
    cout<<"  Ball Faced  ::  "<<pbf<<"\n";
    cout<<"  Wicket left ::  "<<pw<<"\n\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

double economy(int pbf,int pr){
    return (double)((double)(pr*6)/pbf);}

void score3(int pr,int pbf,int pw,int wicket){
     int r,w,o,ob;
    double crr,sr,eco;
    r=pr;
    w=wicket-pw;
    o=over(pbf);
    ob=overball(pbf);
    crr=crunrate(r,pbf);
    sr=srate(r,pbf);
    eco=economy(pbf,pr);
        cout<<"~~~~~~~~~~~~~~~SCORE~~~~~~~~~~~~~~~\n";
        cout<<"~~~~~~~~~~~~~~~BORD~~~~~~~~~~~~~~~~\n";
    cout<<"\n Opponent ::\n\n";
    cout<<"          "<<r<<"/"<<w<<"("<<o<<"."<<ob<<" overs)\n\n";
    printf("  Run Rate    ::  %.2lf\n",crr);
    printf("  Strike Rate ::  %.2lf\n",sr);
    cout<<"  Ball Faced  ::  "<<pbf<<"\n";
    cout<<"  Wicket left ::  "<<pw<<"\n";
    printf("  Economy     ::  %.2lf\n",eco);
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
void score2(int cr,int cbf,int cw,int wicket,int terget,int cbr){
     int r,w,o,ob;
    double crr,sr,rrr;
    r=cr;
    w=wicket-cw;
    o=over(cbf);
    ob=overball(cbf);
    crr=crunrate(r,cbf);
    sr=srate(r,cbf);
    rrr=rrunrate((terget-r),cbr);
        cout<<"~~~~~~~~~~~~~~~SCORE~~~~~~~~~~~~~~~\n";
        cout<<"~~~~~~~~~~~~~~~BORD~~~~~~~~~~~~~~~~\n";
    cout<<" Opponent ::\n\n";
    cout<<"          "<<r<<"/"<<w<<"("<<o<<"."<<ob<<" overs)\n";
    cout<<"Opponent needs "<<(terget-r)<<" runs in "<<cbr<<" balls\n\n";
    printf("  Current Run Rate    ::  %.2lf\n",crr);
    printf("  Require Run Rate    ::  %.2lf\n",rrr);
    printf("  Strike Rate         ::  %.2lf\n",sr);
    cout<<"  Ball Faced          ::  "<<cbf<<"\n";
    cout<<"  Wicket left         ::  "<<cw<<"\n";
    cout<<"  Terget              ::  "<<terget<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

void score4(int cr,int cbf,int cw,int wicket,int terget,int cbr){
    int r,w,o,ob;
    double crr,sr,rrr;
    r=cr;
    w=wicket-cw;
    o=over(cbf);
    ob=overball(cbf);
    crr=crunrate(r,cbf);
    sr=srate(r,cbf);
    rrr=rrunrate((terget-r),cbr);
        cout<<"~~~~~~~~~~~~~~~SCORE~~~~~~~~~~~~~~~\n";
        cout<<"~~~~~~~~~~~~~~~BORD~~~~~~~~~~~~~~~~\n";
    cout<<" Player ::\n\n";
    cout<<"          "<<r<<"/"<<w<<"("<<o<<"."<<ob<<" overs)\n";
    cout<<"You need "<<(terget-r)<<" runs in "<<cbr<<" balls\n\n";
    printf("  Current Run Rate    ::  %.2lf\n",crr);
    printf("  Require Run Rate    ::  %.2lf\n",rrr);
    printf("  Strike Rate         ::  %.2lf\n",sr);
    cout<<"  Ball Faced          ::  "<<cbf<<"\n";
    cout<<"  Wicket left         ::  "<<cw<<"\n";
    cout<<"  Terget              ::  "<<terget<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
}

int over(int pbf){
    return pbf/6;
}

int overball(int pbf){
    return pbf%6;
}

double crunrate(int r,int pbf){
    return(double)((double)(r*6)/(double)pbf);
}

double srate(int r,int pbf){
    return(double)((double)(r*100)/(double)pbf);
}

int selectball(){
    cout<<"How many ball :: \n\n>>>";
    int b;
    cin>>b;
    if(b<1){
        while(b<1){
            cout<<"(@@)UNVALID(@@)\n";
            cout<<"\nEnter over 0\n\n";
            cout<<"enter your choice :: \n\n>>>";
            cin>>b;
        }
    }
    return b;
}

void theresult(int r){
        if(r==0){
        clrscr();
        cout<<"\n\nOMG!!!\n\n";
        Sleep(900);
        cout<<"(^o^)  The game is DRAW   (^o^)\n\n";
        Sleep(700);
        cout<<"LOL game \n\npress enter...";
        getchar();
        clrscr();
    }
    else if(r==2){
        clrscr();
        cout<<"\n\n(-_-)SORRY(-_-)\n\n";
        Sleep(900);
        cout<<"(-_-)  You lost the game  (-_-)\n\n";
        Sleep(800);
        cout<<"no problem\nbetter luck next game \n\npress enter...";
        getchar();
        clrscr();
    }
    else if(r==1){
    clrscr();
        cout<<"\n\n(@@)HURRAH!!!(@@)\n\n";
        Sleep(900);
        cout<<"(^o^)  You are the champion  (^o^)\n\n";
        Sleep(700);
        cout<<"BOSS game \n\npress enter...";
        getchar();
        clrscr();
    }
}

int pbat(int wicket,int bowl){
    cout<<"\n\nWELCOME TO BATING\n\n";
    cout<<"Press 1/2/3/4/5/6 as your shot........\n\n";
    cout<<"\n\nYou have "<<wicket<<" wickets    and \n         "<<bowl<<" balls   in hand\n\n\n";
    cout<<">>>>>>>>>>>>>>>>>>  GOOD LUCK  <<<<<<<<<<<<<<<<<<<<<\n\n";
    cout<<"press enter when you are ready.......\n\n\n\n\n";
    getchar();
    getchar();
    clrscr();
    int pr,ps,cs,pw,pbr,pbf,t;
    pr=pbf=0;
    pw=wicket;
    pbr=bowl;
    while(pw!=0&&pbr!=0){
        clrscr();
        if(pbf!=0) score1(pr,pbf,pw,wicket);
        pbf++;
        pbr--;
        cout<<"\n"<<pbf<<"th ball :: \n\nENTER YOUR SHOT :: ";
        cin>>ps;
        if(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
    while(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 6 ::";
        cin>>ps;
    }
   }
   cout<<endl;
   cs=(rand()+wicket+bowl)%6;
   cs++;
   cout<<endl<<"opponent's ball :: "<<cs<<endl<<endl;
   if(ps==cs){
        cout<<"(-_-)SORRY(-_-)\n\n";
        Sleep(1000);
    cout<<"You are out\n"<<endl;
    pw--;
    cout<<endl<<"wicket remaining   :: "<<pw;
    cout<<endl<<"current run        :: "<<pr<<endl;
              cout<<"Ball remaining     :: "<<pbr<<endl<<endl;
   }
   else {
    pr+=ps;
    cout<<".......(@@) WOW (@@).......\n\n";
    Sleep(1000);
    cout<<endl<<"You scored "<<ps<<" runs in "<<pbf<<"th ball.\n\n"<<endl;
    cout<<"Wicket left     ::   "<<pw<<endl;
    cout<<"Ball left       ::   "<<pbr<<endl;
    cout<<"Current run     ::   "<<pr<<endl;
   }
   cout<<endl<<endl<<"press enter when you are ready";
   getchar();
   getchar();
   }
   t=pr+1;
return t;
}

int obat(int wicket,int bowl){
    cout<<"\n\nWELCOME TO BOWLING\n\n";
    cout<<"Press 1/2/3/4/5/6 as your ball........\n\n";
    cout<<"\n\nOpponent have "<<wicket<<" wickets    and \n              "<<bowl<<" balls   in hand\n\n\n";
    cout<<">>>>>>>>>>>>>>>>>>  GOOD LUCK  <<<<<<<<<<<<<<<<<<<<<\n\n";
    cout<<"press enter when you are ready.......\n\n\n\n\n";
    getchar();
    clrscr();
    int cr,ps,cs,cw,cbr,cbf,t;
    cr=cbf=0;
    cw=wicket;
    cbr=bowl;
    while(cw!=0&&cbr!=0){
        clrscr();
        if(cbf!=0) score3(cr,cbf,cw,wicket);
        cbf++;
        cbr--;
        cout<<"\n"<<cbf<<"th ball :: \n\nENTER YOUR BALL :: ";
        cin>>ps;
        if(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
    while(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 6 ::";
        cin>>ps;
    }
   }
   cout<<endl;
   cs=(rand()+wicket+bowl)%6;
   cs++;
   cout<<endl<<"opponent's shot :: "<<cs<<endl<<endl;
   if(ps!=cs){
        cr+=cs;
    cout<<"(-_-)SORRY(-_-)\n\n";
    Sleep(1000);
    cout<<endl<<"Opponent scored "<<cs<<" runs in "<<cbf<<"th ball.\n\n"<<endl;
    cout<<"Wicket left     ::   "<<cw<<endl;
    cout<<"Ball left       ::   "<<cbr<<endl;
    cout<<"Current run     ::   "<<cr<<endl;
    }
   else {
    cout<<".......(@@) WOW (@@).......\n\n";
    Sleep(1000);
    cout<<"You got a wicket\n"<<endl;
    cw--;
    cout<<endl<<"wicket remaining   :: "<<cw;
    cout<<endl<<"current run        :: "<<cr<<endl;
    cout<<"Ball remaining     :: "<<cbr<<endl<<endl;
   }
   cout<<endl<<endl<<"press enter when you are ready....";
   getchar();
   getchar();
   }
   t=cr+1;
return t;
}

int obowl(int terget,int w,int b){
clrscr();
    cout<<"\n\nWELCOME TO BATING\n\n";
    cout<<"Press 1/2/3/4/5/6 as your shot........\n\n";
    cout<<"\n\nYou have "<<w<<" wickets  and \n         "<<b<<" balls  in hand\n\n\n";
    cout<<">>>>>>>>>>>>>>>>>>  GOOD LUCK  <<<<<<<<<<<<<<<<<<<<<\n\n";
    cout<<"press enter when you are ready.......\n\n\n\n\n";
    getchar();
    clrscr();
    int pr,ps,cs,pw,pbr,pbf,r;
    pr=pbf=0;
    pw=w;
    pbr=b;
    while(pw!=0&&pbr!=0&&pr<=terget){
        clrscr();
        if(pbf!=0) score4(pr,pbf,pw,w,terget,pbr);
        pbf++;
        pbr--;
        cout<<"   "<<pbf<<"th ball :: \n\nENTER YOUR SHOT :: ";
        cin>>ps;
        if(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
    while(ps!=1&&ps!=2&&ps!=3&&ps!=4&&ps!=5&&ps!=6){
        cout<<endl<<"(@@)unvalied(@@)"<<endl<<"press between 1 and 6 ::";
        cin>>ps;
    }
   }
   cout<<endl;
   cs=(rand()+w+b)%6;
   cs++;
   cout<<endl<<"opponent's ball :: "<<cs<<endl<<endl;
   if(ps==cs){
    pw--;
    cout<<"(-_-)SORRY(-_-)\n";
    Sleep(1000);
     cout<<"Opponent got a wicket\n"<<endl;
    cout<<"Wicket left     ::   "<<pw<<endl;
    cout<<"Ball left       ::   "<<pbr<<endl;
    cout<<"Current run     ::   "<<pr<<endl;
    if((terget-pr)>=0)cout<<"you need "<<terget-pr<<" runs in "<<pbr<<" balls";
   }
   else {
       pr+=ps;
    cout<<".......(@@) WOW (@@).......\n";
    Sleep(1000);
    cout<<endl<<"You scored "<<ps<<" runs in "<<pbf<<"th ball.\n"<<endl;
    cout<<endl<<"wicket remaining   :: "<<pw;
    cout<<endl<<"current run        :: "<<pr<<endl;
    cout<<"Ball remaining     :: "<<pbr<<endl<<endl;
    if((terget-pr)>=0)cout<<"you need "<<terget-pr<<" runs in "<<pbr<<" balls";
   }
   cout<<endl<<endl<<"press enter when you are ready";
   getchar();
   getchar();
   }
   terget--;
   if(terget==pr) r=0;
   else if(terget<pr) r=1;
   else if(terget>pr) r=2;
return r;
}


int wicket(){
    int w;
    cout<<"How many wickets do you want::\n\n>>>";
    cin>>w;
    if(w<1||w>10){
        while(w<1||w>10){
            cout<<"(@@)unvalid(@@)"<<endl;
            cout<<"How many wickets do you want::\n\n>>>";
            cin>>w;
        }
    }
    cout<<"\n\n\n";
    return w;
}

int toss(){
        int t,pt,ot,rt;
        cout<<"Wellcome to the toss\n\n";
        cout<<"Press 0 for head\nPress 1 for tail\n\n";
        cout<<"Enter your choice :: \n\n>>>";
        rt=rand()%2;
        cin>>pt;
   if(pt!=1&&pt!=0){
    while(pt!=1&&pt!=0){
        cout<<"(@@)unvalied(@@)"<<endl<<"press 1 or 0 ::\n\n>>>";
        cin>>pt;
    }
   }
   if(rt==pt){
    cout<<endl<<endl<<"congratulation!!"<<endl<<"You win the toss"<<endl<<"Press 1 for bat"<<endl<<"Press 2 for bowl"<<endl<<"Enter your choice :: \n\n>>>";
    cin>>t;
    if(t!=1&&t!=2){
    while(t!=1&&t!=2){
        cout<<"(@@)unvalid(@@)"<<endl<<"press 1 or 2 ::\n\n>>>";
        cin>>t;
    }}}
   else{
    rt++;
    t=rt;
    clrscr();
    cout<<endl<<"\n\n\n\tSorry,opponent won the toss"<<endl<<"\n\tOpponent chosed :: ";
    if(t==1) cout<<"Bowling"<<endl;
    else cout<<"Bating"<<endl;
    cout<<"\n\n\n\tpress enter...";
    getchar();
    getchar();
   }
   return t;
}

void clrscr(){
system("cls");
}

void animation(){
    clrscr();
    cout<<"\n\n\n";
    for(int i=1;i<=8;i++){
        cout<<"                          ooo";
        if(i==4||i==5) cout<<"oo";
        else cout<<"  ";
        cout<<"ooo ooo";
        if(i==1||i==2||i==4||i==5) cout<<"ooo";
        else cout<<"   ";
        cout<<"ooo ooo";
        if (i==1) cout<<"o    ";
        else if (i==2) cout<<"oo   ";
        else if (i==3) cout<<"ooo  ";
        else if (i==4) cout<<"oooo ";
        else if (i==5) cout<<" oooo";
        else if (i==6) cout<<"  ooo";
        else if (i==7) cout<<"   oo";
        else if (i==8) cout<<"    o";

        cout<<"ooo ooo";

        if(i>2&&i<7) cout<<"  ";
        else cout<<"oo";
        cout<<"ooo ";
        cout<<"\n";
        Sleep(300);
    }
    cout<<"\n\n";
    Sleep(400);
    for(int i=1;i<=7;i++){
        cout<<"                           000";
        if(i==3||i==4||i==5) cout<<"    ";
        else cout<<"0000";
        cout<<"  000";
        if(i==3||i==6||i==7) cout<<"  ";
        else cout<<"00";
        if(i==7) cout<<"";
        else cout<<"0";
        if(i==4||i==1) cout<<" ";
        else cout<<"0";
        if(i==7) cout<<"0  ";
        else cout<<"  ";
        cout<<"000  000";
        if(i==3||i==4||i==5) cout<<"    ";
        else cout<<"000 ";
        cout<<" 000";
        if(i==3||i==4||i==5) cout<<"0";
        else cout<<" ";
        if(i==1||i==7||i==4) cout<<" ";
        else cout<<"0";
        if(i==3||i==4||i==5) cout<<" ";
        else cout<<"0";
        if (i==1||i==7) cout<<"0";
        else cout<<" ";
        cout<<" ";
        cout<<"\n";
    Sleep(300);
    }
    cout<<"\n                                         0000000000\n";
    for(int i=1;i<=9;i++){
            Sleep(250);
        cout<<"                                          000  000";
        if(i==3) cout<<"      by";
        else if(i==4) cout<<"      MEHRAJUL ISLAM.";
        else if(i==5) cout<<"      GMHS'17";
        else if(i==6) cout<<"      CJC'16";
        cout<<endl;
    }
    Sleep(250);
    cout<<"                                         0000000000\n";
}
