#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	double Tugas[3], UTS[3], UAS[3], Nilai[3];	 
	double max,min;
	string grademax, grademin;
	string Grade[3];

	for (int i=0; i<3; i++){
		
		cout<<"Student Grades ["<<i<<"]"<<endl;
		cout<<"----------------------"<<endl;
		cout<<"Assignment Scores = ";cin>>Tugas[i];
		cout<<"Mid Term Exam Scores   = ";cin>>UTS[i];
		cout<<"Final Term Exam Scores   = ";cin>>UAS[i];cout<<endl;
		
		Nilai[i] = (Tugas[i]*30/100)+(UTS[i]*30/100)+(UAS[i]*40/100);
		
		if (Nilai[i] >= 90 && Nilai[i] <= 100)
		{
			Grade[i] = "A";
		}
		
		else if (Nilai[i] >= 80 && Nilai[i] <= 89)
		{
			Grade[i] = "B";
		}
		
		else if (Nilai[i] >= 70 && Nilai[i] <= 79)
		{
			Grade[i] = "C";
		}
		
		else if (Nilai[i] >= 60 && Nilai[i] <= 69)
		{
			Grade[i] = "D";
		}
		
		else if (Nilai[i] >= 0 && Nilai[i] <= 59)
		{
			Grade[i] = "E";
		}
		
		else 
		{
			Grade[i] = "-";
		}
	}
	
	cout<<"List of Student Final Grades"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Student 0            = "<<Nilai[0]<<" ("<<Grade[0]<<")"<<endl;
	cout<<"Student 1            = "<<Nilai[1]<<" ("<<Grade[1]<<")"<<endl;
	cout<<"Student 2            = "<<Nilai[2]<<" ("<<Grade[2]<<")"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Student Average Score   = "<<(Nilai[0]+Nilai[1]+Nilai[2])/3<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
}

