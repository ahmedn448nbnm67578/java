#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



class book {
		int id;
		int price;
		string name;
	public:
		//constructor

		book(int i=0,int p=0 ,string n=""):id(i),price(p),name(n) {
		}

		//setter


		void setid(int i) {

			this->id=i;
		}


		void setprice(int p) {

			this->price=p;
		}


		void setname(string n) {

			this->name=n;
		}

		//getter

		int getid() {
			return id;
		}


		int getprice() {
			return price;
		}

		string getname() {
			return name;
		}

		bool operator==(book b) {
			return(this->id==b.getid()&&(this->name==b.getname())&&(this->price==b.getprice()));
		}


		friend ostream & operator<< (ostream & out,book & b) {
			out<<b.getid()<< " & "<<b.getprice()<<" & "<<b.getname()<<endl;
			return out;
		}
		friend istream & operator>> (istream & in ,book & b) {
			in>>b.id>>b.price>>b.name ;
			return in ;
		}
};


void write(){
fstream f;
 book b;
	
	f.open("data.txt",ios::app);
	if(!f){
		cout<<"cant append the file /n";
		exit(0);
	}
	
	cout<<"enter new book info /n";
	cin>>b;
	f<<b.getid()<<"|"<<b.getname()<<"|"<<b.getprice()<<"/n";
	
}


int main() {
	int choice;
	while(true) {

		cout<<"\n 0:exit";
		cout<<"\n 1:write book info ";
		cout<<"\n 2:display all book";
		cout<<"\n 3:modifiy book";
		cout<<"\n 4:delete book";
		cout<<"\n 5:search /n";
        cout<<" enter your choice /n";
		cin>>choice;
		switch(choice) {

			case 0:
				exit(0);
				break;
			case 1:
				write();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
				
			default: 
			 cout<<"/n invalid input";
		}

                
				
				}






















	/*

	book b(100,200,"java");
	book b1(100,200,"ava");
	cout<<b;
	 cout<<b1;
	if (b==b1){

		cout<<"it is the same equal\n";
	}
		else
		{
							cout<<"it is not the same equal\n";

		}

		book b3;

		cin>>b3;
		cout<<"values of third op is\n"<<b3;

		*/
}

