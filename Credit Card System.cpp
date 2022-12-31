
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void add();
void modify();
void cardNumber();
void cardType();
void cI();
void cED();
void cHD();
void cL();
void pN();
void viewDetails();
void payment();
void purchase();
void Acc();
void viewTrans();
void makePayment();
void del();
int userId = 5475;
int main(){
	//int userId;
cout<<"---------Credit Card System---------\n";
char admin[]="xyz@admin.com";
char password[]="admin@123";


cout<<"\nType of User :";
cout<<"\n\n1.Administrator";
cout<<"\n2.Credit card User\n";



int n;
cin>>n;
if(n==1){
	cout<<"\nEnter Your Login Id and Password";
	char loginId[30];
	cout<<"\nEnter login Id : ";
	cin>>loginId;
		char pass[30];
	cout<<"\nEnter Password : ";
	cin>>pass;
	

	if(strcmp(admin,loginId)==0 && strcmp(password,pass)==0){
	
		cout<<"\n\nlogin successfully";
		int m;
		while(m!=7){
		cout<<"\n\n1.Add a user ";
		cout<<"\n\n2.Delete a user ";
		cout<<"\n\n3.Modify User Details ";
		cout<<"\n\n4.View existing users ";
		cout<<"\n\n5.Perform a payment transaction for a user ";
		cout<<"\n\n6.Perform a purchase transaction for a user ";
		cout<<"\n\n7.Quit Application \n";
		
		cin>>m;
		switch(m){
			case 1:
				add();
				break;
			case 2:
				 del();
				break;
			case 3:
				modify();
				break;
			case 4:
			 viewDetails();
				break;
			case 5:
				payment();
				break;
			case 6:
				 purchase();
				break;
			case 7:
				break;
			default:
				cout<<"\nInvalid Input";
			break;
		}
		
	
	
}
		
	}
	else{
		cout<<"\n\n access denied  ";
	}

	
}
else if(n==2)
{ char uI[30];
char p[20];
	char user[]="xyz@user.com";
char password1[]="user@123";
cout<<"\n Enter user id : ";
cin>>uI;
cout<<"\n Enter password : ";
cin>>p;
if(strcmp(user,uI)==0 && strcmp(password1,p)==0){
	cout<<"\n login succesfully";
	int y;
	while(y!=4){
		cout<<" \n\nselect from the following options \n\n";
		cout<<"\n1.View account details \n";
		cout<<"\n2.View transaction details for specified month \n";
		cout<<"\n3.Make a payment\n";
		cout<<"\n4.Quit application\n\n";
		
		cin>>y;
		switch(y)
		{
			case 1:
				Acc();
				break;
			case 2:
				viewTrans();
					break;
			case 3:
				makePayment();
			  break;
			case 4:
			
			  break;	
			default :
				cout<<"\nInvalid Input\n";
				break;
		}
	}
}
else{
	cout<<"\n access denied";
}
}
else
{
	cout<<"\n Invalid Input ";
}

//cout<<"\nType of User :";
//cout<<"\n\n1.Administrator";
//cout<<"\n2.Credit card User\n";
return 0;
}
void add()
{
	 ofstream MyFile("admin.txt");
	 //int userId;
	 char pass[9];
	 char Name[20];
	 char userType;
	 cout<<"\nEnter User Id: ";
	 cin>> ::userId;
	 cout<<"\nEnter Password for User: ";
	 cin>>pass;
	 cout<<"\nEnter User Name: ";
	 cin>>Name;
	 cout<<"\nEnter User Type: ";
	 cin>>userType;
	 if(userType == 'U'){
	 	cout<<"\n Card Number : 234562986741";
	 	cout<<"\n Customer Id : customer@xyz.com";
	 	cout<<"\n User Id : "<<userId;
		}
	

  // Write to the file
  MyFile << "\n Card Number : 234562986741\n";
  MyFile<<"\n Customer Id : customer@xyz.com\n";
  MyFile<<"\n Card Type : Silver\n";
  MyFile<<"\n Card Holder Date : 16/05/2022\n";
  MyFile<<"\n Card Expiry Date : 25/12/2027\n";
  MyFile<<"\n Credit Limit : INR 5,00,000\n";
  MyFile<<"\n Mobile Phone : 27XX78XX99\n";
  
  // Close the file
  MyFile.close();
  cout<<"\n\nEntry Successful\n";
}
void modify()
{
	 int UserId;
	 char pass[9];
	 char Name[20];
	 char userType;
	 
	 cout<<"\n Enter user Id to modify details : ";
	 cin>>UserId;
	 if(UserId == userId){
	 	while(1){
			
	 	cout<<"\nSelect the option you want to modify : \n\n";
	 	cout<<"\n1.Card Number ";
	 	cout<<"\n2.Customer Id ";
	 	cout<<"\n3.Card Type ";
	 	cout<<"\n4.Card Holder Date ";
	 	cout<<"\n5.Card Expiry Date ";
	 	cout<<"\n6.Credit Limit ";
	 	cout<<"\n7.Mobile phone ";
	 	cout<<"\n8.Quit \n\n";
	 	int x;
	 	cin>>x;
	 	switch(x)
	 	{
	 		case 1:
	 			cardNumber();
	 			break;
	 		case 2:
	 			cI();
				
	 			break;
	 		case 3:
	 			cardType();
	 			break;
	 		case 4:
	 			cHD();
	 			break;
	 		case 5:
	 			cED();
	 			break;
	 		case 6:
	 			cL();
	 			break;
	 		case 7:
	 			pN();
	 			break;
	 		case 8:
	 			exit(0);
	 			break;
	 		default:
	 			cout<<"\nInvalid Input \n";
	 			
			}
	 }
		}
		else{
			cout<<"\n user not find ";
		}
}
void cardNumber()
{ ofstream My_File("admin.txt");

	long long int cardNumber;
	cout<<"\n Enter new card number : ";
	cin>>cardNumber;
	cout<<"\n New card Number is : "<<cardNumber;
	My_File<<"\n New card Number is : "<<cardNumber;
}
void cI()
{ ofstream My_File("admin.txt");
	char customerID[20];
	cout<<"\n Enter customer Id : ";
	cin>>customerID;
	cout<<"\n Modified customer Id is : "<<customerID;
	My_File<<"\n New customer Id is : "<<customerID;
	
}
void cardType()
{  ofstream My_File("admin.txt");
	char cardType[10];
	cout<<"\n enter card type : ";
	cin>>cardType;
	cout<<"\n Modified card type is : "<<cardType;
		My_File<<"\n New card Type  is : "<<cardType;
}
void cHD()
{ ofstream My_File("admin.txt");
	char chd[10];
	cout<<"\n enter card holder date : ";
	cin>>chd;
	cout<<"\n Modified Card holder date is : "<<chd;
	My_File<<"\n Modified card holder date  is : "<<chd;
}
void cED()
{ ofstream My_File("admin.txt");
	char ced[10];
	cout<<"\n enter card expiry date : ";
	cin>>ced;
	cout<<"\n Modified card expiry date is : "<<ced;
	My_File<<"\n Modified card expiry date  is : "<<ced;
}
void cL()
{ ofstream My_File("admin.txt");
	long long int cl;
	cout<<"\n enter credit limit : ";
	cin>>cl;
	cout<<"\n Modified credit card limit is : "<<cl;
	My_File<<"\n Modified credit card limit is : "<<cl;
}
void pN()
{ ofstream My_File("admin.txt");
	long long int pn;
	cout<<"\n enter phonr number : ";
	cin>>pn;
	cout<<"\n Modified phone number is : "<<pn;
	My_File<<"\n Modified phone number is : "<<pn;
}
void viewDetails()
{
	string myText;

// Read from the text file
ifstream MyReadFile("admin.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
}
void payment()
{ ofstream My_File("payment.txt");
	long long int cardNumber;
	cout<<"\n Enter card number : ";
	cin>>cardNumber;
	cout<<"\nType of transaction : Payment ";
	char date[10];
	cout<<"\n enter date of transaction : ";
	cin>>date;
	string description;
	cout<<"\nEnter description for payment : ";
	getline(cin,description);
	double amount;
	cout<<"\n Enter amount : ";
	cin>>amount;
	cout<<"\n Transaction Id : AX67 ";
	My_File<<"\n card number "<<cardNumber;
	My_File<<"\n Type of transaction : Payment ";
	My_File<<"\n date of transaction : "<<date;
	My_File<<"\n amount : "<<amount;
	My_File<<"\n transaction id : AX67 ";
	My_File<<"\n description for payment : "<<description;
	My_File.close();
}
void purchase()
{ ofstream My_File("purchase.txt");
	long long int cardNumber;
	cout<<"\n Enter card number : ";
	cin>>cardNumber;
	cout<<"\nType of transaction : Purchase";
	char date[10];
	cout<<"\n enter date of transaction : ";
	cin>>date;
	string description;
	cout<<"\nEnter description for payment : ";
	getline(cin,description);
	double amount;
	cout<<"\n Enter amount : ";
	cin>>amount;
	cout<<"\n Transaction Id : AX67 ";
	My_File<<"\n card number "<<cardNumber;
	My_File<<"\n Type of transaction : Purchase ";
	My_File<<"\n date of transaction : "<<date;
	My_File<<"\n amount : "<<amount;
	My_File<<"\n transaction id : AX67 ";
	My_File<<"\n description for payment : "<<description;
	My_File.close();
	
}
void Acc()
{
	string myText;

// Read from the text file
ifstream MyReadFile("account.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
}
void viewTrans()
{ char Month[20];
	char Month1[]="January";
	char Month2[]="February";
	char Month3[]="March";
	char Month4[]="April";
	char Month5[]="May";
	char Month6[]="June";
	char Month7[]="July";
	char Month8[]="August";
	char Month9[]="September";
	char Month10[]="October";
	char Month11[]="November";
	char Month12[]="December";
	
	cout<<"\nEnter the month : ";
	cin>>Month;
	if(strcmp(Month1,Month)==0){
		string myText;

// Read from the text file
ifstream MyReadFile("january.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
	
}
else if(strcmp(Month2,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("february.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month3,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("march.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
	
}
else if (strcmp(Month4,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("april.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month5,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("may.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if (strcmp(Month6,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("june.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if (strcmp(Month7,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("july.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month8,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("august.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if (strcmp(Month9,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("september.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month10,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("october.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month11,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("november.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else if(strcmp(Month12,Month)==0){
	string myText;

// Read from the text file
ifstream MyReadFile("december.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
		
	}
	MyReadFile.close();
}
else
{
	cout<<"\n\n Invalid input for month ";
}
}
void makePayment()
{ ofstream MyFile("userpayment.txt");
	char TransID[]="AX67";
	long long int CardNum;
	char Type[20];
	char Date[12];
	char description[30];
	double amount;
	cout<<"\n Enter card number : ";
	cin>>CardNum;
	cout<<"\n enter payment type : ";
	cin>>Type;
	cout<<"\nEnter Date : ";
	cin>>Date;
	cout<<"\nEnter Description : ";
	cin>>description;
	cout<<"\n Enter amount : ";
	cin>>amount;
	 

  // Write to the file
  MyFile <<"\n date of transaction : "<<Date;
  MyFile<<"\nAmount : "<<amount;
  MyFile<<"\nDescription : "<<description;
  MyFile<<"\nTransaction Id : "<<TransID;
  MyFile<<"\nType : "<<Type;

  // Close the file
  MyFile.close();
  cout<<"\n\n ------Payment is successful------------";
}
void del()
{ std::ofstream ofs;
	int userID;
	cout<<"\n\nEnter user Id whose data you want to delete : ";
	cin>>userID;
	if(userID==userId)
	{ cout<<"\n user found ";
	//	std::ofstream ofs;
ofs.open("admin.txt", std::ofstream::out | std::ofstream::trunc);
ofs.close();
cout<<"\n\n User data deleted successfully ";
	}
	else
	{
		cout<<"\n User is not found ";
	}
	
}
