#include<iostream>
#include<stdio.h>
#include<iomanip>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    int i,j,k,l,w,t,n,r,z,x,s=5;
    cout<<"\n\t\tThe Pattern Hub\n\n";
    cout<<"Which type of Pattren would you like to see -- \n";
    cout<<"1. Square.\t2. Triangle.\n3. Number.\t4. Table.\n5. Some Special.\n";
    cout<<"\n\n";
    cout<<"Press Number -- ";
    cin>>l;
    cout<<"\n\n";
    if(l==1)
    {cout<<"1.)"<<"\n\n";
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"2.)"<<"\n\n";
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                (i==1&&j==1||i==5&&j==1)?cout<<" ":cout<<"* ";
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"3.)"<<"\n\n";
        for(int i=1;i<=5;i++)
       {
         for(int j=1;j<=5;j++)
       {
         (i==1||i==5||j==1||j==5)?cout<<("* "):cout<<("  ");
        }
         cout<<("\n");
        }cout<<"\n";
        cout<<"4.)"<<"\n\n";
        for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
        (j==i||j==1||i==5||i==1||j==5)?cout<<("* "):cout<<("  ");
            cout<<("\n");
     }cout<<"\n";
      int o;
     cout<<"If you want to see code , press 1 else any key - ";
     cin>>o;
     if(o==1)
    {
        cout<<"\n\n";
     cout<<"1.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=5;j++)\n{\ncout<<\"* \";\n}\ncout<<endl;\n}"<<"\n\n";
     cout<<"-------------------------------------"<<"\n\n";
        cout<<"2.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=5;j++)\n{\n(i==1&&j==1||i==5&&j==1)?cout<<\" \":cout<<\"* \";\n}\ncout<<endl;\n}"<<"\n\n";
        cout<<"-------------------------------------"<<"\n\n";
         cout<<"3.) for(int i=1;i<=5;i++)\n{\nfor(int j=1;j<=5;j++)\n{\n(i==1||i==5||j==1||j==5)?cout<<(\"* \"):cout<<(\"  \");\n}\ncout<<(\"\n\");\n}"<<"\n\n";
         cout<<"-------------------------------------"<<"\n\n";
        cout<<"4.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=5;j++)\n(j==i||j==1||i==5||i==1||j==5)?cout<<(\"* \"):cout<<(\"  \");\ncout<<(\"endl\");\n}"<<"\n\n";
   } 
    } 
    else if(l==2)
    {cout<<"1.)"<<"\n\n";
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"2.)"<<"\n\n";
        for(i=5;i>=1;i--)
        {
            for(j=i;j>=1;j--)
            {
                cout<<"* ";
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"3.)"<<"\n\n";
        w=5,k=0;
    for(int i=1;i<w;i++)
    {
        cout<<setw(w-i)<<setfill(' ')<<"*"<<setw(i+k++)<<setfill('*')<<"\n";
    }cout<<"\n";
    cout<<"4.)"<<"\n\n";
       for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                (j>=i)?cout<<"* ":cout<<" ";
            }
            cout<<"\n";
        }cout<<"\n";
        cout<<"5.)"<<"\n\n";
         i,j,n=5,r=n,x=0;
        for (i=0;i<=n;i++)
      {
        cout<<setw(n-x)<<setfill(' ')<<"";
        for(j=1;j<=x;j++)
            cout<<" *";
        cout<<"\n";
        x++;
      }cout<<"\n";
      int o;
       cout<<"If you want to see code , press 1 else any key - ";
     cin>>o;
     if(o==1)
    {
        cout<<"\n\n";
      cout<<"1.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=i;j++)\n{\ncout<<\"* \";\n}\ncout<<endl;\n}"<<"\n\n";
      cout<<"-------------------------------------"<<"\n\n";
        cout<<"2.) for(i=5;i>=1;i--)\n{\nfor(j=i;j>=1;j--)\n{\ncout<<\"* \";\n}\ncout<<endl;\n}"<<"\n\n";
        cout<<"-------------------------------------"<<"\n\n";
         cout<<"3.) w=5,k=0;\nfor(int i=1;i<w;i++)\n{\ncout<<setw(w-i)<<setfill(' ')<<\"*\"<<setw(i+k++)<<setfill('*')<<\"endl\";\n}"<<"\n\n";
        cout<<"-------------------------------------"<<"\n\n";
        cout<<"4.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=5;j++)\n{\n(j>=i)?cout<<\"* \":cout<<\" \";\n}\ncout<<\"endl\";\n}"<<"\n\n";
        cout<<"-------------------------------------"<<"\n\n";   
         cout<<"5.)i,j,n=5,r=n,x=0;\nfor(i=0;i<=n;i++)\n{\ncout<<setw(n-x)<<setfill(' ')<<\"\";\nfor(j=1;j<=x;j++)\ncout<<\" *\";\ncout<<\"endl\";\nx++;\n}"<<"\n\n";
    }
    }
    else if(l==3)
    {cout<<"1.)"<<"\n\n";
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<i;
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"2.)"<<"\n\n";
        for(i=5;i>=1;i--)
        {
            for(j=i;j>=1;j--)
            {
                cout<<i;
            }
            cout<<endl;
        }cout<<"\n";
        cout<<"3.)"<<"\n\n";
        i,x=0,n=5;
       char r[10];
       for (i=1;i<=n;i++)
    {
        x=x*10+i;
        itoa(x,r,10);
        cout<<strrev(r)<<endl;
    }cout<<"\n";
    cout<<"4.)"<<"\n\n";
    int i,j,k,s=5;
    for(i=0;i<s;i++)
    {
        for(j=1;j<s-i;j++)
        {
            cout<<" ";
        }
        for(k=0;k<=i;k++)
        {
            cout<<(k+1);
        }
        cout<<endl;
    }cout<<"\n";
    cout<<"5.)"<<"\n\n";
  for(i=0;i<s;i++) 
  {
    for(j=0;j<s-i;j++) 
    {
      cout<<" ";
    }
    for(k=0;k<2*i+1;k++) 
    {
      cout<<(k+1);
    }
    cout<<endl;
  }cout<<"\n";
    int o;
       cout<<"If you want to see code , press 1 else any key - ";
     cin>>o;
     if(o==1)
    {
        cout<<"\n\n";
    cout<<"1.) for(i=1;i<=5;i++)\n{\nfor(j=1;j<=i;j++)\n{\ncout<<i;\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"2.) for(i=5;i>=1;i--)\n{\nfor(j=i;j>=1;j--)\n{\ncout<<i;\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"3.) int i,x=0,n=5;\nchar r[10];\nfor (i=1;i<=n;i++)\n{\nx=x*10+i;\nitoa(x,r,10);\ncout<<strrev(r)<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"4.) int i,j,k,s=5;\nfor(i=0;i<s;i++)\n{\nfor(j=1;j<s-i;j++)\n{\ncout<<\" \";\n}\nfor(k=0;k<=i;k++)\n{\ncout<<(k+1);\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"5.) int i,j,k,s=5;\nfor(i=0;i<s;i++)\n{\nfor(j=0;j<s-i;j++) \n{\ncout<<" ";\n}\nfor(k=0;k<2*i+1;k++)\n{\ncout<<(k+1);\n}\ncout<<endl;\n}"<<"\n\n";
    }
    }
    else if(l==4)
    {
        cout<<"Which number Table you want to print -- ";
        cin>>t;
        cout<<"Tell the number till you have to print -- ";
        cin>>z;
        for(i=1;i<=z;i++)
        {
            r=i*t;
            cout<<t<<" * "<<i<<" = "<<r<<endl;
        }cout<<"\n";
         int o;
       cout<<"If you want to see code , press 1 else any key - ";
       cin>>o;
     if(o==1)
    {
      cout<<"\n\n"<<"cout<<\"Which number Table you want to print -- \";\ncin>>t;\ncout<<\"Tell the number till you have to print -- \";\ncin>>z;\nfor(i=1;i<=z;i++)\n{\nr=i*t;\ncout<<t<<\" * \"<<i<<\" = \"<<r<<endl;\n}"<<"\n\n";
    }
    }
    else if(l==5)
    {cout<<"1.)"<<"\n\n";
        int i,n=5,r=(n+n-1),x=(n+n-1),y=(n/2)+1,j;
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=(n+n-1); j++)
        (j<=i)?cout<<"*":(j>=x)?cout<<"*":cout<<" ";
        cout<<endl;
        x--;
    }cout<<"\n";
    cout<<"2.)"<<"\n\n";
  for(i=1;i<=s;i++)
   {
    for(j=0;j<i;j++)
   {
      cout<<" *";
    }
    cout<<endl;
  }
  for(i=1;i<=s-1;i++) 
  {
    for(j=0;j<s-i;j++) 
    {
      cout<<" *";
    }
    cout<<endl;
  }cout<<"\n";
   cout<<"3.)"<<"\n\n";
  for(i=1;i<=s;i++) 
  {
    for(j=0;j<s-i;j++) 
    {
      cout<<" ";
    }
    for(k=0;k<i;k++)
   {
      cout<<"* ";
    }
    cout<<endl;
  }
  for(i=1;i<=s-1;i++) 
  {
    for(j=0;j<i;j++)
    {
      cout<<" ";
    }
    for(k=0;k<s-i;k++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }cout<<"\n";
   cout<<"4.)"<<"\n\n";
  for(i=1;i<=s;i++) 
  {
    for(j=0;j<s-i;j++) 
    {
      cout<<" ";
    }
    for(k=0;k<i;k++)
   {
      cout<<"*";
    }
    cout<<endl;
  }
  for(i=1;i<=s-1;i++) 
  {
    for(j=0;j<i;j++)
    {
      cout<<" ";
    }
    for(k=0;k<s-i;k++)
    {
      cout<<"*";
    }
    cout<<endl;
  }cout<<"\n";
    cout<<"5.)"<<"\n\n";
   int s=6;
  for(i=s/2;i<s;i+=2)
  {
    for(j=1;j<s-i;j+=2)
    {
      cout<<" ";
    }
    for(j=1;j<i+1;j++) 
    {
      cout<<"*";
    }
    for(j=1;j<s-i+1;j++)
    {
      cout<<" ";
    }
    for(j=1;j<i+1;j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
  for(i=s;i>0;i--) 
  {
    for(j=0;j<s-i;j++)
    {
      cout<<" ";
    }
    for(j=1;j<i*2;j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
     int o;
       cout<<"If you want to see code , press 1 else any key - ";
     cin>>o;
     if(o==1)
    {
    cout<<"\n\n"<<"1.) int i,n=5,r=(n+n-1),x=(n+n-1),y=(n/2)+1,j;\nfor(i=1;i<=n;i++)\n{\nfor(j=1; j<=(n+n-1); j++)\n(j<=i)?cout<<\"*\":(j>=x)?cout<<\"*\":cout<<\" \";\ncout<<endl;\nx--;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"2.) for(i=1;i<=s;i++)\n{\nfor(j=0;j<i;j++)\n{\ncout<<\" *\";\n}\ncout<<endl;\n}\nfor(i=1;i<=s-1;i++)\n{\nfor(j=0;j<s-i;j++)\n{\ncout<<\" *\";\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"3.) for(i=1;i<=s;i++)\n{\nfor(j=0;j<s-i;j++)\n{\ncout<<\" \";\n}\nfor(k=0;k<i;k++)\n{\ncout<<\"* \";\n}\ncout<<endl;\n}\nfor(i=1;i<=s-1;i++) \n{\nfor(j=0;j<i;j++)\n{\ncout<<\" \";\n}\nfor(k=0;k<s-i;k++)\n{\ncout<<\"* \";\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"4.) for(i=1;i<=s;i++)\n{\nfor(j=0;j<s-i;j++)\n{\ncout<<\" \";\n}\nfor(k=0;k<i;k++)\n{\ncout<<\"*\";\n}\ncout<<endl;\n}\nfor(i=1;i<=s-1;i++) \n{\nfor(j=0;j<i;j++)\n{\ncout<<\" \";\n}\nfor(k=0;k<s-i;k++)\n{\ncout<<\"*\";\n}\ncout<<endl;\n}"<<"\n\n";
    cout<<"-------------------------------------"<<"\n\n";
    cout<<"5.) int s=6;\nfor(i=s/2;i<s;i+=2){\nfor(j=1;j<s-i;j+=2){\ncout<<\" \";\n}\nfor(j=1;j<i+1;j++){\ncout<<\"*\";\n}\nfor(j=1;j<s-i+1;j++){\ncout<<\" \";\n}\nfor(j=1;j<i+1;j++){\ncout<<\"*\";\n}\ncout<<endl;\n}\nfor(i=s;i>0;i--){\nfor(j=0;j<s-i;j++){\ncout<<\" \";\n}\nfor(j=1;j<i*2;j++){\ncout<<\"*\";\n}\ncout<<endl;\n}"<<"\n\n";
    }
    }
    else
    {
        cout<<"\nSelect option from 1 - 5.\n\n";
    }
    cout<<"If you want to continue press 1...else any key. ";
    cin>>w;
    if(w==1)
    {
        system("cls");
        main();
    }
    else
    {
        system("cls");
    }
}