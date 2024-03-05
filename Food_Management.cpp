/* WAP to create class name as Food with using data member fid,fname,fprice,
   fcategory using set and getfunction. create array of object of size 5,
   store food details in it and perform foll. operations.
   case 1: add food details.
   case 2: display food details.
   case 3: display food details whose price range between 100 to 500.
   case 4: search food details using by:
	    case 1: food id.
	    case 2: food name.
	    case 3: food price.
	    case 4: food category.
   case 5: update food details using by:
	    case 1: food id.
	    case 2: food name.
	    case 3: food price.
	    case 4: food category.
   case 6: delete food details using by:
	    case 1: food id.
	    case 2: food name.
	    case 3: food price.
	    case 4: food category.
   case 7: existing the code. */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Food  //class created
 {
   private:
     int fid,fprice,choice;  //class members
     char fname[20],fcategory[20];
   public:
     void setFunction(int id,char category[],char name[],int price)
     {
       fid=id;
       strcpy(fcategory,category);
       strcpy(fname,name);
       fprice=price;
     }
     void getFunction()
     {
       cout<<fid<<"\t"<<fcategory<<"\t"<<fname<<"\t"<<fprice<<"\n";
     }
     int getid()
     {
       return fid;
     }
     char* getCat()
     {
       return fcategory;
     }
     char* getName()
     {
       return fname;
     }
     int getFprice()
     {
       return fprice;
     }
 };
