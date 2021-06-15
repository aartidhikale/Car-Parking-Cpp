#include<iostream>
#include<string>
using namespace std;
int main()
{
    char cho;
    int n=100;
    cout<<"#################Welcome to Morya Parking#################"<<endl<<endl;
    cout<<"Services we provide :"<<endl;
    cout<<"1.parking of various vehicles \t\t2. 24*7 services \t\t 3. At reasonable cost"<<endl<<endl;
     int c=0,r=0,b=0,t=0;
    int amount=0,count=0;
    int choice;
    int hrs;
    while(1)
    {


    cout<<"Enter what kind of user You are"<<endl;



    cout<<" 1. u= user \n 2. a=admin"<<endl;
    cin>>cho;
    if(cho=='u'|| cho=='U')
    {
        int u_input;

        string name;
        cout<<"Enter Your name "<<endl;
        cin>>name;
        cout<<"Welcome  user "<<name<<endl;

        cout<<"Vehicles You can park with rates per Hour \n1.Rickshaw =100 \n 2.Car =200\n 3. Bus =300\n 4.Tractor=400"<<endl;
      cout<<"Enter Which vehicle You want to park"<<endl;
      cout<<"******Menu******"<<endl;
    cout<<"Press 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"Press 3 for Bus"<<endl;
    cout<<"press 4 for Tractor"<<endl;
    while(1)
    {
      cin>>u_input;
      if(count<n)
      {
    if(u_input==1)
    {
        int amt=100;
        cout<<"Enter total hours  You want to park rickshaw";
        cin>>hrs;
        amt=amt*hrs;
        amount=amount+amt;
        count=count+1;
        r++;
        cout<<"RickShaw parked sucessfully"<<endl;
    }
    else if(u_input==2)
    {
         int amt=200;
        cout<<"Enter total hours  You want to park Car";
        cin>>hrs;
        amt=amt*hrs;
        amount=amount+amt;
        count=count+1;
        c++;
        cout<<"Car parked sucessfully"<<endl;

    }
    else if(u_input==3)
    {
          int amt=300;
        cout<<"Enter total hours  You want to park Bus";
        cin>>hrs;
        amt=amt*hrs;
        amount=amount+amt;
        count=count+1;
        b++;
          cout<<"Bus parked sucessfully"<<endl;
    }
    else if(u_input==4)
    {
        int amt=400;
        cout<<"Enter total hours  You want to park Tractor";
        cin>>hrs;
        amt=amt*hrs;
        amount=amount+amt;
        count=count+1;
        t++;
          cout<<"Tractor parked sucessfully"<<endl;
    }
    else{
        cout<<"Sorry  I cant recognized Your query";
    }
      }
        else{
        cout<<"Sorry !!Parking is fulled"<<endl;
      }
      cout<<"Do You Want to parked More"<<endl;
      cin>>choice;
      if(choice==1)
      {
          cout<<"Ohhh thats Great"<<endl;
          cout<<"Enter Choice what You Want to Park"<<endl;
          continue;
      }
      else{
            cout<<"Ohh thats fine Thanks for Using system"<<endl;

        break;
      }
    }


    }

    else if(cho=='a'|| cho=='A')
    {
                    cout<<"services  for Admin are"<<endl;
                cout<<" 1.Show Records \n 2. delete records \n3. view Amount \n 4. view place remaining"<<endl;
     string username,password;
         cout<<"Enter Username"<<endl;
         cin>>username;
         cout<<"Enter password"<<endl;
         cin>>password;
        while(1)
    {


         if(username=="admin123" && password=="admin@123")
         {
             cout<<"Welcome Admin"<<endl;

                 cout<<"Enter Which  service You want to use"<<endl;
      cout<<"******Menu******"<<endl;
    cout<<"Press 1 for View Records"<<endl;
    cout<<"Press 2 for Delete Records"<<endl;
    cout<<"Press 3 to view  Amount"<<endl;
    cout<<"press 4 to know Remaining place"<<endl;

               int u_input;
      cin>>u_input;
      if(u_input==1)
      {

        cout<<"The total number of Vehicles parked = "<<count<<endl;
        cout<<"The total Number of Rickshaws ="<<r<<endl;
         cout<<"The total Number of Cars ="<<c<<endl;
          cout<<"The total Number of Buses ="<<b<<endl;
            cout<<"The total Number of tractor ="<<t<<endl;
      }
      else if(u_input==2)
    {
        int ch;
         cout<<"******Menu******"<<endl;
    cout<<"Press 1 for Rickshaw"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"Press 3 for Bus"<<endl;
     cout<<"Press 4 for tractor"<<endl;
        cout<<"Enter choice of what You want to delete entry";
        cin>>ch;


        switch(ch)
        {
             int am,cal;
            case 1:
                        cout<<"Enter amount of Rickshaw You want to remove"<<endl;
                        cin>>am;
                        count=count-am;
                        r=r-am;
                        //cal=am*100;
                     //   amount=amount-cal;
                     if(r<0)
                     {
                         cout<<"Sorry their is no more rickshaw"<<endl;
                         r=0;
                     }
                     else
                     {
                         cout<<"Rickshaw entry Deleted Sucessfully"<<endl;
                     }

                        am=0;
                        //cal=0;
                        break;
            case 2:
                        cout<<"Enter amount of Car You want to remove"<<endl;
                        cin>>am;
                        count=count-am;
                        c=c-am;
                       // cal=am*200;
                        //amount=amount-cal;
                         if(c<0)
                     {
                         cout<<"Sorry their is no more Car"<<endl;
                         c=0;
                     }
                     else
                     {
                         cout<<"Car entry Deleted Sucessfully"<<endl;
                     }
                        am=0;
                      //  cal=0;
                        break;

            case 3:
                        cout<<"Enter amount of Bus You want to remove"<<endl;
                        cin>>am;
                        count=count-am;
                        b=b-am;
                        //cal=am*300;
                     //   amount=amount-cal;
                     if(b<0)
                     {
                         cout<<"Sorry their is no more bus"<<endl;
                         b=0;
                     }
                     else
                     {
                         cout<<"Bus entry Deleted Sucessfully"<<endl;
                     }
                        am=0;
                       // cal=0;
                        break;
            case 4:
                        cout<<"Enter amount of Tractor You want to remove"<<endl;
                        cin>>am;
                        count=count-am;
                        t=t-am;
                        //cal=am*300;
                     //   amount=amount-cal;
                       if(t<0)
                     {
                         cout<<"Sorry their is no more Tractor"<<endl;
                         t=0;
                     }
                     else
                     {
                         cout<<"Tractor entry Deleted Sucessfully"<<endl;
                     }
                        am=0;
                       // cal=0;
                        break;

            default :
                        cout<<"Sorry enter valid choice"<<endl;
        }

    }
    else if(u_input==3)
    {
        cout<<"The total amount = "<<amount<<endl;
    }
    else if(u_input==4)
    {
               cout<<"The total remaining place = "<<n-count<<endl;
    }
    cout<<"Do You Want to uses More services"<<endl;

      cin>>choice;
      if(choice==1)
      {
          cout<<"Ohhh thats Great"<<endl;
          cout<<"Enter Choice of operation You want to perform"<<endl;
          continue;
      }
      else{
            cout<<"Ohh thats fine Thanks for Using system"<<endl;

        break;
      }


         }
         else
         {
             cout<<"Invalid ceredentials"<<endl;
             break;
         }

    }

    cout<<"Do you want to continue";
    int choice;
    cin>>choice;
    if(choice==1)
    {
        continue;
    }
    else
    {
        break;
    }

    }
    }


}
