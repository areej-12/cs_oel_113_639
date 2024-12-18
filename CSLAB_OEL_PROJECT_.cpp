#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
#include<string>
using namespace std;
void budgetmanager();
void displayMenu();
void random_motivation();
void academictracker();
int loginfo();
void random_revising();
int main();
//113
void random_revising(){// gives user recall method and course study materital locations
        cout<<endl<<endl;
        cout <<"STUDY GUIDE OF THE DAY"<<endl;
		string randomrevsing[]={"Active Recall: Test yourself without notes to enhance memory retention.",
	"Spaced Repetition: Review material at increasing intervals for better long-term retention.",
	"Pomodoro Technique: Study in 25-minute intervals, with short breaks.",
	"Interleaved Practice: Mix different subjects/topics during study sessions.",
	"Summarization: Take notes, then rewrite in your own words for better understanding.",
	"Teach Others: Explaining concepts reinforces your understanding.",
	"Visual Aids: Use diagrams and charts for complex topics."};
	int size=sizeof(randomrevsing)/sizeof(randomrevsing[0]);
	srand(time(0));
	int random=rand()%size;
	cout<<"\t"<<endl;
	cout<<randomrevsing[random]<<endl;
	cout <<endl<<endl;
	cout <<"Channel for Practising your concepts today:"<<endl;
	string randomchannels[]={
	"MIT OpenCourseWare: Complete MIT course lectures.",
	"freeCodeCamp: Comprehensive tutorials on full-stack development and programming.",
	"CS50: Harvard's computer science course covering algorithms, data structures, and more.",
	"Tech With Tim: Programming tutorials on Python, AI, and general software engineering.",
	"The Organic Chemistry Tutor: Tutorials on math, chemistry, and physics.",
	"CodeWithHarry: Hindi-based tutorials on programming and web development."
	"Professor Leonard: Detailed math lectures","Khan Academy: In-depth lessons on multiple subjects, especially math and science.",
	"Google Developers: Official channel for Android, machine learning, and cloud computing tutorials."};
   size=sizeof(randomchannels)/sizeof(randomchannels[0]);
     random=rand()%size;
	cout<<"\t"<<endl;
	cout<<randomchannels[random]<<endl;
}
//113
void random_motivation(){
		string randommotivation[]={"Don't waste your time.'","Life goes on.","Believe you can.","Never give up.","Dream big.Aim High","Be unstoppable.","TRUST & BE POSITIVE","Stay positive, work hard.","Keep moving forward.""Create your reality.","Seize the day.","Embrace the journey.","Shine your light."};
	int size=sizeof(randommotivation)/sizeof(randommotivation[0]);
	srand(time(0));
	int random=rand()%size;
	cout<<"\t\t\t\t\tMOTIVATION OF THE DAY:"<<endl;
	cout<<"\t\t\t\t\t("<<randommotivation[random]<<")"<<endl;
	cout <<endl;
}
//_______________________TUBA HUSSAIN(639)
// Maximum number of tasks
 int MAX_TASKS = 100;
