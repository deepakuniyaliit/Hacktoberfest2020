#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream>
#include<process.h>
#include<windows.h>
#include<iostream>
using namespace std;

class product               //Main Class
{
    int pno;                //Product Number
    char name[50];          //Name of Product
    float price,qty,tax;    //Price, Quantity,

 public:

    void add_product()
    {
        cout<<"\n Please Enter The Product No.of The Product: ";
        cin>>pno;
        cout<<"\n\nPlease Enter The Name of The Product: ";
        gets(name);
        cout<<"\n Please Enter The Price of The Product: ";
        cin>>price;
    }

    void show_product()
    {
        cout<<"\nThe Product No. of The Product:"<<pno;
        cout<<"\nThe Name of The Product:";
        puts(name);
        cout<<"\nThe Price of The Product: "<<price;
    }

    int retpno()
    {
        return pno;
    }

    float retprice()
    {
        return price;
    }

    char* retname()
    {
        return name;
    }
};


fstream fp;             //Globally Declared Stream Values
product pr;


    void write_product()
    {
        fp.open("Cafe.dat",ios::out|ios::app);
        pr.add_product();
        fp.write((char*)&pr,sizeof(product));
        fp.close();
        cout<<"\n\nThe Product Has Been Added ";
        getche();
    }

    void display_all()                      //To read all records from file
    {

        cout<<"\n\n\n\t\tDISPLAY ALL RECORD\n\n";
        fp.open("Cafe.dat",ios::in);

        while(fp.read((char*)&pr,sizeof(product)))
        {
            pr.show_product();
            cout<<"\n\n________________________________\n";
            getche();
        }

        fp.close();
        getche();
    }
    void display_sp(int n)                  //To read specific record
    {
        int flag=0;
        fp.open("Cafe.dat",ios::in);

        while(fp.read((char*)&pr,sizeof(product)))
        {
            if(pr.retpno()==n)
            {
                pr.show_product();
                flag=1;
            }
        }

        fp.close();
        if(flag==0)
            cout<<"\n\nSorry!!! Record not exist";
        getche();
    }

    void modify_product()                   //To Modify the records
    {
        int no,found=0;
        cout<<"\n\n\t MODIFY PRODUCT";
        cout<<"\n\n\tPlease Enter The Product Number: ";
        cin>>no;
        fp.open("Cafe.dat",ios::in|ios::out);
        while(fp.read((char*)&pr,sizeof(product)) && found==0)
        {
            if(pr.retpno()==no)
            {
                pr.show_product();
                cout<<"\nPlease Enter The New Details of Product"<<endl;
                pr.add_product();
                int pos=-1*sizeof(pr);
                fp.seekp(pos,ios::cur);
                fp.write((char*)&pr,sizeof(product));
                cout<<"\n\n\t Record Updated Successfuly";
                found=1;
                getch();
            }
        }

    fp.close();
    if(found==0)
        cout<<"\n\n Sorry !!! Record Not Found ";
    getche();
    }

    void delete_product()
    {
        int no;
        cout<<"\n\n\n\n DELETE PRODUCT";
        cout<<"\n\n Please Enter The product no. of The Product You Want to Delete : ";
        cin>>no;

        fp.open("Cafe.dat",ios::in|ios::out);
        fstream fp2;
        fp2.open("Temp.dat",ios::out);
        fp.seekg(0,ios::beg);

        while(fp.read((char*)&pr,sizeof(product)))
        {
            if(pr.retpno()!=no)
            {
                fp2.write((char*)&pr,sizeof(product));
            }
        }

        fp2.close();
        fp.close();
        remove("Cafe.dat");
        rename("Temp.dat","Cafe.dat");
        cout<<"\n\n\tRecord Deleted Successfully ...";
        getche();
    }

    void menu()                 //To display the Price List
    {
        fp.open("Cafe.dat",ios::in);
        if(!fp)
        {
            cout<<"ERROR!!! FILE COULD NOT BE OPEN\n\n\n First Add A Product";
            cout<<"\n\n\n Program is closing...";
            getche();

        }

        cout<<"\n\n\t\tProduct MENU\n\n";
        cout<<"_____________________________________\n";
        cout<<"P.NO.\tNAME\t\tPRICE\n";
        cout<<"______________________________________\n";
        while(fp.read((char*)&pr,sizeof(product)))
        {
            cout<<pr.retpno()<<"\t\t"<<pr.retname()<<"\t\t"<<pr.retprice()<<endl;
        }
        fp.close();
    }

    void place_order()
    {
        int order_arr[50],quan[50],c=0;
        float amt,total=0;
        char ch='Y';
        menu();
        cout<<"\n_____________________________________";
        cout<<"\n PLACE YOUR ORDER";
        cout<<"\n_____________________________________\n";

        do
        {
            cout<<"\n\nEnter The Product No.Of The Product:";
            cin>>order_arr[c];
            cout<<"\nEnter The Quantity : ";
            cin>>quan[c];
            c++;
            cout<<"\nDo You Want To Order More Products ? (y/n): ";
            cin>>ch;
        }
        while(ch=='y'||ch=='Y');
        cout<<"\n\n********************BILL**********************\n";

        for(int x=0;x<=c;x++)
        {
            fp.open("Cafe.dat",ios::in);
            fp.read((char*)&pr,sizeof(product));
            while(!fp.eof())
            {
                if(pr.retpno()==order_arr[x])
                {
                    amt=pr.retprice()*quan[x];
                    cout<<"\nProduct Number: "<<order_arr[x]<<"\nProduct Name:"<<pr.retname()<<"\nQuantity:"<<quan[x]<<"\nPrice: "<<pr.retprice();
                    total=amt;
                }

                fp.read((char*) &pr,sizeof(product));
                }
            fp.close();
            }
            cout<<"\n\n\t\t\t\t\tTOTAL="<<total;
            cout<<"\n\n\n\nTHANK YOU FOR PLACING ORDER";
            getche();
        }

    void admin_menu()
    {

        char ch2;
        cout<<"\n\n\nADMINISTRATOR MENU";
        cout<<"\n\n\t1.ADD PRODUCT";
        cout<<"\n\n\t2.DISPLAY ALL PRODUCTS";
        cout<<"\n\n\t3.PRODUCT DETAILS";
        cout<<"\n\n\t4. MODIFY PRODUCT";
        cout<<"\n\n\t5.DELETE PRODUCT";
        cout<<"\n\n\t6.VIEW PRODUCT MENU";
        cout<<"\n\n\t7.BACK TO MAIN MENU";
        cout<<"\n\n\tPlease Enter Your Choice (1-7)";
        ch2=getche();
        switch(ch2)
        {
            case '1': write_product();
                    break;

            case '2': display_all();
                    break;

            case '3': int num;
                    cout<<"\n\n\tEnter The Product No:";
                    cin>>num;
                    display_sp(num);
                    break;

            case '4': modify_product();
                    break;

            case '5': delete_product();
                    break;

            case '6': menu();
                    getche();
            case '7':
                    break;
            default:
                    cout<<"\a";
                    admin_menu();
        }

    }
    int main()
    {
        char ch;
        do
        {
            cout<<"\n\n\n*************CAFETERIA MANAGEMENT SYSTEM**************";
            cout<<"\n\n\n\tMAIN MENU";
            cout<<"\n\n\t1.CUSTOMER";
            cout<<"\n\n\t2.ADMINISTRATOR MENU";
            cout<<"\n\n\t3.EXIT";
            cout<<"\n\n\tPlease Select Your Option (1-3): ";
            ch=_getche();
            switch(ch)
            {
                case '1':place_order();
                        _getche();
                        break;

                case '2':admin_menu();
                        break;

                case '3':cout<<"\and Thank You Visit Again...";
                        cout<<"NesCafe";
                        _getche();

                default:cout<<"\a";
            }
        }
        while(ch!='3');
    }
