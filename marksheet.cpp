#include <iostream>
#include <Windows.h>
using namespace std;

// Global vaiables to access in all functions 
float PERCENTAGE;
string ss_name, stu_name,stu_m, stu_f, division,grade,DOB;

int roll_no, hindi, english, maths, science, sanskrit, sst, grand_total;
int counter =0;

// THIS FUNCTION USE TO CREATE A MARKSHEET DETAILS....

void set_data (){
    
    //Taking input of STUDENT DETAILS 
    cout << "enter the name of student's school = ";
    cin.ignore();
    getline(cin, ss_name);
    system("cls");
    
    cout << "Name of Student = ";
    getline(cin, stu_name);
    system("cls");

    cout << "Enter the name of student's Mother = ";
    getline(cin, stu_m); 
    system("cls");
    
    cout << "Enter the name of student's Father = ";
    getline(cin, stu_f);
    system("cls");

    cout << "Enter roll no = ";
    cin >> roll_no;
    system("cls");

    cout << "Enter the DOB |xx/xx/xxxx| of student : ";
    cin >> DOB;
    system("cls");


//STUDENT MARKS
    counter++;
    cout <<counter<< "/6 | Enter the marks of hindi = ";
    cin.ignore();
    cin >> hindi;
    system("cls");

    counter++;
    cout <<counter << "/6 | Enter the marks of englihs = ";
    cin.ignore();
    cin >> english;
    system("cls");

    counter++;
    cout <<counter << "/6 | Enter the marks of maths = ";
    cin >> maths;
    system("cls");

    counter++;
    cout <<counter << "/6 | Enter the marks of science = ";
    cin >> science;
    system("cls");

    counter++;
    cout <<counter << "/6 | Enter the marks of sanskrit = ";
    cin >> sanskrit;
    system("cls");

    counter++;
    cout <<counter << "/6 | Enter the marks of sst = ";
    cin >> sst;
    system("cls");

 // total of all sub marks
    grand_total = hindi + english + maths + science + sanskrit + sst;

 // % of SUBJECTS
    PERCENTAGE = (grand_total/6);

 // GRADE SYSTEM
    if (PERCENTAGE>=81 && PERCENTAGE<=100){
        division = "FIRST DIVISION";
        grade = "A+";
}
if (PERCENTAGE>=60 && PERCENTAGE<=80){
    division = "FIRST DIVISION";
        grade = "A";
}
else if (PERCENTAGE>=41 && PERCENTAGE<=59){
    division = "SECOND DIVISION";
    grade = "B";
}
else if (PERCENTAGE>=33 && PERCENTAGE<=41){
    division = "THIRD DIVISION";
    grade = "C";
}

else if (PERCENTAGE>=0 && PERCENTAGE<=40){
    division = "FAIL";
    grade = "A";
}

 // logic for if srudent fail to achive min marks
 if (hindi < 33)
  {
     division = "FAIL";
  }
  else if (english < 33)
  {
      division = "FAIL";
  }
  else if (maths < 33)
  {
      division = "FAIL";
  }
  else if (science < 33)
  {   
      division = "FAIL";
  }
  else if (sanskrit < 33)
  {
     division = "FAIL";
  }
  else if (sst < 33)
  {
      division = "FAIL";
  }

}

// THIS FUNCTION USE TO CREATE A MARKSHEET LOADING ANIMATION.....

void Loading(){
   cout << "\n\n\n\n\n\t\tLoading";
   char x =219;
   for (int i = 0; i < 30; i++)
   {
    Sleep(100);
    cout << x;
    
   }
   system("cls");
   cout << "\n\n\n\n\n\t\tPlease wait Loading your Marksheet...."<<endl;
   system("pause");
   
}

// THIS FUNCTION USE TO CREATE A ALL DATA OUTPUT...

void get_data(){
cout <<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;
cout << "|              Rajasthan Board of Secondary Education , Ajmer              |"<<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;
      cout << "|Student Name : "<< stu_name <<endl;
      cout << "|Mother  Name : "<< stu_m <<endl;
      cout << "|Father  Name : "<< stu_f <<endl;
      cout << "|Roll NO.     : "<< roll_no <<endl;
      cout << "|School Name  : "<< ss_name <<endl;
      cout << "|Student D/O/B: "<< DOB     <<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;
cout << "|      SUBJECTS       MAX MARKS       MIN MARKS       THEROY MARKS         |"<<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;
cout << "|       HINDI            100              33             "<<hindi            <<endl;
cout << "|       ENGLISH          100              33             "<<english          <<endl;
cout << "|       MATHS            100              33             "<<maths            <<endl;
cout << "|       SCIENCE          100              33             "<<science          <<endl;
cout << "|       SANSKRIT         100              33             "<<sanskrit         <<endl;
cout << "|       SOCIAL SCIENCE   100              33             "<<sst              <<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;
cout << "|                        600            |         TOTAL  "<<grand_total      <<endl;
cout << "|--------------------------------------------------------------------------|"<<endl; 
cout << "|PERCENTAGE : "<<PERCENTAGE <<endl;
cout << "|DIVISION   : "<<division<<endl;
cout << "|GRADE      : "<<grade<<endl;
cout << "|--------------------------------------------------------------------------|"<<endl;

}

// THIS FUNCTION IS USE TO MAIN WORK...

    int main () 
    { 
        cout << "WELCOM TO THE MARKSHEET GENRATION PROGRAM....." <<endl;

        char yesno;
        cout << "if you want to generate your marksheet the press 'Y' otherwise 'N': ";
        cin >> yesno;
        if (yesno=='y'|| yesno=='Y')
        {
            set_data();
        }else
        {
           exit(0);
        }
        system("cls");
        
       Loading();
       system("cls");
       get_data();
       
       string div;

        cout << "This project is Created By : DIVANSHU KACHHAWA BCA 1st year Student ";

        cout << "Press any key to exit... ";
        cin >> div;

        return 0;
    }