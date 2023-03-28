#include<iostream>
#include<cstring>
using namespace std;
class Person
{
private:
	char* first_name;
	char* last_name;
protected:
	int age;
public:
Person( char fname [],char lname [],int age ){


		first_name=new char[strlen(fname)+1];
		strcpy(first_name,fname);
	//for(int i=0 ; i< strlen(fname)+1; i++)
		//{
			//first_name[i]=fname[i];
		//}

		last_name=new char[strlen(lname)+1];
		strcpy(last_name,lname);

		this->age=age;

		cout<<"Person() called"<<endl<<endl;
}

char* getFirst_name()
{
    return first_name;
}
void setFirst_name(char* fname)
{
		for(int i=0 ; i< strlen(fname); i++)
		{
			first_name[i]=fname[i];
		}

}
char* getLast_name()
{
  return last_name;
}

void setLast_name(char* lname)
{
		for(int i=0 ; i< strlen(lname); i++)
        {
			last_name[i]=lname[i];
		}
}

int get_age()
{
    return age;
}

void set_age(int age)
{
    this->age=age;
}


void printInformation()
{
  cout<<first_name<<" "<<last_name<<" is "<<age<<" years old ";
}

~Person()
{
		delete []first_name;
		first_name=NULL;
		delete []last_name;
		last_name=NULL;
		age=0;
		cout<<"~Person() called"<<endl;
}

};

class Student:public Person
{
private:
	float cgpa;
public:
	Student( char fname[],char lname[],int age,float cgpa):Person(fname,lname,age)
	{
	   this->cgpa=cgpa;
	   cout<<"Student() called"<<endl;
	}
	float get_cgpa()
	{
		return cgpa;
	}
	void set_cgpa(float cgpa)
	{
		this->cgpa=cgpa;
	}

	void printStudent()
	{
     Person::printInformation();
	 cout<<", his cgpa is "<<cgpa<<endl<<endl;
	}

	~Student()
	{
		cout<<"~Student() called"<<endl;
	}

};

class Faculty:public Person
{
private:
	int no_of_courses;
	int extension_number;
public:
	Faculty(char fname[],char lname[], int age ,int no_of_courses , int extension_number ):Person(fname,lname,age)
	{
		this->no_of_courses=no_of_courses;
		this->extension_number=extension_number;
		cout<<"Faculty() called"<<endl;
	}
	int get_no_of_courses()
	{
		return no_of_courses;
	}
	void set_no_of_courses(int no)
	{
		no_of_courses=no;
	}
	int get_extension_numbers()
	{
		return extension_number;
	}
	void set_extension_numbers(int no)
	{
		extension_number=no;
	}

	void printFaculty()
	{
      cout<<"Faculty Member name: "<<getFirst_name()<<" "<<getLast_name()<<" , Age:"<<age<<" , Number of courses: "<<no_of_courses<<" , Ext. "<<extension_number<<endl<<endl;;
	}

	~Faculty()
	{
		cout<<"~Faculty() called"<<endl;
	}

};

class Graduate:public Student
{
private:
	char* thesis;
public:
	Graduate(char t[],char fname[],char lname[],int age,float cgpa):Student(fname,lname,age,cgpa)
	{
		thesis=new char[strlen(t)+1];
		strcpy(thesis,t);
		cout<<"Graduate() called "<<endl;
	}
	char* get_thesis()
	{
		return thesis;
	}
	void set_thesis(char* Tsis)
	{
		for(int i=0 ; i< strlen(Tsis); i++)
        {
			thesis[i]=Tsis[i];
		}
	}

	void printGraduate()
	{
      cout<<getFirst_name()<<" "<<getLast_name()<<" is an graduate student , his cgpa is "<<get_cgpa()<<" and his thesis topic is "<<thesis<<endl<<endl;
	}

	~Graduate()
	{
		delete [] thesis;
		thesis=NULL;
		cout<<"~Graduate Called"<<endl;
	}

};

class Undergraduate:public Student
{
private:
	char*fyp_name;
public:
 Undergraduate(char f[],char fname[],char lname[],int age,float cgpa):Student(fname,lname,age,cgpa)
 {
		fyp_name=new char[strlen(f)+1];
		strcpy(fyp_name,f);
		cout<<"Undergraduate() called "<<endl;
}
	char* get_fyp_name()
	{
		return fyp_name;
	}
	void set_fyp_name(char* fyp)
	{
		for(int i=0 ; i< strlen(fyp); i++)
        {
			fyp_name[i]=fyp[i];
		}
	}

	void printUndergraduate()
	{
      cout<<getFirst_name()<<" "<<getLast_name()<<" is an undergraduate student, his cgpa is "<<get_cgpa()<<" and his final year project is titled "<<fyp_name<<endl<<endl;
	}

	~Undergraduate()
	{
		delete [] fyp_name;
		fyp_name=NULL;
		cout<<"~Undergraduate Called"<<endl;
	}

};

int main(){
	Undergraduate u ("The Even Locator","Ted","Thompson",22,3.91);
	Graduate g ("Distributed Algorithms","Ted","Thompson",22,3.91);
	Faculty  f ("Richard","Karp",45,2,420);
	Student s("Ted","Thompson",22,3.91);
    Person p ("Ted","Thompson",22);
	cout<<endl<<endl;
	p.printInformation();
	cout<<endl<<endl;
    s.printStudent();
    f.printFaculty();
    u.printUndergraduate();
    g.printGraduate();
return 0;
}
