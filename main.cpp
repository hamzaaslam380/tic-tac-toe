#include <iostream>
using namespace std;

int main()
{
    char play1,play2,dec,a1='1',a2='2',a3='3',a4='4',a5='5',a6='6',a7='7',a8='8',a9='9';
    int i;
    cout<<"   TIC\t TAC\t TOE "<<endl<<endl<<endl;
    cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
    cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
    cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl<<endl<<endl;
    cout<<endl<<"Select Your Choice "<<endl<<endl;

    for(i=1;i<5;i++)
    {
        cout<<"Player 1 : "; //1st turn
        cin>>play1;
        cout<<endl;
    if(play1==a1)
    {
        a1='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a2)
    {
        a2='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a3)
    {
        a3='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a4)
    {
        a4='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a5)
    {
        a5='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a6)
    {
        a6='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a7)
    {
        a7='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a8)
    {
        a8='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play1==a9)
    {
        a9='x';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }

    if(a1=='o' && a2=='o' && a3=='o'){
    cout<<endl<<endl<<"Player 2 Won ";
    return 0;
    }
    else if(a4=='x' && a5=='x' && a6=='x'){
    cout<<endl<<endl<<"Player 1 Won ";
    return 0;
    }
    else if(a7=='x' && a8=='x' && a9=='x'){
    cout<<endl<<endl<<"Player 1 Won ";
    return 0;
    }
    else if(a1=='o' && a5=='o' && a9=='0'){
    cout<<endl<<endl<<"Player 2 is Won ";
    return 0;
    }
    else if(a4=='o' && a5=='o' && a6=='o'){
    cout<<endl<<endl<<"Player 2 Won ";
    return 0;
    }
    else if(a7=='o' && a8=='o' && a9=='o'){
    cout<<endl<<endl<<"Player 2 Won ";
    return 0;
    }
    else if(a1=='x' && a2=='x' && a3=='x'){
    cout<<endl<<endl<<"Player 1 Won ";
    return 0;
    }
    else if(a1=='x' && a5=='x' && a9=='x'){
    cout<<endl<<endl<<"Player 1 is Won ";
    return 0;
    }
    else if(a3=='o' && a5=='o' && a7=='o'){
    cout<<endl<<endl<<"Player 2 is Won";
    return 0;
    }
    else if(a3=='o' && a6=='o' && a9=='0'){
    cout<<endl<<endl<<"Player 2 is Won ";
    return 0;
    }
    else if(a1=='x' && a4=='x' && a7=='x'){
    cout<<endl<<endl<<"Player 1 is Won ";
    return 0;
    }
    else if(a2=='x' && a5=='x' && a8=='x'){
    cout<<endl<<endl<<"Player 1 is Won ";
    return 0;
    }
    else if(a3=='x' && a5=='x' && a7=='x'){
    cout<<endl<<endl<<"Player 1 is Won";
    return 0;
    }
    else if(a1=='o' && a4=='o' && a7=='o'){
    cout<<endl<<endl<<"Player 2 is Won ";
    return 0;
    }
    else if(a2=='o' && a5=='o' && a8=='0'){
    cout<<endl<<endl<<"Player 2 is Won ";
    return 0;
    }
    else if(a3=='x' && a6=='x' && a9=='x'){
    cout<<endl<<endl<<"Player 1 is Won ";
    return 0;
    }
    else
    {
        cout<<endl<<endl<<"Player 2 : "; //2nd turn
        cin>>play2;
        cout<<endl;

    if(play2==a1)
    {
        a1='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a2)
    {
        a2='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a3)
    {
        a3='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a4)
    {
        a4='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a5)
    {
        a5='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a6)
    {
        a6='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a7)
    {
        a7='0';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a8)
    {
        a8='0';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    else if(play2==a9)
    {
        a9='o';
        cout<<"\t"<<a1<<"|"<<a2<<"|"<<a3<<"|"<<endl;
        cout<<"\t"<<a4<<"|"<<a5<<"|"<<a6<<"|"<<endl;
        cout<<"\t"<<a7<<"|"<<a8<<"|"<<a9<<"|"<<endl;

    }
    cout<<endl;
    }
    }
    if(i==5)
        cout<<endl<<" Game Is Draw " ;
    return 0;
}
