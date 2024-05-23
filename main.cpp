#include <iostream>

using namespace std;

void ShowMenu()
{
    cout<<"*******Ahly Bank*******"<<endl;
    cout<<"1. See The Money "<<endl;
    cout<<"2. Push Money "<<endl;
    cout<<"3. Pull Money "<<endl;
    cout<<"4. Exit "<<endl;

}
int main()
{
    double Balance = 1000,Push,pull;
    int choice;

    while(choice != 4)
    {
        ShowMenu();
        cout<<"Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"Your Money is : "<<Balance<<endl;
            break;
        case 2:
            cout<<"Enter Number You Add : ";
            cin>>Push;
            Balance = Balance + Push;
            cout<<"Your Money After Push is : "<<Balance<<endl;
            break;
        case 3:
            cout<<"Enter Your Number You Pull : ";
            cin>>pull;
            if(pull>Balance)
            {
                cout<<"There Is No Enough Money "<<endl;
                break;
            }
            else
            {
                Balance = Balance - pull;
                cout<<"Your Money After Pull is : "<<Balance<<endl;
                break;

            }
            break;
              case 4:
            cout<<"Thanks For You"<<endl;
            break;
        }

    }

}
