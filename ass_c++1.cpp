#include<iostream>
using namespace std;

class Employee{
public:
int salary;
int hrs;
void getInfo(int a, int h){
	hrs=h;
	salary=a;
}

void AddSal(){
if(salary<500){
salary=salary+10;
}
}

void AddWork(){
if(hrs>6){
salary=salary+5;
}
}

void display(){
cout<<"final Salary is:"<<salary<<endl;
}
};


int main(){
Employee e,e1,e2,q1;
e.getInfo(500,5);
e.AddSal();
e.AddWork();
cout<<"For 1st\n";
e.display();

e1.getInfo(600,8);
e1.AddSal();
e1.AddWork();
cout<<"For 2nd\n";
e1.display();


e2.getInfo(300,3);
e2.AddSal();
e2.AddWork();
cout<<"For 3\n";
e2.display();


q1.getInfo(300,10);
q1.AddSal();
q1.AddWork();
cout<<"For last\n";
q1.display();
return 0;
}
