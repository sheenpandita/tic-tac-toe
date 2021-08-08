#include<iostream>
#include<conio.h>

int winner();
int ttt();
char game[10]={'1','2','3','4','5','6','7','8','9'};
using namespace std;
int main(){
int player = 1,i,choice;
    char mark;
    do
    {
         ttt();
player=(player%2)?1:2;
cout << "Player " << player << ", enter a number:  ";
        cin >> choice;
mark=(player == 1) ? 'X' : 'O';
              if(choice==1&&game[0]=='1'){
	     game[0]=mark;}
        else if(choice==2&&game[1]=='2'){
        game[1]=mark;}
        else if(choice==3&&game[2]=='3'){
        game[2]=mark;}
        else if(choice==4&&game[3]=='4'){
        game[3]=mark;}
        else if(choice==5&&game[4]=='5'){
        game[4]=mark;}
        else if(choice==6&&game[5]=='6'){
        game[5]=mark;}
        else if(choice==7&&game[6]=='7'){
        game[6]=mark;}
        else if(choice==8&&game[7]=='8'){
        game[7]=mark;}
        else if(choice==9&&game[8]=='9'){
        game[8]=mark;}
        else{
        cout<<"invalid move !";
        player--;
        cin.ignore();
        cin.get();
        }
        i=winner();
        player++;
}
while(i==-1);
 ttt();
if(i==1)
cout<<"player \t"<<--player<<"\tyou have won !!\n";
else 
cout<<"\nGAME DRAW !!\n";
cin.ignore();
cin.get();
return 0;

}
int winner(){
	if(game[0]==game[1]&&game[1]==game[2])//012
	
		return 1;
	else if(game[3]==game[4]&&game[4]==game[5])//345
	
		return 1;
	else if(game[6]==game[7]&&game[7]==game[8])//678
	return 1;
	else if(game[0]==game[3]&&game[3]==game[6])//036
	return 1;
		else if(game[1]==game[4]&&game[4]==game[7])
	//147
		return 1;
	else if(game[2]==game[5]&&game[5]==game[8])//258
	return 1;

		else if(game[0]==game[4]&&game[4]==game[8])
	//048
		return 1;
	else if(game[2]==game[4]&&game[4]==game[6])
	return 1;//246
	else if(game[0]!='1'&&game[1]!='2'&&game[2]!='3'&&game[4]!='5'&&game[5]!='6'&&game[6]!='7'&&game[7]!='8'&&game[8]!='9')
	return 0;
	else return -1;
	
}
int ttt(){
	system("cls");
	cout<<"\t\t\t\t\t\tTIC-TAC-TOE\n\n\n";
		cout<<"\t\t\t\t|-----------------------------------------------|\n";
	cout<<"\t\t\t\t|\t"<<game[0]<<"\t|\t"<<game[1]<<"\t|\t"<<game[2]<<"\t|\n\n"<<endl;
		cout<<"\t\t\t\t|-----------------------------------------------|\n";
	cout<<"\t\t\t\t|\t"<<game[3]<<"\t|\t"<<game[4]<<"\t|\t"<<game[5]<<"\t|\n\n"<<endl;
		cout<<"\t\t\t\t|-----------------------------------------------|\n";
	cout<<"\t\t\t\t|\t"<<game[6]<<"\t|\t"<<game[7]<<"\t|\t"<<game[8]<<"\t|\n\n"<<endl;
	         cout<<"\t\t\t\t|-----------------------------------------------|\n";


}