// Task structure
struct TASK {
    string name; //name of task
    string priority; //high , medium or low
    string deadline; //deadline for task
    string status; // "Pending" or "Completed"
};
// Function to add a task
void addTask(TASK tasks[], int& taskCount) {
    if (taskCount >= MAX_TASKS) {  //can't add more than max tasks
        cout << "Task list is full. Cannot add more tasks.\n"; 
        return;
    }
    TASK newTask;
    
    cout << "Enter task name: ";
    cin.ignore();
    getline(cin, newTask.name);
    cout << "Enter priority (High/Medium/Low): ";
    cin >> newTask.priority;
    cout << "Enter deadline (DD/MM/YYYY): ";
    cin >> newTask.deadline;
    newTask.status = "Pending"; // Default status
    tasks[taskCount++] = newTask;
    cout << "Task added successfully!\n";
}
// Function to view all tasks
void viewTasks(TASK tasks[], int taskCount) {
    if (taskCount == 0) {
    	//if there is no task then print 
        cout << "No tasks to display.\n";
        return;
    }
    cout << "\nTo-Do List:\n";
    for (int i = 0; i < taskCount; ++i) {
        cout << i + 1 << " Name: " << tasks[i].name
             << "\n Priority: " << tasks[i].priority
             << "\n Deadline: " << tasks[i].deadline
             << "\nStatus: " << tasks[i].status << endl;
    }
}
// Function to mark completed task
void markTaskComplete(TASK tasks[], int taskCount) {
    if (taskCount == 0) {
        cout << "No tasks to mark as complete.\n"; //if there is no task
        return;
    }
    int taskNumber;
    cout << "Enter the task number to mark as complete: ";
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > taskCount) { //condition for invalid task number
        cout << "Invalid task number.\n";
        return;
    }
    tasks[taskNumber - 1].status = "Completed";
    cout << "Task marked as complete.\n";
}
// Function to delete a task
void deleteTask(TASK tasks[], int& taskCount) {
    if (taskCount == 0) {
        cout << "No tasks to delete.\n";
        return;
    }
    int taskNumber;
    cout << "Enter the task number to delete: ";
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > taskCount) {
        cout << "Invalid task number.\n";
        return;
    }
    // Shift tasks to fill the gap
    for (int i = taskNumber - 1; i < taskCount - 1; ++i) {
        tasks[i] = tasks[i + 1];
    }
    taskCount--;
    cout << "Task deleted successfully.\n";
}
// function for displaying Main menu
void displayMenu() {
    TASK tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    while (choice != 5){
	cout <<endl<<endl;
    	cout <<"==================================================================="<<endl;
        cout << "\nTo-Do List Manager\n";
        cout <<"==================================================================="<<endl;
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Complete\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            cout <<endl<<endl;
                addTask(tasks, taskCount);
                break;
            case 2:
            cout <<endl<<endl;
                viewTasks(tasks, taskCount);
                break;
            case 3:
            cout <<endl<<endl;
                markTaskComplete(tasks, taskCount);
                break;
            case 4:
            cout <<endl<<endl;
                deleteTask(tasks, taskCount);
                break;
            case 5:
            cout <<endl<<endl;
                cout << "Exiting To-Do List Manager. Goodbye!.\nPress any key to go back";
                getch();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}

//_______________________________AREEJARIF(113)
void budgetmanager(){//F1
     int choice1=0;
	int budget=0;
	int remaing=0;
    string budget_des;
	string dateString;//intilization for diffreent variables
	string expense_des[]={"Food","Stationary","Snacks","Mess Bill","Grocery","Billing(data,packages)","Transport","OTHER expenses"};
	int size=sizeof(expense_des)/sizeof(expense_des[0]);
	int expense[size]={0};
	int expensesum=0;
	cout <<endl<<endl;
while(choice1!=5){	//for cases
	cout <<"==================================================================="<<endl;
 	cout <<"\t\t\tBUDGET MANAGEMENT"<<endl;
 	cout <<"==================================================================="<<endl;
 	void random_motivation();
 	cout <<"\n";
 	cout <<"1.Add Budget\n";
 	cout <<"2.Add Expense\n";
 	cout <<"3.View Budget Summary\n";
 	cout <<"4.Budget_log\n";
 	cout <<"5.Exit\n";
 	cout <<"\t\t\tSelect your choice:";
	 cin>>choice1;
 		switch(choice1){
 			case 1:
 			cout <<endl<<endl;
 			cout <<"==================================================================="<<endl;
			cout <<"\t\t\t ADD BUDGET\n";
			cout <<"==================================================================="<<endl;
			cout <<"Enter Monthly Budget:";
			cin >>budget;
			cout <<"Enter Date(DD-MM-YY):";
			cin >>dateString;
			cout <<"Budget Description:";// intilizing the sizef array large enoungh to store the sentence charachter
			cin.ignore();//for buffers
    	    getline(cin,budget_des);
			cout <<"Added successfully!!"<<endl;  
 			break;
 			case 2:
 			cout <<endl<<endl;
 				cout <<"==================================================================="<<endl;
 	 		cout <<"\t\t\t ADD EXPENSE\n";
 	 			cout <<"==================================================================="<<endl;
 	 		for(int i=0;i<size;i++){
 	 		cout <<"Enter expense for "<<expense_des[i]<<":";
 	 		cin>>expense[i];  //using for loop for expenses
 	 		expensesum+=expense[i];
	  		}
 	 
 	  
 		if(budget<0){
 	 	cout<<"YOU ARE OUT OFF MONEY (SAD) ;]"<<endl;
 	 	cout<<"Remaining Budget: "<<"none"<<endl;
	  	}
	  	else if(expensesum>budget){
        remaing=budget-expensesum;
	  	cout <<"You are out-off Budget:( \n "<<endl;
	  	cout<<"Exceeding Budget: "<<remaing<<endl;
	  	cout <<""<<endl;
	  	cout <<"oR MAY be you didn't add your budget.\nGoing to Add budget in Budgetmanager\n";
	  	budgetmanager();//recursion for calling function calling
	  	}
		else{
	  	remaing=budget-expensesum;
	  	cout<<"Total Monthly Expense:"<<expensesum<<endl;
	  	cout<<"Remaining Budget: "<<remaing<<endl;}
 			break;
 			case 3:
 			cout <<endl<<endl;
 				cout <<"==================================================================="<<endl;
 		 	cout <<"\t\t\t BUDGET SUMMARY\n";
 		 		cout <<"==================================================================="<<endl;
 		 	cout<<"DETAILS ->"<<"EXPENSES"<<endl;
 		 	for(int i=0;i<size;i++){
 		 	cout<<expense_des[i]<<"="<<expense[i]<<endl;
			} 
			cout <<"Total Expenses from date "<<dateString<<" are ="<<expensesum<<endl;
			cout <<"Details:"<<" "<<budget_des<<endl;
            cout <<"You saved: "<<remaing<<endl;
 			break;
 		case 4:
 		cout <<endl<<endl;
 			cout <<"==================================================================="<<endl;
 		   cout <<"\t\t\t Budget_log\n";
 		 	cout <<"==================================================================="<<endl;
          cout <<"Your budget for this month is:"<<budget<<endl;
          cout <<"You saved\\remaining this amount:"<<remaing<<endl;
          cout << "You updated the budget on:"<<dateString<<endl;
          cout <<"Your expense till date are:"<<expensesum<<endl;
 			break;
 		case 5:
 		cout <<endl<<endl;
 		    cout<<"Press any key to go back\n";
 		    getch();
 			break;
 		default:
 			cout <<"My Dear,select from given choice\n";
	 }

}
}


void academictracker(string faculty, string reg_number,int n_subjects,string z[]){//passing values as a parameters to the function
	float grades[n_subjects];// Declaring arrays to store grades and credit hours
    int credithours[n_subjects];
    float totalgradepoints = 0.0;
    int totalcredithours = 0; 
    int t_duration=0, number,choice1=-1, duration,asize=50, day=0,i=0,hr=24; //z=array for subject name
    z[n_subjects];
	char grade[n_subjects];
	string array[100];
	char studied_to;
	 hr-=duration;//for caclulation of graph mod
    string note;
    int snote=0;
    
    
    while(choice1!=5){//edge cases
	
cout <<endl<<endl;
	cout <<"==================================================================="<<endl;
 	cout <<"\t\t\tAcademic Tracker"<<endl;
 	cout <<"==================================================================="<<endl;
 	cout <<"\n";
 	cout <<"1.Study-Log\n";
 	cout <<"2.Add a grade\n";
 	cout <<"3.View a grade\n";
 	cout <<"4.Progress \n";
 	cout <<"5.CGPA\n";
 	cout <<"6.Study recommnedations\\tips\n";
 	cout <<"7.Exit\n";
 	cout <<"\t\t\tSelect your choice:";cin>>choice1;
 	switch(choice1){
 		case 1:
 		cout <<endl<<endl;
 				cout <<"==================================================================="<<endl;
 		     cout <<"\t\t STUDY_LOG\n";
 		    	cout <<"==================================================================="<<endl;
 		     cout <<"\t\tMy dear,enter(y/Y for yes and n/N for no)"<<endl;
 		    do{
			  cout <<"Did you studied this week?";
 		      cin>>studied_to;
			   
			}while(studied_to!='y'&&studied_to!='n'&&studied_to!='Y'&&studied_to!='N');
			if(studied_to=='n'||studied_to=='N'){
				cout <<"THATS NOT GOOD BRO!\n ";
				day--;
				hr--;
			}else{
			day++;
			  	cout<<"Enter Duration in hrs:";
			  	cin>>duration;
			  	t_duration+=duration;
			  	hr++;
			  	cin.ignore();
			  
			  	cout<<"Note for yourself:";
			  	// intilizing the sizef array large enoungh to store the sentence charachter
    	        getline(cin,note);
			  
				  snote++;}
			  	
 			break;
 		case 2:
 		cout <<endl<<endl;
 				cout <<"==================================================================="<<endl;
 			cout <<"\t ADD GRADES\n";
 			cout <<"==================================================================="<<endl;
 			cout <<"Your Courses:\n";
 			if (n_subjects==0){
 				cout <<"No data found going to details in main menu to enter/edit details\n";
 				getch();
			 }
 			for(int i=0;i<n_subjects;i++){
 				cout <<i+1<<"."<<z[i]<<endl;
 				cout<<"Enter grade:(A/B/C/D/F)";
 				cin>>grade[i];
			 }
 			 cout <<endl;
 			 cout <<"GRADE ADDED SUCCESSFULLY\n";
 			
 	
 			break;
 		case 3:
 		cout <<endl<<endl;
 			cout <<"==================================================================="<<endl;
 		 cout <<"\t\tView a grade"<<endl;
 		 	cout <<"==================================================================="<<endl;
 		 for(int i=0;i<n_subjects;i++){
 				cout <<i+1<<"."<<z[i] <<"\t"<<grade[i]<<endl;
			 }
 			 cout <<endl;
 			break;
 		case 4:
 		cout <<endl<<endl;
		 	cout <<"==================================================================="<<endl;
 		cout <<"\t\tPROGRESS"<<endl;
 		cout <<"==================================================================="<<endl;
 		cout <<"Your Progress this week\n";
 		cout <<"\n\n";
 		for(int i=0;i<7;i++){
 			cout<<"Day:"<<i+1;
 			for(int j=0;j<day;j++){
 				cout<<"*";

			 }cout<<endl;
			 
		 }  
		cout <<"You studied "<<"="<<t_duration<<" hr\n";
		cout <<"Your daily streak"<<"="<<day<<endl;
		cout <<"Your notes to yourself:"<<endl;
	    cout <<note<<endl;
		
 			break;
 			case 5:
 			cout <<endl<<endl;
				cout <<"==================================================================="<<endl;
			  cout <<"Your CGPA \n";
			  	cout <<"==================================================================="<<endl;
 				{ for (int i = 1; i <= n_subjects; i++) {
        		cout << "Enter grade for subject " << i << " (e.g., out of 4.0): ";
        		cin >> grades[i];
        		cout << "Enter credit hours for subject " << i  << ": "<<endl;
        		cin >> credithours[i];

        		// Calculating total grade points for this subject
        		totalgradepoints += grades[i] * credithours[i];
        		// Adding credit hours to the total
        			totalcredithours += credithours[i];
    }
    // Calculating CGPA
    			float cgpa = totalgradepoints / totalcredithours;

   				 // Displaying results
   				cout << "\nTotal Grade Points: " << totalgradepoints << endl;
   				cout << "Total Credit Hours: " << totalcredithours << endl;
    			cout << "CGPA: " << cgpa << endl;
				 } break;
		  case 6:
		  	   
                 random_revising();
 		case 7:
 			cout <<"Going back to the main menu"<<endl;
 			getch();
 			break;
 		default:
 			cout <<"My Dear,select from given choice\n";
	 }
	 }
 }
 	
 
int loginfo(){
string user_name, pass_word, password, username;
cout <<endl<<endl;
cout<<"\tLogin in to your account \n";
			cout<<"\t Enter your username: ";
			cin.ignore();
			getline(cin, user_name);
	
           	cout<<"\t Enter your password: ";
        	getline(cin, pass_word);
		
	        ifstream read1("UserST.txt");
        	getline(read1, username);

        	ifstream read2("PassRE.txt");
        	getline(read2, password);
	
	if(( user_name== username) && ( pass_word== password )){
		return 1; 
		
	}
	else{ cout <<"PLEASE MAKE AN ACCOUNT FOR FURTHER PROCESS!\n";
	main();//Use of indirect recursion
		return 0;
    
     
		}
}
	

int main(){//file 	
    int totalsubjects;
	int ch=-1,op=0; 
    
    string name="",uni_name,reg_number,faculty;
    int age, n_subjects;
    string array[100];
    string user_name, pass_word, password, username;
    int flag1;
    cout <<endl<<endl;
 	cout <<"==================================================================="<<endl;
 	cout <<"\t\t\tCAMPUS LIFE MANAGEMENT"<<endl;
 	cout <<"==================================================================="<<endl;
 	cout<<" 1. REGISTER"<<"\n";
 	cout<<" 2. Login"<<"\n";
 	cout <<"Select your option:";cin>>op;
   if(op==1){
   
 		string username, password;
 		  	cout <<"==================================================================="<<endl;
		 	cout<<"Register for an account \n";
		 	cout <<"==================================================================="<<endl;
			cout<<"\tEnter your username:";							
			cin.ignore();
			getline(cin, username);
			cout<<"\t Enter your password: ";
			getline(cin, password);
																
			ofstream USERname("UserST.txt");
			USERname<<username;				
			USERname.close();
		
			ofstream PASSword("PassRE.txt");
			PASSword<<password;
			PASSword.close();
			cout<<"Registrartion completed !"; 
		  cout <<"Enter Your information :\n";
				cout <<"Enter your deatils:\n";
 				cout <<"Enter Name:";cin.ignore();
    			getline(cin, name);
   				 cout <<"Enter Age:";cin>>age;
    			cout <<"Enter University Name:";cin.ignore();
                cin>>uni_name;
    			cout <<"Enter Student registerartion number:";cin>>reg_number;
    			cout<<"Enter Faculty:";cin.ignore();
    			getline(cin, faculty);
    			cout<<"How many subjects you are enrolled in(in numbers):\n";cin>>n_subjects;
    			if (n_subjects>=20){
    				cout <<"These many subjects aren't allowed!\n";
				}
    			cout <<"Enter your subjects name:"<<endl;
    			for(int i=0;i<n_subjects;i++){
     			cout <<"Enter subject"<<i+1<<endl;
     			cin>>array[i];
	 				}cout<<endl;
	 				
    			cout <<"DATA SAVED SUCCESSFULLY ;]\n"<<endl;}
		else if(op==2){
		
			loginfo();
			name="ali";
			age=18;
			uni_name="giki";
			reg_number="2024222";
			faculty="SWE";
			n_subjects=4;
			array[0]="CS101";
			array[1]="MM101";
			array[2]="MT101";
			array[3]="PH101";
			
			
			
		}else{
			cout <<"Invalid input try again\n";
		} 
		cout <<"Press any key to go further :]\n";
getch();
system("cls");
			
    while(ch!=5){
	cout <<endl<<endl;
 	cout <<"==================================================================="<<endl;
 	cout <<"\t\t\tCAMPUS LIFE MANAGEMENT"<<endl;
 	cout <<"==================================================================="<<endl;
 	cout <<"\n";
 	random_motivation();
 	cout <<"1.To-Do List Mangement\n";
 	cout <<"2.Budget Tracker\n";
 	cout <<"3.Academic Tracker\n";
 	cout <<"4.Details\n";
 	cout <<"5.Exit\n";
 	cout <<"\t\t\tSelect your choice:";cin>>ch;
 	
 	switch(ch){
 		case 1:
 			system("cls");
 			cout <<endl<<endl;
 		   displayMenu();
 			break;
 		case 2:
 			system("cls");
 			cout <<endl<<endl;
		 budgetmanager();
		 	break;
 		case 3:
 			system("cls");
 			cout <<endl<<endl;
 			academictracker(faculty,reg_number,n_subjects,array);
 			break;
 		case 4:
 			system("cls");
 			cout <<endl<<endl;
 		cout <<"==================================================================="<<endl;
 	    cout <<"\t\tYOUR DEATILS"<<endl; 
 		cout <<"==================================================================="<<endl; 
 		cout <<"1.Edit details"<<endl;
 		cout<<"2.View details"<<endl;
 		cout <<"3. Exit\n";
 		cout<<"Select your choice:";
 		cin>>ch;
 		switch(ch){
 			case 1:cout <<endl<<endl;
 				cout <<"Enter your deatils:\n";
 				cout <<"Enter Name:";cin.ignore();
    			getline(cin, name);
   				 cout <<"Enter Age:";cin>>age;
    			cout <<"Enter University Name:";cin.ignore();
                cin>>uni_name;
    			cout <<"Enter Student registerartion number:";cin>>reg_number;
    			cout<<"Enter Faculty:";cin.ignore();
    			getline(cin, faculty);
    			cout<<"How many subjects you are enrolled in(in numbers):\n";cin>>n_subjects;
    			cout <<"Enter your subjects name:"<<endl;
    			 for(int i=0;i<n_subjects;i++){
     			cout <<"Enter subject"<<i+1<<endl;
     			cin>>array[i];
	 				}cout<<endl;
    			cout <<"DATA SAVED SUCCESSFULLY ;]\n"<<endl;
 				break;
		 case 2: cout <<endl<<endl;
				cout <<"\t\tYOUR DEATILS"<<endl; 
 				cout<<"NAME:"<<name<<endl;
 				cout<<"AGE:"<<age<<endl;
 				cout<<"UNIVERSITY:"<<uni_name<<endl;
 		 		cout<<"REGISTRATION NUMBER:"<<reg_number<<endl;
 		 		cout<<"FACULTY:"<<faculty<<endl;
 				cout<<"SUBJECTS ENROLLED:"<<n_subjects<<endl;
 		 		for(int i=0;i<n_subjects;i++){
     				cout <<i+1<<". "<<array[i]<<endl;
	    		}cout<<endl;
	    		break;
		  case 3:
		  	cout<<"going to main;].Press any key to go back to main\n";
		  	getch();
	     default:
	     	cout <<"invalid!(1-3)\n";}
 			break;
 		case 5:
 			system("cls");
 		 cout <<"You sure you want to exit!\n";
		  getch();
 			break;
 		default:
 			cout <<"My Dear,select from given choice\n";
	 }
}
return 0;
}
