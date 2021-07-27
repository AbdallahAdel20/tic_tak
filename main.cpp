#include <iostream>
#include <chrono>

using namespace std;
char a='1' ,b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';


void Drow(){
    system("cls");
    cout<<" Tic __ Tac   \n\n"
    <<"    _________________\n  "
    <<"       |     |     \n"<<
    "      "<<a<<"  |  "<<b<<"  |  "<<c<<"\n"
    <<"    _____|_____|_____\n  "
    <<"       |     |     \n"<<
    "      "<<d<<"  |  "<<e<<"  |  "<<f<<"\n"
    <<"    _____|_____|_____\n  "
    <<"       |     |     \n"<<
    "      "<<g<<"  |  "<<h<<"  |  "<<i<<"\n"
    <<"    _____|_____|_____\n\n\n";


}

int check_winner(){
    if(a==b && b==c )
        return 1;
    else if(d==e && e==f )
        return 1;
    else if(g==h && h==i )
        return 1;
    else if(a==d && d==g )
        return 1;
    else if(b==e && e==h )
        return 1;
    else if(c==f && f==i )
        return 1;
    else if(a==e && e==i )
        return 1;
    else if(c==e && e==g )
        return 1;
    else if(a!='1' && b!='2' && c!='3' && d!='4' && e!='5' && f!='6' && g!='7' && h!='8' && i!='9' )
        return 0;
    else
        return -1;
}

int result(string a ,string b,char m){
    int r1=0 ,r2=0 , statue2;
    statue2 = check_winner();
    if(statue2 == 1){
        if(m == 'X'){
            r1++;
        }
        else{
            r2++;}
        cout<<"    "<<a<<" is "<<r1<<"   "<<b<<" is "<<r2<<"\n";}
    else if(statue2 == 0){
        int drow_r1 = r1 ,drow_r2 = r2;
        cout<<"    "<<a<<" is "<<drow_r1<<"   "<<b<<" is "<<drow_r2<<"\n";}


    }





int main()
{
    string player1 , player2 , player_name;
    char mark ,play_again = 'Y';

    cout<<"Player 1 play with X \nplayer 2 play with O\n\n Enter players names\n";
    cin>>player1;
    cin>>player2;
    int choise ,statues;
    int player ;
    cout<<"Who will play first ?\n 1) press 1 to  "<<player1<<"\n 2) press 2 to "<<player2<<"\n  ";
    cin>>player;
   do{
        a='1' ,b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';

        do{
            Drow();
            if(player %2==0){
                player = 2;
                mark ='O';
                player_name = player2;
            }
            else
            {
                player = 1;
                mark = 'X';
                player_name = player1;
            }
            cout<<player_name<<" turn\n";
            cin>>choise;
            cout<<"\n";

            if(choise ==1 && a == '1')
                a = mark;
            else if (choise ==2 && b=='2')
                b = mark;
            else if (choise ==3 && c=='3')
                c = mark;
            else if (choise ==4 && d=='4')
                d = mark;
            else if (choise ==5 && e=='5')
                e = mark;
            else if (choise ==6 && f=='6')
                f = mark;
            else if (choise ==7 && g=='7')
                g = mark;
            else if (choise ==8 && h=='8')
                h = mark;
            else if (choise ==9 && i=='9')
                i = mark;
            else{
                cout<<"invalid input\n";
                player--;
                Drow();
                }

            statues = check_winner();
            player++;

            }while(statues == -1);

        if(statues == 1){
            Drow();
            cout<<" The winner is player "<<player_name<<"\n";
            result(player1 ,player2 ,mark);
            cout<<" press y to play again \n";
            cin>>play_again;
            }
        else if(statues == 0){
            Drow();
            cout<<"    Drow\n";
            result(player1 ,player2 ,mark);
            cout<<" press y to play again \n";
            cin>>play_again;
            }
   }while(play_again == 'y');


    return 0;
}
