//Preprocessor Directives

#include<stdio.h>
#include<stdlib.h>


//function prototype declaration
void Mainmenu();  //display main menu
void Drinks();    //display Drinks items
void Food();      //display Food items
void Payment();   //display Payment
void terminate(); //exit programs

int sum=0;         //sum initialization

int main()
{
    system("COLOR F4");  //color display
	Mainmenu();//function call
}

//function definition for Main menu
void Mainmenu()

{   //variable declaration
    int i;
    int select;
    system("cls");   //new screen
    printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t---------OPTIONS FOR YOU---------\n");
    printf("\t\t----------------------------------\n");
    printf("1.Drinks\n2.Food\n3.Payment\n4.Exit\n\n"); //display menu
    restart:
    printf("Please choose:\n");
    scanf("%d",&select);  //get input for choice

    switch(select)
    {
    //choice 1
    case 1:
        Drinks(); //call Drinks function
        break;     //break switch
    //choice 2
    case 2:
        Food();   //call Food function
        break;    //break switch
    //choice 3
    case 3:
        Payment(); //call Payment function
        break;     //break switch
    //choice 4
    case 4:
      terminate(); //call terminate function
       break;      //break switch
    //if choice not 1-4
    default:
		printf("Wrong input.Please enter again\n");
		goto restart; //Back to choice again
		break;   //break switch

    }


}
//function definition for Food
void Food()
{
    system("cls"); //new screen
    //variable declaration
    int choose,input;

    int Nasigoreng_Ayam = 4, Shwarma = 5, Ruti_canai = 2, Indian_Biriyani = 7, Nasi_lemak = 3;
    printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t-------------------------------------\n");
    printf("\t\t-------------------------------------\n\n");
    printf("\t\t-------------------------------------\n");
    printf("\t\t---------FOOD ITEMS FOR YOU---------\n");
    printf("\t\t-------------------------------------\n\n");
    printf("Item No.     List of Available Foods\t\tPrice\n\n");
    printf("01.\t\t Nasi Goreng_Ayam\t\t4.00RM\n02.\t\t Shwarma\t\t\t5.00RM\n03.\t\t Ruti_Chanai\t\t\t2.00RM\n04.\t\t Indian Biriyani\t\t7.00RM\n05.\t\t Nasi Lemak\t\t\t3.00RM\n\n");  //display food menu


    printf("Enter 0 For Finishing Input!\n\n");

while(1)
{

  start:
     printf("Input your Item No. : ");
     scanf("%d",&choose);  //get input for item
     printf("\n");
    if(choose==1)
        {
        printf("Nasigoreng Ayam\t\tRm. 4.00\n\n");  //Display 1st item
        sum = sum+Nasigoreng_Ayam;   // add 1st item price
        }
    else if(choose==2)
        {
        printf("Shwarma\t\t\tRm. 5.00\n\n");    //Display 2nd item
        sum = sum+Shwarma;   // add 2nd item price
    }
    else if(choose==3)
    {
        printf("Ruti Canai\t\tRm. 2.00\n\n");  //Display 3rd item
        sum=sum+Ruti_canai;  // add 3rd item price
    }
  else if(choose==4)
  {
      printf("Indian Biriyani\t\tRm. 7.00\n\n");  //Display 4th item
      sum=sum+Indian_Biriyani;  // add 4th item price
  }
  else if(choose==5)
  {
      printf("Nasi Lemak\t\tRm. 3.00\n\n");   //Display 5th item
      sum=sum+Nasi_lemak;  // add 5th item price
  }
else if(choose==0)
{
  printf("You finished Input for Food Items.\n\n");

  printf("Where Do you want to go Now?\n\n\t\t1.Main Menu\t\t\n\t\t2.Payment\n");
  again:
  printf("Input:");
  scanf("%d",&input);  //get input for either choice option
  printf("\n");

  if(input==1)
  {
      Mainmenu();  //call function
      }
  else if(input==2)
  {
      Payment();   //call function
  }
   else
   {
       printf("Wrong Input! input correctly.....\n");
       goto again;  // back to either choice option again
   }
  }
  else
    {
    printf("Wrong Input! Please Input a Correct Item No...\n");
    goto start; //back to select item again
  }


       }
}
//function definition for Drinks
void Drinks()
{
    system("cls");  //new screen

    //variable declaration
    int choose,input;
    int Mountain_Dew = 1, chili = 2, Revive = 2, RedBull = 3, Sun_quick = 3;
    printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t-------------------------------------\n");
    printf("\t\t-------------------------------------\n\n");
    printf("\t\t---------------------------------------\n");
    printf("\t\t---------DRINKS ITEMS FOR YOU---------\n");
    printf("\t\t---------------------------------------\n\n");

    printf("Options     List of Available Drinks\t\tPrice\n\n");
    printf("01.\t\t Mountain Dew\t\t\t1.00RM\n02.\t\t chili\t\t\t\t2.00RM\n03.\t\t Revive\t\t\t\t2.00RM\n04.\t\t RedBull\t\t\t3.00RM\n05.\t\t Sunquick\t\t\t3.00RM\n\n");  //Display Items & prices


    printf("Enter 0 For Finishing Input!\n\n");

do
{
  input:
     printf("Input your Item No. :");
     scanf("%d",&choose);    //get input for item

     printf("\n");
    if(choose==1)
        {

        printf("Mountain Dew\tRm. 1.00\n\n"); //Display 1st item
        sum = sum+Mountain_Dew;   // add 1st item price
        }
    else if(choose==2)
        {
        printf("Chili\t\tRm. 2.00\n\n");  //Display 2nd item
        sum = sum+chili;     // add 2nd item price
    }
    else if(choose==3)
    {
        printf("Revive\t\tRm. 2.00\n\n");  //Display 3rd item
        sum = sum+Revive;   // add 3rd item price
    }
  else if(choose==4)
  {
      printf("RedBull\t\tRm. 3.00\n\n");   //Display 4th item
      sum = sum+RedBull;   // add 1st 4th price
  }
  else if(choose==5)
  {
      printf("SunQuick\tRm. 3.00\n\n");   //Display 5th item
      sum = sum+Sun_quick;   // add 5th item price
  }
else if(choose==0)
{
  printf("You finished Input for Drinks Item.\n\n");
  printf("Where Do you want to go Now?\n\n\t\t1.Main Menu\t\t\n\t\t2.Payment\n");
  back:
  printf("Input:");
  scanf("%d",&input);   //get input for either choice option
  printf("\n");

  if(input==1)
  {
      Mainmenu();  //call function
  }
  else if(input==2)
  {
      Payment();   //call function
  }
   else
   {
       printf("Wrong Input! input correctly.....\n");
       goto back;   //Back to either choice option again
   }
  }
  else
    {
    printf("Wrong Input! Please Input a Correct Item No...\n");
    goto input; //back to input select item again
  }

 }
    while(1);

}
void Payment()
{
    system("cls");  //new screen
    //variable declaration
    int paid,next,change;
    printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
    printf("\t\tWELCOME TO PAYMENT!\n\n");
    printf("Your Total Billing Amount Is RM. %d\n\n",sum); //display total bill
    printf("\t\tPlease pay your Bill\n\n");
    printf("Paid Amount: RM  ");  // display paid amount
    scanf("%d",&paid);  //get input for paid amount
    change=paid-sum;    //counting for change cash
   printf("\nYour Changing Cash is RM %d\n\n",change);  //display change amount
   printf("Please Take your Cash!\n\n");
   sum=0;
   system("PAUSE");
   system("cls");
   printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");
   printf("Do you want to continue this program for Next Customer?\n1.YES\n2.NO\n");
   cust:
   printf("Your choice: ");
   scanf("%d",&next);  //get input for either choice option
   if(next==1)
   {
       Mainmenu();  //call function
   }
   else if(next==2)
   {
       terminate();  //call function
   }
   else
   {
       printf("Wrong Input! Please Re-Input....\n");
       goto cust;  //back for either choice option again
   }

}
//function definition for terminate
void terminate()
{
    system("cls");
    printf("\t\t         Nadia's Kitchen\n");
    printf("\t\t----------------------------------\n");
    printf("\t\t----------------------------------\n\n");

    printf("Thank You For Using Our System.\n\n");
    printf("Have a Nice Day!\n\n\n");
    exit(0); //program exit
}