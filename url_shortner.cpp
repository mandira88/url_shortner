#include<iostream>
#include<string.h>
#include<vector>

using namespace std;


class customer{
 int ccode;
string cname;
	public:
	//custome<vector>customerdetails;
	customer();
	customer(int,string);
	//vector<customer>customerdetails;
	int getccode();
	string getcname();
	
};

customer::customer()
{
	this->ccode=0;
	this->cname="null";
}
customer::customer(int ccode,string cname)
{
	this->ccode=ccode;
	this->cname=cname;
}
int customer::getccode()
{
	return this->ccode;
}
string customer::getcname()
{
	return this->cname;
}

/*vector<customer>customer::getcustomerdetails(vector<customer>customer_in)
{
	customerdetails=customer_in;
	return customerdetails;
}*/



int main()
{
	char url[100],temp[100],shorturl[100];
	int j,k;
	cout<<" Enter the URL "<<endl;//www.mediafun.com
	cin>>url;
	int len=strlen(url);
	for(int i=1;i<len;i++)
	{
		if(url[i]=='w')
		{
			for(j=1;url[j]!='.';j++)
			{
				temp[j]=url[j];
			}
			for(;j<=len;j++)
			{
				 shorturl[j]=url[j+1];	
			}
		}
		else if(url[i]=='h')
		{
			for(k=1;url[k]!='/';k++)
			{
				temp[k]=url[k];
			}
			for(k=k+1;k<=len;k++)
			{
				 shorturl[k]=url[k+1];	
			}
		}
		else
		break;
	}
	for(int i=1;i<=len;i++)
	{
		cout<<shorturl[i];
	}
	cout<<endl;
	char URL[100];
	cout<<"Enter the shorter URL"<<endl;
	cin>>URL;
	cout<<"Entered URL  "<<url<<endl;
	cout<<"Services Allowed "<<endl;
	char choice;
	int ccode;
	string cname;
	
	do{
		
		
		//vector<customer>customerdetails;
		cout<<"Enter customer code";
		cin>>ccode;
		cout<<"Enter customer name";
		cin>>cname;
		//customerdetails.push_back(ccode,cname);
		//customer cusobj(customerdetails);*/
		cout<<" Do you want to add more custome? y or n"<<endl;
		cin>>choice; 		
yu
	cout<<ccode;
	cout<<cname;
	/*for(int i=0;i<customerdetails.size();i++)
	{
		cout<<customerdetails[i];
	}*/
}
	

	
