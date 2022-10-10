#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;

char square[10]={'o','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();

void drawBoard()//layout of the board
{
    system("cls");
    system("color 6C");
    cout<<"\n\n\t Tic Tac Toe \n\n";
    cout<<"Player1 (X) - Player2 (O)\n\n\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[1]<<"  | "<<"  "<<square[2]<<"   | "<<"  "<<square[3]<<"\n";
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[4]<<"  | "<<"  "<<square[5]<<"   | "<<"  "<<square[6]<<"\n";
    cout<<"_____|_______|_______\n";
    cout<<"     |       |       \n";
    cout<<"  "<<square[7]<<"  | "<<"  "<<square[8]<<"   | "<<"  "<<square[9]<<"\n";
}

int checkWin()
{
    if(square[1]==square[2] && square[2]==square[3])//row 1
    return 1;
     else if(square[4]==square[5] && square[5]==square[6])//row 2
    return 1;
    else if(square[7]==square[8] && square[8]==square[9])//row 3
    return 1;
    else if(square[1]==square[4] && square[4]==square[7])//col 1
    return 1;
    else if(square[2]==square[5] && square[5]==square[8])//col 2
    return 1;
    else if(square[3]==square[6] && square[6]==square[9])//col 3
    return 1; 
    else if(square[1]==square[5] && square[5]==square[9])//diagonal 1
    return 1;
    else if(square[3]==square[5] && square[5]==square[7])//diagonal 2
    return 1;
    else if(square[1] !='1' && square[2] !='2'  && square[3] !='3'
    && square[4] !='4'  && square[5] !='5'  
    && square[6] !='6'  && square[7] !='7'  && square[8] !='8'
     && square[9] !='9')
     return 0;
     else
     return -1;
}

int main()
{
    int player=1,i,choice;//choice is the position or mark

    char mark;//X O
    do{
    drawBoard();
    player=(player % 2) ? 1 :2;
    cout<<"Player"<<player<<"Enter the choice: "<<endl;
    cin>>choice;
    mark=(player==1)?'X':'O';
    if(choice==1 && square[1]=='1')
     square[1]=mark;
    else if(choice==2 && square[2]=='2')
    square[2]=mark;
     else if(choice==3 && square[3]=='3')
    square[3]=mark;
     else if(choice==4 && square[4]=='4')
    square[4]=mark;
     else if(choice==5 && square[5]=='5')
    square[5]=mark;
     else if(choice==6 && square[6]=='6')
    square[6]=mark;
     else if(choice==7 && square[7]=='7')
    square[7]=mark;
     else if(choice==8 && square[8]=='8')
    square[8]=mark;
     else if(choice==9 && square[9]=='9')
    square[9]=mark;

    else
    {
    cout<<"Invalid Option!"<<endl;
    return player--;
    }   
    i=checkWin();
    player++;
 }while(i== -1);
drawBoard();
if(i==1)
{
cout<<"->Player"<<--player<<" won"<<endl;
}
else
{
cout<<"->Game draw";
}

return 0;
}