void main() {
   int id,price,i,size=5,choice,ch1,nid,np,j,uid,up,flag=0;
   char name[20],category[20],ncat[20],nm[20],ucat[20],um[20];
   clrscr();
   Food F[5];  //object created
   do {
     cout<<"--------start------------\n";
     cout<<"1.add food details\n";
     cout<<"2.display food details\n";
     cout<<"3.display food details whose price range between 100 to 500\n";
     cout<<"4.search food details by using\n";
     cout<<"5.update food details by using\n";
     cout<<"6.delete food details by using\n";
     cout<<"7.existing the code\n";
     cout<<"---------end-------------\n";
     cout<<"Enter your choice\n";
     cin>>choice;
     switch(choice) {
      case 1:  //case 1
      cout<<"\nEnter food id,category,name and price\n";
      for(i=0;i<size;i++)    //add details
      {
       cin>>id>>category>>name>>price;
	F[i].setFunction(id,category,name,price);
      }
      cout<<"\ndata added successfully\n";
      break;

      case 2:  //case 2
      cout<<"\ndisplay details\n";
      for(i=0;i<size;i++)   //display all details
      {
	F[i].getFunction();
      }
      break;

      case 3:
       cout<<"Display whose price is between 100 to 500\n";
      for(i=0;i<size;i++)   //display details whose price is in 100 to 500
      {
	if(F[i].getFprice()>=100 && F[i].getFprice()<=500)
	{
	  F[i].getFunction();
	 }
      }

      break;

      case 4: //case 4
	    cout<<"\ndisplay our records\n";
	    for(i=0;i<size;i++)   //display all details
	    {
	      F[i].getFunction();
	    }
	    cout<<"1.food id.\n";
	    cout<<"2.food category.\n";
	    cout<<"3.food name.\n";
	    cout<<"4.food price\n";
	    cout<<"Enter your choice for searching food\n";
	    cin>>ch1;
	      switch(ch1)
	      {
		 case 1:  //logic for search food using food id
		  cout<<"\n Enter food id\n";
		  cin>>nid;
		  for(i=0;i<size;i++)
		  {
		    if(F[i].getid()==nid)
		    {
		     flag=1;
		      break;
		    }
		  }
		  if(flag==1){
		   F[i].getFunction();
		  }
		  else{
		   cout<<"\n Food id not found\n";
		  }
		 break;

		 case 2: //logic for search food using food category
		 cout<<"\n Enter food category\n";
		 cin>>ncat;
		 for(i=0;i<size;i++)
		  {
		    if(strcmp(F[i].getCat(),ncat)==0)
		    {
		      flag=1;
		      break;
		    }
		  }
		    if(flag==1){
		     F[i].getFunction();
		    }
		    else {
		     cout<<"\n Food category not found\n";
		    }
		  break;

		  case 3: //logic for search food using food name
		  cout<<"\nEnter food Name\n";
		  cin>>nm;
		   for(i=0;i<size;i++)
		   {
		    if(strcmp(F[i].getName(),nm)==0)
		    {
		      flag=1;
		      break;
		    }
		   }
		     if(flag==1){
		      F[i].getFunction();
		     }
		     else{
		      cout<<"\n Food name not found\n";
		     }
		  break;

		  case 4: //logic for search food using food price
		  cout<<"\nEnter food price\n";
		  cin>>np;
		   for(i=0;i<size;i++)
		   {
		    if(F[i].getFprice()==np)
		    {
		      flag=1;
		      break;
		    }
		   }
		    if(flag==1){
		     F[i].getFunction();
		    }
		    else{
		     cout<<"\n Food price not found\n";
		    }
		  break;

		default:
		cout<<"\n Wrong choice for searching food\n";
	      }
	    break;
      case 5:
	    cout<<"\ndisplay our records\n";
	    for(i=0;i<size;i++)   //display all details
	    {
	      F[i].getFunction();
	    }
	    cout<<"1.food id.\n";
	    cout<<"2.food category.\n";
	    cout<<"3.food name.\n";
	    cout<<"4.food price\n";
	    cout<<"Enter your choice for update data \n";
	    cin>>ch1;
	      switch(ch1)
	      {
		 case 1:
		 cout<<"\n Enter food id which you want to update from data\n";
		  cin>>nid;
		  for(i=0;i<size;i++)
		  {
		    if(F[i].getid()==nid)
		    {
		     flag=1;
		     break;
		    }
		  }
		      if(flag==1) {
		      cout<<"\nEnter new food id\n";
		      cin>>uid;
		      F[i].setFunction(uid,F[i].getCat(),F[i].getName(),F[i].getFprice());
		    }
		      else  {
		      cout<<"\nFood id not found\n";
		    }
		  cout<<"\ndisplay updated details\n";
		  for(i=0;i<size;i++)   //display all details
		  {
		    F[i].getFunction();
		  }
		 break;

		 case 2: //logic for update food using food category
		 cout<<"\n Enter food category which you want to update from data\n";
		 cin>>ncat;
		 for(i=0;i<size;i++)
		  {
		    if(strcmp(F[i].getCat(),ncat)==0)
		    {
		     flag=1;
		     break;
		    }
		  }
		    if(flag==1){
		    cout<<"\nEnter new food category\n";
		    cin>>ucat;
		    F[i].setFunction(F[i].getid(),ucat,F[i].getName(),F[i].getFprice());
		   }
		    else {
		    cout<<"\n Food category not found\n";
		   }
		   cout<<"\ndisplay updated details\n";
		   for(i=0;i<size;i++)   //display all details
		   {
		     F[i].getFunction();
		   }
		  break;

		  case 3: //logic for update food using food name
		  cout<<"\nEnter food Name which you want to update from data\n";
		  cin>>nm;
		   for(i=0;i<size;i++)
		   {
		     if(strcmp(F[i].getName(),nm)==0)
		     {
		       flag=1;
		       break;
		     }
		   }
		     if(flag==1) {
		     cout<<"\nEnter new food name\n";
		     cin>>um;
		     F[i].setFunction(F[i].getid(),F[i].getCat(),um,F[i].getFprice());
		    }
		     else{
		     cout<<"\n Food name not found\n";
		    }
		  cout<<"\ndisplay updated details\n";
		  for(i=0;i<size;i++)   //display all details
		  {
		    F[i].getFunction();
		  }
		  break;

		 case 4:
		  cout<<"\n Enter food price which you want to update from data\n";
		  cin>>np;
		  for(i=0;i<size;i++)
		  {
		    if(F[i].getFprice()==np)
		    {
		      flag=1;
		      break;
		    }
		  }
		     if(flag==1)  {
		     cout<<"\nEnter new food price\n";
		     cin>>up;
		     F[i].setFunction(F[i].getid(),F[i].getCat(),F[i].getName(),up);
		    }
		     else {
		     cout<<"\n Food price not found\n";
		    }
		  cout<<"\ndisplay updated details\n";
		  for(i=0;i<size;i++)   //display all details
		  {
		    F[i].getFunction();
		  }
		  break;

		default:
		cout<<"Wrong choice for updating food\n";
	      }
	      break;


      case 6:
	    cout<<"\ndisplay our records\n";
	    for(i=0;i<size;i++)   //display all details
	    {
	      F[i].getFunction();
	    }
	    cout<<"1.food id.\n";
	    cout<<"2.food category.\n";
	    cout<<"3.food name.\n";
	    cout<<"4.food price\n";
	    cout<<"Enter your choice for delete food\n";
	    cin>>ch1;
	      switch(ch1)
	      {
		 case 1:
		 cout<<"\n Enter food id which you want to delete from data\n";
		  cin>>nid;
		  for(i=0;i<size;i++)
		  {
		    if(F[i].getid()==nid)
		    {
		      for(j=i;j<size;j++)
		      {
			F[i]=F[i+1];
		      }
		      size--;
		      break;
		    }
		  }
		  cout<<"Data deleted successfully!!!!\n";
		  cout<<"Display resultant data\n";
		  for(i=0;i<size;i++)
		  {
		    F[i].getFunction();
		  }
		 break;

		 case 2:
		  cout<<"\n Enter food category which you want to delete from data\n";
		  cin>>ncat;
		  for(i=0;i<size;i++)
		  {
		    if(strcmp(F[i].getCat(),ncat)==0)
		    {
		      for(j=i;j<size;j++)
		      {
			F[i]=F[i+1];
		      }
		      size--;
		      break;
		    }
		  }
		  cout<<"Data deleted successfully!!!!\n";
		  cout<<"Display resultant data\n";
		  for(i=0;i<size;i++)
		  {
		    F[i].getFunction();
		  }
		 break;

		 case 3:
		 cout<<"\n Enter food name which you want to delete from data\n";
		  cin>>nm;
		  for(i=0;i<size;i++)
		  {
		    if(strcmp(F[i].getName(),nm)==0)
		    {
		      for(j=i;j<size;j++)
		      {
			F[i]=F[i+1];
		      }
		      size--;
		      break;
		    }
		  }
		  cout<<"Data deleted successfully!!!!\n";
		  cout<<"Display resultant data\n";
		  for(i=0;i<size;i++)
		  {
		    F[i].getFunction();
		  }
		 break;
		 case 4:
		 cout<<"\n Enter food price which you want to delete from data\n";
		  cin>>np;
		  for(i=0;i<size;i++)
		  {
		    if(F[i].getFprice()==np)
		    {
		      for(j=i;j<size;j++)
		      {
			F[i]=F[i+1];
		      }
		      size--;
		      break;
		    }
		  }
		  cout<<"Data deleted successfully!!!!\n";
		  cout<<"Display resultant data\n";
		  for(i=0;i<size;i++)
		  {
		    F[i].getFunction();
		  }
		 break;
	       default:
	       cout<<"\n Wrong choice for deleting food\n";
	      }
	      break;
      default:
      cout<<"Wrong choice\n";
     }
   }while(choice!=7);
  getch();
 }