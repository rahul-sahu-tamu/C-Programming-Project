#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<dos.h>
class graphics
{
  public:
  void mainframe()		//Mainframe.
  {
	gotoxy(12,2);
	textcolor(4);
	cprintf("B H A R A T    S A N C H A R    N I G A M    L I M I T E D");
	textcolor(7);
	for(int x=3;x<=21;x++)
	{
		gotoxy(10,x);
		cout<<"บ";
		gotoxy(70,x);
		cout<<"บ";
	}
	for(x=10;x<=70;x++)
	{
		gotoxy(x,3);
		if(x==10)
			cout<<"ษ";
		else if(x==70)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,22);
		if(x==10)
			cout<<"ศ";
		else if(x==70)
			cout<<"ผ";
		else
			cout<<"อ";
	}
	gotoxy(30,23);
	textcolor(9);
	cprintf("PROJECT DEVELOPED BY:");
	gotoxy(18,24);
	cprintf("þRAHUL SAHU  þSHANCHI BAJPAI  þSHUBHAM SHUKLA");
	textcolor(7);
  }
  void menu()			//Menu options and frame.
  {     gotoxy(34,4);
	textcolor(2);
	cprintf("ฎฎฎ MENU ฏฏฏ");
	textcolor(7);
	for(int x=5;x<=20;x++)
	{
		gotoxy(22,x);
		cout<<"บ";
		gotoxy(58,x);
		cout<<"บ";
	}
	for(x=22;x<=58;x++)
	{
		gotoxy(x,5);
		if(x==22)
			cout<<"ษ";
		else if(x==58)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,20);
		if(x==22)
			cout<<"ศ";
		else if(x==58)
			cout<<"ผ";
		else
			cout<<"อ";
	}
	gotoxy(26,7);
	cout<<"1 : New Customer Account.";
	gotoxy(26,8);
	cout<<"2 : List All Customers.";
	gotoxy(26,9);
	cout<<"3 : Search Customer Account.";
        gotoxy(26,10);
        cout<<"4 : Edit Customer Account.";
	gotoxy(26,11);
	cout<<"5 : Call Entries.";
	gotoxy(26,12);
	cout<<"6 : Bill Generate.";
	gotoxy(26,13);
	cout<<"7 : Bill Details.";
	gotoxy(26,14);
	cout<<"8 : Receipt.";
	gotoxy(26,15);
	cout<<"9 : Delete Account.";
	gotoxy(26,16);
	cout<<"10: Delete All Accounts.";
        gotoxy(26,17);
        cout<<"11: Exit.";
	gotoxy(26,19);
	cout<<"Enter your choice:";
  }
  void frame1()			//Frame for customer details.
  {
	for(int x=5;x<=20;x++)
	{
		gotoxy(19,x);
		cout<<"บ";
		gotoxy(61,x);
		cout<<"บ";
	}
	for(x=19;x<=61;x++)
	{
		gotoxy(x,5);
		if(x==19)
			cout<<"ษ";
		else if(x==61)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,20);
		if(x==19)
			cout<<"ศ";
		else if(x==61)
			cout<<"ผ";
		else
			cout<<"อ";
	}

		gotoxy(22,7);
		cout<<"Customer Name  :";
		gotoxy(22,9);
		cout<<"Address        :";
		gotoxy(22,11);
		cout<<"City           :";
		gotoxy(22,13);
		cout<<"State          :";
		gotoxy(22,15);
		cout<<"Pin code       :";
		gotoxy(22,17);
		cout<<"AccountNo.     :";
		gotoxy(22,19);
		cout<<"Telephone No.  :";
  }

  void frame2()			//Frame to generate list of all accounts.
  {
	for(int x=2;x<=25;x++)
	{
		gotoxy(2,x);
		cout<<"บ";
		gotoxy(80,x);
		cout<<"บ";
	}
	for(x=2;x<=80;x++)
	{
		gotoxy(x,2);
		if(x==2)
			cout<<"ษ";
		else if(x==80)
			cout<<"ป";
		else
			cout<<"อ";
		if(x!=2&&x!=80)
		{
			gotoxy(x,4);
			cout<<"อ";
		}
		gotoxy(x,25);
		if(x==2)
			cout<<"ศ";
		else if(x==80)
			cout<<"ผ";
		else
			cout<<"อ";
	}
	for(x=2;x<=23;x++)
	{
		gotoxy(22,x);
		cout<<"บ";
		gotoxy(35,x);
		cout<<"บ";
		gotoxy(62,x);
		cout<<"บ";
	}
	for(x=3;x<79;x++)
	{
	       gotoxy(x,1);
		if(x==22)
			cout<<"ห";
		else if(x==35)
			cout<<"ห";
		else if(x==62)
			cout<<"ห";
		else
			cout<<"อ";
		gotoxy(x,24);
		if(x==22)
			cout<<"ส";
		else if(x==35)
			cout<<"ส";
		else if(x==62)
			cout<<"ส";
		else
			cout<<"อ";
	    }

  }
  void frame3()			//Frame for call deatils and billing.
  {
	for(int x=5;x<=20;x++)
	{
		gotoxy(13,x);
		cout<<"บ";
		gotoxy(67,x);
		cout<<"บ";
	}
	for(x=13;x<=67;x++)
	{
		gotoxy(x,5);
		if(x==13)
			cout<<"ษ";
		else if(x==67)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,20);
		if(x==13)
			cout<<"ศ";
		else if(x==67)
			cout<<"ผ";
		else
			cout<<"อ";
	}

  }
  void frame4()			//Frame to display short info.
  {
	for(int x=11;x<=13;x++)
	{
		gotoxy(18,x);
		cout<<"บ";
		gotoxy(58,x);
		cout<<"บ";
	}
	for(x=18;x<=58;x++)
	{
		gotoxy(x,11);
		if(x==18)
			cout<<"ษ";
		else if(x==58)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,13);
		if(x==18)
			cout<<"ศ";
		else if(x==58)
			cout<<"ผ";
		else
			cout<<"อ";
	}
  }
  void frame5()			//Frame for Receipt.
  {
	for(int x=5;x<=20;x++)
	{
		gotoxy(19,x);
		cout<<"บ";
		gotoxy(61,x);
		cout<<"บ";
	}
	for(x=19;x<=61;x++)
	{
		gotoxy(x,5);
		if(x==19)
			cout<<"ษ";
		else if(x==61)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,20);
		if(x==19)
			cout<<"ศ";
		else if(x==61)
			cout<<"ผ";
		else
			cout<<"อ";
	}
  }

};
class customers			//For Customer account details.
{
   public:
   char name[20],addrs[50],city[15],state[15],pin[10],acno[15],telno[15];
   void newcustomer()		//To input customer details.
   {
    gotoxy(31,4);
    textcolor(2);
    cprintf("ฎฎฎ NEW ACCOUNT ฏฏฏ");
    textcolor(7);
    gotoxy(38,7);
    gets(name);
    gotoxy(38,9);
    gets(addrs);
    gotoxy(38,11);
    gets(city);
    gotoxy(38,13);
    gets(state);
    gotoxy(38,15);
    gets(pin);
    gotoxy(38,17);
    gets(acno);
    gotoxy(38,19);
    gets(telno);
   }
   void search()		//To output search results.
   {
    gotoxy(28,4);
    textcolor(2);
    cprintf("ฎฎฎ CUSTOMER DETAILS ฏฏฏ");
    textcolor(7);
    gotoxy(38,7);
    cout<<name;
    gotoxy(38,9);
    cout<<addrs;
    gotoxy(38,11);
    cout<<city;
    gotoxy(38,13);
    cout<<state;
    gotoxy(38,15);
    cout<<pin;
    gotoxy(38,17);
    cout<<acno;
    gotoxy(38,19);
    cout<<telno;
   }
   void list(int y)		//To output the generated list.
   {
	gotoxy(4,y);
	cout<<name;
	gotoxy(24,y);
	cout<<acno;
	gotoxy(37,y);
	cout<<addrs;
	gotoxy(66,y);
	cout<<telno;

   }
   void edit()			//To get new input on an existing account.
   {
    gotoxy(31,4);
    textcolor(2);
    cprintf("ฎฎฎ EDIT ACCOUNT ฏฏฏ");
    textcolor(7);
    gotoxy(32,5);
    cout<<"Enter New Details";
    gotoxy(38,17);
    cout<<acno;
    gotoxy(38,7);
    gets(name);
    gotoxy(38,9);
    gets(addrs);
    gotoxy(38,11);
    gets(city);
    gotoxy(38,13);
    gets(state);
    gotoxy(38,15);
    gets(pin);
    gotoxy(38,19);
    gets(telno);
   }
};
class bills			//For Call Details.
{
 public:char telno[15],rpd[10];
	long prev,pres;
	int dy;
	double cbcalls,st,fine,total,cbs,rpno;
 void callentries()		//To input call details.
   {
     gotoxy(28,4);
     textcolor(2);
     cprintf("ฎฎฎ CALL ENTRIES ฏฏฏ");
     textcolor(7);
     gotoxy(40,6);
     cin>>telno;
     gotoxy(40,10);
     cin>>prev;
     gotoxy(40,12);
     cin>>pres;
     cbcalls=(pres-prev)-50;
     if(cbcalls<0)
     cbcalls=0;
     gotoxy(40,16);
     cout<<cbcalls;
     gotoxy(40,18);

     cbs=(cbcalls*1.50);
     cout<<cbs;
   }
 void bill()			//To input bill details.
   {
     gotoxy(28,4);
     textcolor(2);
     cprintf("ฎฎฎ CUSTOMER's Bill ฏฏฏ");
     textcolor(7);
     st=(8*cbs)/100;
     gotoxy(40,6);
     cout<<telno;
     gotoxy(40,8);
     cout<<cbs;
     gotoxy(40,10);
     cout<<st;
     gotoxy(40,12);
     if(cbs!=0)
      cin>>dy;
     else
      cout<<0;
     gotoxy(40,14);
     if(dy>=1&&dy<=5)
     {
	fine=0;
	textcolor(2);
	cprintf("No surcharges");
	textcolor(7);
     }
     else if(dy>=6&&dy<=10)
     {
	fine=(0.10)*cbs;
	cout<<fine;
     }
     else if(dy>=11&&dy<=15)
     {
	fine=(0.15)*cbs;
	cout<<fine;
     }
     else if(dy>=16&&dy<=20)
     {
	fine=(0.20)*cbs;
	cout<<fine;
     }
     else
     {  if(cbs!=0)
	{
		fine=(0.25)*cbs;
		cout<<fine;
		textcolor(4);
		cprintf(" + Disconection...");
		textcolor(7);
	}
	else
		cout<<0;

     }
     total=st+cbs+fine;
     gotoxy(40,16);

     cout<<total;
     gotoxy(40,18);
     if(total!=0)
      gets(rpd);
     else
      cout<<"--/--/----";
    }
 void bid()			//To display the bill details.
   {
     gotoxy(28,4);
     textcolor(2);
     cprintf("ฎฎฎ BILL DETAILS ฏฏฏ");
     textcolor(7);
     gotoxy(40,6);
     cout<<telno;
     gotoxy(40,8);
     cout<<cbs;
     gotoxy(40,10);
     cout<<st;
     gotoxy(40,12);
     cout<<dy;
     gotoxy(40,14);
     cout<<fine;
     gotoxy(40,16);
     cout<<total;
     gotoxy(40,18);
     cout<<rpd;
   }
   void recipt()		//To diplay the receipt.
   {
     gotoxy(28,4);
     textcolor(2);
     cprintf("ฎฎฎ PAYMENT RECEIPT ฏฏฏ");
     textcolor(7);
     gotoxy(40,6);
     cout<<rpno;
     gotoxy(40,12);
     cout<<total;
     gotoxy(40,15);
     cout<<rpd;
     gotoxy(40,18);
     cout<<telno;
   }

};
void nwcstmr()			//To store customer account details.
{
  fstream file;
  file.open("BSNL_C.dat",ios::app|ios::binary);
  customers C;
  C.newcustomer();
  file.seekp(0,ios::end);
  file.write((char*)&C,sizeof(C));
  gotoxy(32,21);
  textcolor(2);
  cprintf("1 Record stored....");
  textcolor(7);
  file.close();
}
void lst()                      //To generate the list from database.
{
 fstream file;
 file.open("BSNL_C.dat",ios::in|ios::binary);
 customers C;
 graphics G;
 G.mainframe();
 G.frame4();
 gotoxy(25,12);
 textcolor(3);
 cprintf("Generating List...Plz WAIT.");
 textcolor(7);
 delay(1500);
 clrscr();
 G.frame2();
 gotoxy(9,2);
 textcolor(2);
 cprintf("Name    ");
 gotoxy(26,2);
 cprintf("Acc.No. ");
 gotoxy(45,2);
 cprintf("Address.");
 gotoxy(68,2);
 cprintf("Tel.No. ");
 textcolor(7);
 int y=4;
 file.seekg(0,ios::beg);
 while(file.read((char*)&C,sizeof(C)))
 {
  C.list(y++);
 }
 file.close();
}
void srch()			//To search an account in the database.
{
 fstream file;
 customers C;
 graphics G;
 char tn[10];
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Tel.No.   :  ");
 textcolor(7);
 cin>>tn;
 file.open("BSNL_C.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 int flag=0;
 clrscr();
 G.mainframe();
 while(file.read((char*)&C,sizeof(C)))
 {
  if(strcmp(C.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  G.frame1();
  C.search();
 }
  file.close();
}
void edt()                      //To store new details on an account.
{
  fstream file;
 customers C;
 graphics G;
 char ac[10];
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Acc.No.   :  ");
 textcolor(7);
 gets(ac);
 file.open("BSNL_C.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 int flag=0;int r=0;
 clrscr();
 G.mainframe();
 while(file.read((char*)&C,sizeof(C)))
 {
  r++;
  if(strcmp(C.acno,ac)==0)
  {
   flag++;
   G.mainframe();
   G.frame1();
   C.search();
   getch();
   break;
  }
 }
 file.close();
 if(flag==0)
 {
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  file.open("BSNL_C.dat",ios::in|ios::out|ios::binary);
  int offset=(r-1)*sizeof(C);
  file.seekp(offset,ios::beg);
  clrscr();
  G.mainframe();
  G.frame1();
  C.edit();
  file.write((char*)&C,sizeof(C));
  gotoxy(32,21);
  textcolor(2);
  cprintf("1 Record Updated...");
  textcolor(7);
  file.close();

 }
}
void cllentris()                //To store call details in the database.
{
 graphics G;
 bills B;
 fstream file;
 file.open("BSNL_D.dat",ios::app|ios::binary);
 G.frame3();
 gotoxy(15,6);
 cout<<"Tel.No.                :";
 gotoxy(15,8);
 cout<<"Free Calls Granted     : 50";
 gotoxy(15,10);
 cout<<"Previous Calls         :";
 gotoxy(15,12);
 cout<<"Present Calls          :";
 gotoxy(15,14);
 cout<<"Cost per Call          : 1.5";
 gotoxy(15,16);
 cout<<"Total Chargeable Calls :";
 gotoxy(15,18);
 cout<<"Call Costs             :";
 B.callentries();
 file.seekp(0,ios::end);
 file.write((char*)&B,sizeof(B));
 gotoxy(32,21);
 textcolor(2);
 cprintf("1 Record stored....");
 textcolor(7);
 file.close();
}
void bll()                      //To store bill details in the database.
{
 bills B;
 graphics G;
 char tn[15];
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Tel.No.   :  ");
 textcolor(7);
 gets(tn);
 fstream file;
 file.open("BSNL_D.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 int flag=0;
 clrscr();
 G.mainframe();
 while(file.read((char*)&B,sizeof(B)))
 {
  if(strcmp(B.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 file.close();

 if(flag==0)
 {
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  G.frame3();
  gotoxy(15,6);
  cout<<"Tel.No.              :";
  gotoxy(15,8);
  cout<<"Call Costs           :";
  gotoxy(15,10);
  cout<<"Service Tax          :";
  gotoxy(15,12);
  cout<<"No. of days Late     :";
  gotoxy(15,14);
  cout<<"Surcharges           :";
  gotoxy(15,16);
  cout<<"Total Amount         :";
  gotoxy(15,18);
  cout<<"Date of Payment      :";
  file.open("BSNL_E.dat",ios::app|ios::binary);
  file.seekp(0,ios::end);
  B.bill();
  file.write((char*)&B,sizeof(B));
  gotoxy(32,21);
  textcolor(2);
  cprintf("1 Record stored....");
  textcolor(7);
  file.close();
 }
}
void bild()                     //To get bill details from database.
{
 fstream file;
 file.open("BSNL_E.dat",ios::in|ios::binary);
 bills B;
 graphics G;
 char tn[15];int flag=0;
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Tel.No.   :  ");
 textcolor(7);
 gets(tn);
 while(file.read((char*)&B,sizeof(B)))
 {
  if(strcmp(B.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  clrscr();
  G.mainframe();
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  clrscr();
  G.mainframe();
  G.frame3();
  gotoxy(15,6);
  cout<<"Tel.No.              :";
  gotoxy(15,8);
  cout<<"Call Costs           :";
  gotoxy(15,10);
  cout<<"Service Tax          :";
  gotoxy(15,12);
  cout<<"No. of days Late     :";
  gotoxy(15,14);
  cout<<"Surcharges           :";
  gotoxy(15,16);
  cout<<"Total Amount         :";
  gotoxy(15,18);
  cout<<"Date of Payment      :";
  B.bid();
 }
 file.close();
}
void delsin()
{
 clrscr();
 fstream file;
 fstream temp;
 file.open("BSNL_C.dat",ios::in|ios::binary);
 temp.open("tempfile.dat",ios::out|ios::binary);
 customers C;
 graphics G;
 G.mainframe();
 char tn[15];int flag=0,flag2=0,flag3=0;
 int ch;
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Tel.No.   :  ");
 textcolor(7);
 gets(tn);
 while(file.read((char*)&C,sizeof(C)))
 {
  if(strcmp(C.telno,tn)==0)
  {
   flag++;
   clrscr();
   G.mainframe();
   G.frame1();
   C.search();
   getch();
   label:
   clrscr();
   G.mainframe();
   gotoxy(20,9);
   cout<<"ษอออออออออออออออออออออออออออออออออออออออออป";
   gotoxy(20,10);
   cout<<"บ  This Record will be ";
   textcolor(4);
   cprintf("DELETED");
   textcolor(7);
   cout<<"...Proceed? บ";
   gotoxy(20,11);
   cout<<"ศอออออออออออออออออออออออออออออออออออออออออผ";
   gotoxy(28,12);
   cout<<"ษอออออออป       ษออออออป";
   gotoxy(28,13);
   cout<<"บ 1.";
   textcolor(12);
   cprintf("YES");
   textcolor(7);
   cout<<" บ       บ 2.";
   textcolor(2);
   cprintf("NO");
   textcolor(7);
   cout<<" บ";
   gotoxy(28,14);
   cout<<"ศอออออออผ       ศออออออผ";
   gotoxy(34,15);
   cout<<"ษออออออออออออป";
   gotoxy(34,16);
   cout<<"บ -->        บ";
   gotoxy(34,17);
   cout<<"ศออออออออออออผ";
   gotoxy(41,16);
   cin>>ch;
   switch(ch)
   {
    case 1:
    	   fstream file2,file3,temp2,temp3;
           bills B;
           file2.open("BSNL_D.dat",ios::in|ios::binary);
           temp2.open("tempfile2.dat",ios::in|ios::out|ios::binary);
           file3.open("BSNL_E.dat",ios::in|ios::binary);
           temp3.open("tempfile3.dat",ios::in|ios::out|ios::binary);
           file2.seekg(0,ios::beg);
           while(file2.read((char*)&B,sizeof(B)))
           {
	   	if(strcmp(B.telno,tn)==0)
 		 {
                     flag2++;

                 }
             else
             {    temp2.seekp(0,ios::end);
                  temp2.write((char*)&B,sizeof(B));
             }

           }
           remove("BSNL_D.dat");
           rename("tempfile2.dat","BSNL_D.dat");
           file3.seekg(0,ios::beg);
           while(file3.read((char*)&B,sizeof(B)))
           {
            if(strcmp(B.telno,tn)==0)
            	{
             	     flag3++;

                }
            else
            {
            	temp3.seekp(0,ios::end);
                temp3.write((char*)&B,sizeof(B));
            }
           }
           remove("BSNL_E.dat");
           rename("tempfile3.dat","BSNL_E.dat");
	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ   Deleting...Plz WAIT   บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 delay(1500);
	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ ";
	 textcolor(4);
	 cprintf("  Record is Deleted...");
	 textcolor(7);
	 cout<<"  บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 break;
  case 2:temp.seekp(0,ios::end);
         temp.write((char*)&C,sizeof(C));
  	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ   ";
	 textcolor(2);
	 cprintf("  Record is Safe...");
	 textcolor(7);
	 cout<<"   บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 break;
  default:clrscr();
	  G.mainframe();
	  G.frame4();
	  gotoxy(30,12);
	  textcolor(4);
	  cprintf("Invalid Entry!!!");
	  textcolor(7);
	  getch();
	  goto label;
  }

  }
  else
  {
   temp.seekp(0,ios::end);
   temp.write((char*)&C,sizeof(C));
  }
 }
 file.close();
 temp.close();
 if(flag==0)
 {
  clrscr();
  G.mainframe();
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  remove("BSNL_C.dat");
  rename("tempfile.dat","BSNL_C.dat");
 }
}
void del()                      //To delete all existing accounts in database.
{
 int ch;
 label:
 graphics G;
 clrscr();
 G.mainframe();
 gotoxy(20,9);
 cout<<"ษอออออออออออออออออออออออออออออออออออออออออป";
 gotoxy(20,10);
 cout<<"บ  All Records will be ";
 textcolor(4);
 cprintf("DELETED");
 textcolor(7);
 cout<<"...Proceed? บ";
 gotoxy(20,11);
 cout<<"ศอออออออออออออออออออออออออออออออออออออออออผ";
 gotoxy(28,12);
 cout<<"ษอออออออป       ษออออออป";
 gotoxy(28,13);
 cout<<"บ 1.";
 textcolor(12);
 cprintf("YES");
 textcolor(7);
 cout<<" บ       บ 2.";
 textcolor(2);
 cprintf("NO");
 textcolor(7);
 cout<<" บ";
 gotoxy(28,14);
 cout<<"ศอออออออผ       ศออออออผ";
 gotoxy(34,15);
 cout<<"ษออออออออออออป";
 gotoxy(34,16);
 cout<<"บ -->        บ";
 gotoxy(34,17);
 cout<<"ศออออออออออออผ";
 gotoxy(41,16);
 cin>>ch;
 switch(ch)
 {
  case 1:
	 fstream file;
	 file.open("BSNL_C.dat",ios::out|ios::binary);
	 file.close();
	 file.open("BSNL_D.dat",ios::out|ios::binary);
	 file.close();
	 file.open("BSNL_E.dat",ios::out|ios::binary);
	 file.close();
	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ   Deleting...Plz WAIT   บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 delay(1500);
	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ ";
	 textcolor(4);
	 cprintf(" All Records Deleted...");
	 textcolor(7);
	 cout<<" บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 break;
  case 2:gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ   ";
	 textcolor(2);
	 cprintf(" All Records Safe...");
	 textcolor(7);
	 cout<<"  บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 break;
  default:clrscr();
	  G.mainframe();
	  G.frame4();
	  gotoxy(30,12);
	  textcolor(4);
	  cprintf("Invalid Entry!!!");
	  textcolor(7);
	  getch();
	  goto label;
  }
}
void recpt()                    //To generate the receipt from database.
{
 fstream file;
 bills B;
 customers C;
 graphics G;
 char tn[15],n[20];
 int flag=0,flag1=0;
 G.frame4();
 gotoxy(23,12);
 textcolor(2);
 cprintf("Enter Tel.No.   :  ");
 textcolor(7);
 gets(tn);
 file.open("BSNL_C.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 while(file.read((char*)&C,sizeof(C)))
 {
  if(strcmp(C.telno,tn)==0)
  {
   flag1++;
   break;
  }
 }
 if(flag1==0)
	strcpy(n,"BSNL USER");
 else
	strcpy(n,C.name);
 file.close();
 file.open("BSNL_E.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 while(file.read((char*)&B,sizeof(B)))
 {
  if(strcmp(B.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  clrscr();
  G.mainframe();
  G.frame4();
  gotoxy(27,12);
  textcolor(4);
  cprintf("RECORD DOES NOT EXIST!!!");
  textcolor(7);
 }
 else
 {
  clrscr();
  G.mainframe();
  G.frame5();
  gotoxy(22,6);
  cout<<"Receipt No.     :";
  gotoxy(22,9);
  cout<<"Customer Name   : "<<n;
  gotoxy(22,12);
  cout<<"Total Payment   :";
  gotoxy(22,15);
  cout<<"Receipt Date    :";
  gotoxy(22,18);
  cout<<"Tel.No.         :";
  B.recipt();
 }
 file.close();
}
void ext()
{
 int ch;
 label:
 graphics G;
 clrscr();
 G.mainframe();
 gotoxy(20,9);
 cout<<"ษอออออออออออออออออออออออออออออออออออออออออป";
 gotoxy(20,10);
 cout<<"บ     Are You Sure You Want To ";
 textcolor(4);
 cprintf("EXIT");
 textcolor(7);
 cout<<" ?     บ";
 gotoxy(20,11);
 cout<<"ศอออออออออออออออออออออออออออออออออออออออออผ";
 gotoxy(28,12);
 cout<<"ษอออออออป       ษออออออป";
 gotoxy(28,13);
 cout<<"บ 1.";
 textcolor(12);
 cprintf("YES");
 textcolor(7);
 cout<<" บ       บ 2.";
 textcolor(2);
 cprintf("NO");
 textcolor(7);
 cout<<" บ";
 gotoxy(28,14);
 cout<<"ศอออออออผ       ศออออออผ";
 gotoxy(34,15);
 cout<<"ษออออออออออออป";
 gotoxy(34,16);
 cout<<"บ -->        บ";
 gotoxy(34,17);
 cout<<"ศออออออออออออผ";
 gotoxy(41,16);
 cin>>ch;
 switch(ch)
 {
  case 1:
	 gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ  Compacting...Plz WAIT. บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 delay(1300);
	 clrscr();
	 exit(0);
	 break;
  case 2:gotoxy(27,18);
	 cout<<"ษอออออออออออออออออออออออออป";
	 gotoxy(27,19);
	 cout<<"บ Redirecting...Plz.WAIT. บ";
	 gotoxy(27,20);
	 cout<<"ศอออออออออออออออออออออออออผ";
	 delay(1000);
	 break;
  default:clrscr();
	  G.mainframe();
	  G.frame4();
	  gotoxy(30,12);
	  textcolor(4);
	  cprintf("Invalid Entry!!!");
	  textcolor(7);
	  getch();
	  goto label;
  }
}
void progress()                 //For Loading screen.
{
 gotoxy(29,6);
 cout<<"ษอออป ษออออ ษ   บ บ";
 gotoxy(29,7);
 cout<<"บอออบ ศอออป บ บ บ บ";
 gotoxy(29,8);
 cout<<"ศอออผ ออออผ บ   ผ ศออออ";

 gotoxy(31,10);
 cout<<"L O A D I N G...";
 int x,y;
 gotoxy(14,11);
 cout<<"ษอออออออออออออออออออออออออออออออออออออออออออออออออออป";
 gotoxy(14,12);
 cout<<"บ                                                   บ";
 gotoxy(14,13);
 cout<<"ศอออออออออออออออออออออออออออออออออออออออออออออออออออผ";
 gotoxy(25,15);
 cout<<"C O N N E C T I N G    I N D I A";
 for(x=15,y=0;x<=65;x++,y+=2)
 {
  delay(70);
  gotoxy(47,10);
  cout<<y<<"%";
  gotoxy(x,12);
  textcolor(9);
  cprintf("Ý");
 }
 textcolor(4);
 gotoxy(28,21);
 cprintf("ฎฎฎ LOADING COMPLETE...ฏฏฏ");
 gotoxy(24,22);
 cprintf("ฎฎฎ PRESS ANY KEY TO CONTINUE...ฏฏฏ");
 textcolor(7);
 getch();
}
void login()			//For Login Window.
{
 int flag=0;
 for(int i=1;i<=3;i++)
 {
 clrscr();
 char un[20],pwd[10];
 char oun[20]="RADHA";
 char opwd[10]="KRISHN";
 for(int x=9;x<=20;x++)
	{
		gotoxy(22,x);
		cout<<"บ";
		gotoxy(58,x);
		cout<<"บ";
	}
	for(x=22;x<=58;x++)
	{
		gotoxy(x,9);
		if(x==22)
			cout<<"ษ";
		else if(x==58)
			cout<<"ป";
		else
			cout<<"อ";
		if(x!=22&&x!=58)
		 {
		     gotoxy(x,11);
		     cout<<"อ";
		 }
		gotoxy(x,20);
		if(x==22)
			cout<<"ศ";
		else if(x==58)
			cout<<"ผ";
		else
			cout<<"อ";
	}
 gotoxy(23,8);
 cout<<"<<ฎฎฎฎฎฎ<<< L O G   I N >>>ฏฏฏฏฏฏ>>";
 gotoxy(23,10);
 textcolor(2);
 cprintf("ฏฏฏฏฏฏฏฏฏฏ B   S   N   L ฎฎฎฎฎฎฎฎฎฎ");
 textcolor(7);
 gotoxy(25,13);
 cout<<"USER NAME       :  ";
 gotoxy(25,15);
 cout<<"PASSWORD(6 Ch.) :  ";
 gotoxy(25,17);
 textcolor(4);
 cprintf("Tries Left      :  ");
 cout<<3-flag;
 textcolor(7);
 gotoxy(43,13);
 gets(un);
 gotoxy(43,15);
 for(int r=0,n=43;r<=5;r++,n++)
 {
  gotoxy(n,15);
  pwd[r]=getch();
  cout<<"*";
 }
 pwd[r]='\0';
 if((strcmp(un,oun)!=0)||(strcmp(pwd,opwd)!=0))
 {
  ++flag;
  clrscr();
  gotoxy(20,11);
  cout<<"ษออออออออออออออออออออออออออออออออออออป";
  gotoxy(20,12);
  cout<<"บ  INVALID USERNAME OR PASSWORD!!!   บ";
  gotoxy(20,13);
  cout<<"บ         ";
  textcolor(4);
  cprintf(" ACCESS DENIED!!!");
  textcolor(7);
  cout<<"          บ";
  gotoxy(20,14);
  cout<<"ศออออออออออออออออออออออออออออออออออออผ";
 }
 else
 {
  clrscr();
  gotoxy(20,11);
  cout<<"ษออออออออออออออออออออออออออออออออออออป";
  gotoxy(20,12);
  cout<<"บ          ACCESS GRANTED!!!         บ";
  gotoxy(20,13);
  cout<<"บ           ";
  textcolor(2);
  cprintf(" W E L C O M E");
  textcolor(7);
  cout<<"           บ";
  gotoxy(20,14);
  cout<<"ศออออออออออออออออออออออออออออออออออออผ";
  delay(1500);
  break;
 }
 gotoxy(33,16);
 textcolor(4);
 cprintf("Tries left : ");
 cout<<3-flag;
 textcolor(7);
 delay(1700);
 if(flag==3)
 {
  clrscr();
  gotoxy(15,11);
  cout<<"ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออป";
  gotoxy(15,12);
  cout<<"บ  ";
  textcolor(4);
  cprintf("You have entered 3 times wrong username or password.");
  textcolor(7);
  cout<<"  บ";
  gotoxy(15,13);
  cout<<"บ      ";
  textcolor(4);
  cprintf("Sorry we need to close for Security Reasons.");
  textcolor(7);
  cout<<"      บ";
  gotoxy(15,14);
  cout<<"ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ";
  getch();
  clrscr();
  exit(0);
 }
 }
}
void welcome()			//For Welcome Screen.
{
  clrscr();
  graphics G;
  G.frame4();
  gotoxy(27,12);
  textcolor(3);
  cprintf("Initializing...Plz WAIT..");
  textcolor(7);
  delay(1500);
  clrscr();
  textcolor(8);
  gotoxy(22,3);
  cprintf("            ฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,4);
  cprintf("        ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,5);
  cprintf("    ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,6);
  cprintf("ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  gotoxy(22,7);
  cout<<"ษอออออ     ษออออออป     ษอออออออ";
  gotoxy(22,8);
  cout<<"บ          บ      บ     บ     ";
  gotoxy(22,9);
  cout<<"ศออออป     บออออออผ     บ     ";
  gotoxy(22,10);
  cout<<"     บ     บอออออป      บ     ";
  gotoxy(22,11);
  cout<<"อออออผ     บ     บ      ศออออออป";
  gotoxy(22,12);
  cout<<"                 บ             บ";
  gotoxy(22,13);
  cout<<"                 บ             บ";
  gotoxy(22,14);
  cout<<"                               บ";
  gotoxy(22,15);
  cout<<"                        อออออออผ";
  textcolor(9);
  gotoxy(22,12);
  cprintf("ฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,13);
  cprintf("ฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,14);
  cprintf("ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,15);
  cprintf("ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,16);
  cprintf("ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,17);
  cprintf("  ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,18);
  cprintf("    ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,19);
  cprintf("      ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,20);
  cprintf("        ฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(8);
  gotoxy(22,21);
  cprintf("          ฏฏฏฏฏฏฏฏฏฏฏฏ");
  textcolor(9);
  gotoxy(22,22);
  cprintf("            ฏฏฏฏฏฏฏฏ");
  textcolor(7);
  delay(2000);
}
void main ()
{
       	welcome();
      	login();
	clrscr();
      	progress();
	clrscr();
       while(1)
	{
	 int ch;
	clrscr();
	graphics G;
	customers C;
	bills B;
	G.mainframe();
	G.menu();
	cin>>ch;
	fflush(stdin);
	switch(ch)
	{
		case 1: clrscr();
			G.mainframe();
			G.frame1();
			nwcstmr();
			break;
		case 2: clrscr();
			lst();
			break;
		case 3: clrscr();
			G.mainframe();
			srch();
			break;
                case 4: clrscr();
                	G.mainframe();
                        edt();
                        break;
		case 5: clrscr();
			G.mainframe();
			cllentris();
			break;
		case 6: clrscr();
			G.mainframe();
			bll();
			break;
		case 7: clrscr();
			G.mainframe();
			bild();
			break;
		case 8: clrscr();
			G.mainframe();
			recpt();
			break;
                case 9: clrscr();
                	G.mainframe();
                        delsin();
                        break;
	       	case 10: clrscr();
			G.mainframe();
			del();
			break;
		case 11:ext();
			goto lb;
			break;
		default:clrscr();
			G.mainframe();
			G.frame4();
			gotoxy(30,12);
			textcolor(4);
			cprintf("Invalid Entry!!!");
			textcolor(7);
	}
	getch();
	lb:
	}
}