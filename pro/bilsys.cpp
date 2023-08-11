#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout<<"\n\tSharma Food Corner\t\n\n";
    string n;
    double m;
    int o,q,w,e,r,t,y;
    cout<<"Enter Name -- ";
    cin>>n;
    cout<<"Enter Mobile No. -- ";
    cin>>m;
    cout<<"Your Order -- \n1. Burger.\n2. Pizza.\n3. Chaumin.\n4. Tea.\n5. Pasta.\n";
    cin>>o;
    if(o==1)
    {
        int z;
        cout<<"Your order is Burger"<<endl;
        cout<<"Which type of Burger would you like to order -- \n1. Hamburger.\t2. Turkey Burger.\n";
        cout<<"3.cheese Burger.\t4. Veggie Burger.\n5. Lamb Burger.\t6. Pizza Burger\n";
        cin>>z;
         cout<<"Enter Quantity -- ";
        cin>>q;
        if(z==1)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Hamburger"<<"\t\tprice -- "<<q*80<<endl;
        }
        }
        else if(z==2)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Turkey Burger"<<"\t\tprice -- "<<q*70<<endl;
        }
        }
        else if(z==3)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Cheese Burger"<<"\t\tprice -- "<<q*90<<endl;
        }
        }
        else if(z==4)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Veggie Burger"<<"\t\tprice -- "<<q*60<<endl;
        }
        }
        else if(z==5)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Lamb Burger"<<"\t\tprice -- "<<q*50<<endl;
        }
        }
        else if(z==6)
        {
        for(int i=q;i<=q;i++)
        {
            cout<<"Your order is Pizza Burger"<<"\t\tprice -- "<<q*100<<endl;
        }
        }
    }
    else if(o==2)
    {
        int z;
        cout<<"Your order is Pizza"<<endl;
        cout<<"Which type of Pizza would you like to order -- \n1. Cheese N Corn PIzza.\t2. Pepperoni Pizza.\n";
        cout<<"3. Hawaiian Pizza.\t4. Veggie Pizza.\n5. Supreme Pizza.\t6. The Work Pizza\n";
        cin>>z;
             cout<<"Enter Quantity -- ";
        cin>>w;
        if(z==1)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is Cheese N Corn PIzza."<<"\t\tprice -- "<<w*149<<endl;
        }
        }
        else if(z==2)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is Pepperoni Pizza."<<"\t\tprice -- "<<w*129<<endl;
        }
        }
        else if(z==3)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is Hawaiian Pizza."<<"\t\tprice -- "<<w*99<<endl;
        }
        }
        else if(z==4)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is Veggie Pizza."<<"\t\tprice -- "<<w*109<<endl;
        }
        }
        else if(z==5)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is Supreme Pizza."<<"\t\tprice -- "<<w*159<<endl;
        }
        }
        else if(z==6)
        {
        for(int i=w;i<=w;i++)
        {
            cout<<"Your order is The Work Pizza"<<"\t\tprice -- "<<w*169<<endl;
        }
        }
    }
    else if(o==3)
    {
        int z;
        cout<<"Your order is Chaumin"<<endl;
        cout<<"Which type of Chaumin would you like to order -- \n1. Veggei Chaumin.\t2. Masala Chaumin.\n";
        cout<<"3. Spice Chaumin.\t4. Half Plate Chaumin.\n5. Full Plate Chaumin.\t6. Calamari Lemon chaumin.\n";
        cin>>z;
             cout<<"Enter Quantity -- ";
        cin>>e;
        if(z==1)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Veggei Chaumin"<<"\t\tprice -- "<<e*50<<endl;
        }
        }
        else if(z==2)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Masala Chaumin"<<"\t\tprice -- "<<e*80<<endl;
        }
        }
        else if(z==3)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Spice Chaumin"<<"\t\tprice -- "<<e*60<<endl;
        }
        }
        else if(z==4)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Half Plate Chaumin"<<"\t\tprice -- "<<e*30<<endl;
        }
        }
        else if(z==5)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Full Plate Chaumin"<<"\t\tprice -- "<<e*70<<endl;
        }
        }
        else if(z==6)
        {
        for(int i=e;i<=e;i++)
        {
            cout<<"Your order is Calamari Lemon chaumin"<<"\t\tprice -- "<<e*70<<endl;
        }
        }
    }
    else if(o==4)
    {
        int z;
        cout<<"Your order is Tea"<<endl;
        cout<<"Which type of Tea would you like to order -- \n1. Masala Tea.\t2. Chocolate Tea.\n";
        cout<<"3. Ginger Tea.\t4. Cardamom Tea.\n5. Black Tea.\t6. Green Tea.\n";
        cin>>z;
             cout<<"Enter Quantity -- ";
        cin>>r;
        if(z==1)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Masala Tea"<<"\t\tprice -- "<<r*20<<endl;
        }
        }
        else if(z==2)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Chocolate Tea"<<"\t\tprice -- "<<r*18<<endl;
        }
        }
        else if(z==3)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Ginger Tea"<<"\t\tprice -- "<<r*10<<endl;
        }
        }
        else if(z==4)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Cardamom Tea"<<"\t\tprice -- "<<r*12<<endl;
        }
        }
        else if(z==5)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Black Tea"<<"\t\tprice -- "<<r*25<<endl;
        }
        }
        else if(z==6)
        {
        for(int i=r;i<=r;i++)
        {
            cout<<"Your order is Green Tea"<<"\t\tprice -- "<<r*22<<endl;
        }
        }
    }
    else if(o==5)
    {   
        int z;
        cout<<"Your order is Pasta"<<endl;
        cout<<"Which type of Pasta would you like to order -- \n1. White Pasta.\t2. Red Pasta.\n";
        cout<<"3. Masala Pasta.\t4. Spice Pasta.\n5. Half Plate Pasta.\t6. Full Plate Pasta.\n";
        cin>>z;
             cout<<"Enter Quantity -- ";
        cin>>t;
        if(z==1)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is White Pasta"<<"\t\tprice -- "<<t*100<<endl;
        }
        }
        else if(z==2)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is Red Pasta"<<"\t\tprice -- "<<t*120<<endl;
        }
        }
        else if(z==3)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is Masala Pasta"<<"\t\tprice -- "<<t*80<<endl;
        }
        }
        else if(z==4)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is Spice Pasta"<<"\t\tprice -- "<<t*90<<endl;
        }
        }
        else if(z==5)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is Half Plate Pasta"<<"\t\tprice -- "<<t*50<<endl;
        }
        }
        else if(z==6)
        {
        for(int i=t;i<=t;i++)
        {
            cout<<"Your order is Full Plate Pasta"<<"\t\tprice -- "<<t*130<<endl;
        }
        }
    }
    else
    {
        cout<<"Enter 1 - 5 number."<<endl;
    }
    int b;
    cout<<"Your Payment is in -- \n1. Cash.\n2. UPI.\n3. card.\n";
    cin>>b;
    if(b==1)
    {
        cout<<"Payment paied in cash.\n"; 
    }
    else if(b==2)
    {
        cout<<"Payment paied through UPI.\n";
    }
    else if(b==3)
    {
        cout<<"\nPayment done through card.\n\n";
    }
    cout<<"\nThank you to visit on Sharma Food Corner.\n\n";
    int k;
     cout << "\nTo continue press 1 key..To exit press 2 key: ";
    cin >> k;
     if (k == 1)
    {
        system("cls");
        main();
    }
    else if(k==2)
    {
         system("cls");
    }
}