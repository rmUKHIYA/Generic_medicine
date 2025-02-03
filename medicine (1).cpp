#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void login();
void registration();
void forgot();
void f1();

int main()
{
    int c;
    cout << "\t\t\t_____________________________________________\n\n\n";
    cout << "\t\t\t__ Welcome to Aushidhi _\n\n\n";
    cout << "\t\t\t__ MENU _\n\n\n";
    cout << "\t\t\t__ _\n\n\n";
    cout << "\t\t || Press 1 to Login ||\n" << endl;
    cout << "\t\t || Press 2 to Register ||\n" << endl;
    cout << "\t\t || Press 3 if you forgot password ||\n" << endl;
    cout << "\t\t || Press 4 to EXIT ||\n" << endl;
    cout << "\n\t\t Please Enter your Choice: ";
    cin >> c;
    cout << endl;

    switch(c)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "\t\t\t Thank you!\n\n";
            break;
        default:
            system("cls");
            cout << "\t\t Please Select Option Given above\n" << endl;
            main();
            break;
    }
}

void login()
{
    int count = 0;  // Initialize count to 0
    string userId, password, id, pass;
    system("cls");
    cout << "\t\t\t Please Enter User Name & Password: " << endl;
    cout << "\t\t\t USERNAME : ";
    cin >> userId;
    cout << "\t\t\t PASSWORD : ";
    cin >> password;

    ifstream input("records.txt");

    while(input >> id >> pass)
    {
        if(id == userId && pass == password)
        {
            count = 1;
            system("cls");
            break;  // exit the loop once a match is found
        }
    }
    input.close();

    if(count == 1)
    {
        cout << userId;
        cout << "\n LOGIN is Successful\n Thanks for logging in \n";
        f1();
    }
    else
    {
        cout << "\n Login Error. Please check your username and password\n";
        main();
    }
}

void registration()
{
    string ruserId, rpassword;
    system("cls");
    cout << " Enter the Username: ";
    cin >> ruserId;
    cout << " Enter the Password: ";
    cin >> rpassword;

    ofstream fout("records.txt", ios::app);
    fout << ruserId << ' ' << rpassword << endl;
    fout.close();
    system("cls");
    cout << " Registration is successful\n";
    main();
}

void f1()
{
    string bname;
    while(true)
    {
        cout << " Enter the Branded Name of Medicine: " << endl;
        cin >> bname;
        cout << "Generic Name of Medicine: ";

        if(bname == "calpol" || bname == "dolo")
        {
            cout << "paracetamol" << endl;
        }
        else if(bname == "calavam" || bname == "mox_cv" || bname == "mega_cv")
        {
            cout << "Amoxicillin & Potassium clavulanate" << endl;
        }
        else if(bname == "Colobeta_Gm" || bname == "Ananoc_Cream" || bname == "Diprolite_Skin_Cream")
        {
            cout << "Alclometasone dipropionate cream" << endl;
        }
        else if(bname == "Armotraz" || bname == "Arimidex" || bname == "Anastrozole")
        {
            cout << "Anastrozole" << endl;
        }
        else if(bname == "Azelast" || bname == "Nosaflick" || bname == "Furaze")
        {
            cout << "Azelastine" << endl;
        }
        else if(bname == "Doxaruba" || bname == "Doxotero" || bname == "Salius")
        {
            cout << "Doxorubicin" << endl;
        }
        else if(bname == "Etopar100" || bname == "Accord" || bname == "Celon")
        {
            cout << "Etoposide" << endl;
        }
        else if(bname == "Duflucan" || bname == "Fluka150" || bname == "pfizer_Duflican")
        {
            cout << "Fluconazole" << endl;
        }
        else if(bname == "Glucotrol" || bname == "Yashigup" || bname == "Gipizide")
        {
            cout << "Glipizide" << endl;
        }
        else if(bname == "Vistaril" || bname == "Watson" || bname == "Vetsource")
        {
            cout << "Hydroxyzine pamoate" << endl;
        }
        else if(bname == "Femara" || bname == "Letronol" || bname == "Levalaterol")
        {
            cout << "Letrozole" << endl;
        }
        else
        {
            cout << "Sorry, not found." << endl;
        }

        cout << "Do you want to continue? (Y/N): ";
        char choice;
        cin >> choice;
        if(choice == 'N' || choice == 'n')
            break;
    }
}

void forgot()
{
    int option;
    system("cls");
    cout << "\t\t\t You forgot the password? No worries.\n";
    cout << "Press 1 to search your ID by username:" << endl;
    cout << "Press 2 to go back to the main menu:" << endl;
    cout << "Enter your choice: ";
    cin >> option;

    switch(option)
    {
        case 1:
        {
            int count = 0;
            string suserId, sId, spass;
            cout << "\n\t\tEnter the Username which you remembered: ";
            cin >> suserId;

            ifstream fin("records.txt");
            while(fin >> sId >> spass)
            {
                if(sId == suserId)
                {
                    count = 1;
                    cout << "\n\n Your Account is Found\n";
                    cout << "\n\n Your Password is: " << spass << endl;
                    break;
                }
            }
            fin.close();

            if(count == 0)
            {
                cout << "\n\t Sorry, Your Account is Not Found\n";
            }

            main();
            break;
        }
        case 2:
            main();
            break;
        default:
            cout << "\t\t Wrong choice! Please try again:" << endl;
            forgot();
            break;
    }
}
