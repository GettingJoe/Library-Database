int number_of_students()
{
	string line;int count=0;
	ifstream fin;fin.open("students.txt");
	while(getline(fin, line))
	{
		++count;
	}
	return count;
}

int number_of_books()
{
	string line;int count=0;
	ifstream fin;fin.open("books.txt");
	while(getline(fin, line))
	{
		++count;
	}
	return count;
}


void search_book()
{
	cout<<"What do you want to search with?"<<endl;
	cout<<"1. Author"<<endl;
	cout<<"2. Title"<<endl;
	cout<<"3. Student"<<endl;
	cout<<"Enter your choice:";
	int choice;
	cin>>choice;
	cin.ignore();
	bool success=false;
	do
	{
		switch(choice)
		{
		case 1:
			search_by_author();
			success=true;
			break;	
		case 2:
			search_by_title();
			success=true;
			break;
		case 3:
			search_by_student();
			success=true;
			break;
		default:
			cout<<"Wrong choice. Enter again.";
			success=false;
			break;
		}
	}while(!success);
}


int main()
{
	
	// display student information
	cout << "+----------------------------------------------+" << endl;
	cout << "|       Computer Science and Engineering       |" << endl;
	cout << "|        CSCE 1030 - Computer Science I        |" << endl;
	cout << "|   Student Name     EUID    euid@my.unt.edu   |" << endl;
	cout << "+----------------------------------------------+" << endl;
	cout << endl;

	int choice;
	
	bool success;
	do
	{
	cout<<"1. Add"<<endl;

	cout<<"2. Check Out"<<endl;
	
	cout<<"3. Return"<<endl;
	
	cout<<"4. Search"<<endl;
	
	cout<<"Enter your choice, 0 to Quit:";
	
	
	cin>>choice;
	cin.ignore();
		do
		{
			switch(choice)
			{
			case 1:
				enter_book();
				success=true;
				break;
			case 2:
				check_out();
				success=true;
				break;
			case 3: 
				return_book();
				success=true;
				break;
			case 4: 
				search_book();
				success=true;
				break;
			default:
				cout<<"Wrong Choice. Enter again";
				success=false;
				break;
			}
		}while(!success);
	}while(choice!=0);
	return 0;
}




	