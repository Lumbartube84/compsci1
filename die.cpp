srand(time(0));  /// reset and generate different random numbers
///base off the computer's internal clock

int x; /// represent our random number
int c=0, lc=0, ic=0, oc=0, nc=0;

    bool run = true;


while(c<51)
{



    do
    {
        x = rand()%4+1;
        if(x == 1)
        {
            cout<<"L";
        }
        if(x == 2)
        {
            cout<<"I";
        }
        if(x == 3)
        {
            cout<<"O";
        }
        if(x == 4)
        {
            cout<<"N";
        }
        lc++;
        c++;
    }
    while(x != 1);
    cout<<"  ";
do
    {
        x = rand()%4+1;
        if(x == 1)
        {
            cout<<"L";
        }
        if(x == 2)
        {
            cout<<"I";
        }
        if(x == 3)
        {
            cout<<"O";
        }
        if(x == 4)
        {
            cout<<"N";
        }
        ic++;
        c++;
    }
    while(x != 2);
cout<<"  ";
do
    {
        x = rand()%4+1;
        if(x == 1)
        {
            cout<<"L";
        }
        if(x == 2)
        {
            cout<<"I";
        }
        if(x == 3)
        {
            cout<<"O";
        }
        if(x == 4)
        {
            cout<<"N";
        }
        oc++;
        c++;
    }
    while(x != 3);
cout<<"  ";
do
    {
        x = rand()%4+1;
        if(x == 1)
        {
            cout<<"L";
        }
        if(x == 2)
        {
            cout<<"I";
        }
        if(x == 3)
        {
            cout<<"O";
        }
        if(x == 4)
        {
            cout<<"N";
        }
        nc++;
        c++;
    }
    while(x != 4);

    cout<<endl<<endl;
    cout<<"LION was spelled out in "<<c<<" rolls."<<endl<<endl;;
    cout<<lc<<" for the L"<<endl;
    cout<<ic<<" for the I"<<endl;
    cout<<oc<<" for the O"<<endl;
    cout<<nc<<" for the N"<<endl;
    if(c>51)
    {
        cout<<"NEW HIGH ROLL"<<endl;
        system("pause");
    }



    c=0;
    lc=0;
    ic=0;
    oc=0;
    nc=0;



system("cls");



}


