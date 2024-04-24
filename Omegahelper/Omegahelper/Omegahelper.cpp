#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>

using namespace std;

int shutoff(), youtube(), info(), opener(), help(), notepad(), comm();

string one,two,three,yesno,command;

int start()
{
    system("cls");
    cout << "Welcome to Omega Helper for windows." << endl;
    cout << "Type 'help' if you want to see a command list." << endl;
    comm();
    return 0;
}

int opener()
{
    system("cls");
    cout << "Coming Soon!!" << endl;
    Sleep(50);
    cout << "Going Back??" << endl;
    comm();
    return 0;
}

int help()
{
    system("cls");
    cout << "Command list :" << endl << "help - command list and help" << endl << "info - go to credits" << endl << "shutoff - shut off the helper" << endl;
    cout << "notepad - open notepad" << endl << "youtube - starting youtube : )" << endl << "opener - open section with app opener" << endl;
    comm();
    return 0;
}

int shutoff()
{
    system("cls");
    cout << "Do you really want to close Omega Heper?" << endl << "Y/N" << endl;
    cin >> yesno;
    if ((yesno == "Y") || (yesno == "y"))
    {
        exit(0);
    }
    if ((yesno == "N") || (yesno == "n"))
    {
        system("cls");
        cout << "OK, type any command";
        comm();
    }
    return 0;
}

int notepad()
{
    system("cls");
    cout << "Starting..." << endl;
    Sleep(50);
    system("notepad.exe");
    cout << "What now?" << endl;
    comm();
    return 0;
}

int youtube()
{
    system("cls");
    system("start http://youtube.com");
    cout << "And Where We Go Now?" << endl;
    comm();
    return 0;
}

int info()
{
    system("cls");
    cout << "Omega Helper" << endl;
    cout << "Terminal Edition, build .EXE edition, only for testing purposes." << endl;
    cout << "2021/2022, Untitled X STUDIO" << endl;
    cout << "THIS PROJECT IS UNOFFICIAL PROJECT. THATS NOT MICROSOFT PRODUCT." << endl;
    comm();
    return 0;
}

int comm()
{
    cin >> command;
    system("cls");
    if (command == "help")
    {
        help();
    }
    else if (command == "info")
    {
        info();
    }
    else if ((command == "shutoff") || (command == "ext") || (command == "close") || (command == "exit"))
    {
        shutoff();
    }
    else if (command == "notepad")
    {
        notepad();
    }
    else if (command == "youtube")
    {
        youtube();
    }
    else if (command == "opener")
    {
        opener();
    }
    else
    {
        cout << "this command doesn't exist" << endl;
        cout << "try again" << endl;
        comm();
    }
    return 0;
}

int main()
{
    SetConsoleTitleA("Omega Helper");
    for (;;)
    {
        cout << "Omega Helper" << endl;
        cout << "Terminal Edition, Version 0.EXE.4 beta, only for testing purposes." << endl;
        cout << "2021/2022, Untitled X STUDIO" << endl;
        cout << "WRITE start TO START" << endl;
        cin >> one;
        if (one == "start")
        {
            start();
        }
        else
        {
            system("cls");
            cout << "Oops... please restart program or try type 'start' again" << endl;
            cin >> one;
        }
    }
    return 0;
}