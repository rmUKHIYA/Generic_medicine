#include<iostream>
#include<string>
using namespace std;
class A{
	string bname;
	public:
		void f1(){
			cout<<"Enter the Branded Name of Medicine: ";
			cin>>bname;
			cout<<"Generic Name of Medicine: ";
			if(bname=="calpol"||bname=="dolo") 
			{
				cout<<"paracetamol";
				
			}
			else if(bname=="calavam"||bname=="mox_cv"||bname=="mega_cv")
			{
				cout<<"Amoxcylin & pottasium calvanate";
			}
			else if(bname=="Colobeta_Gm"||bname=="Ananoc_Cream"||bname=="Diprolite_Skin_Cream")
			{
				cout<<"alclometasone dipropionate cream	";
			}
			else if(bname=="Armotraz"||bname=="Arimidex"||bname=="Anstrozole")
			{
				cout<<"Anastrazole";
			}	
			else if(bname=="Azelast"||bname=="Nosaflick"||bname=="Furaze")
			{
				cout<<"Azelastine";
			}
			else if(bname=="Doxaruba"||bname=="Doxotero"||bname=="Salius")
			{
				cout<<"Doxorubicin";
			}
			else if(bname=="Etopar100"||bname=="Accord"||bname=="Celon")
			{
				cout<<"Etoposide";
			}
			else if(bname=="Duflucan"||bname=="Fluka150"||bname=="pfizer_Duflican")
			{
				cout<<"Fluconazole";
			}
			else if(bname=="Glucotrol"||bname=="Yashigup"||bname=="Gipizide")
			{
				cout<<"Glipizide";
			}
			else if(bname=="Vistaril"||bname=="Watson"||bname=="Vetsource")
			{
				cout<<"Hydroxyzine_pamoate";
			}
			else if(bname=="Femara"||bname=="Letronol"||bname=="Levalaterol")
			{
				cout<<"Letrozole";
			}
			
			else{
				cout<<"Sorry not found";
			}
		}
};
int main(){
	A a1;
	a1.f1();
	return 0;
}

