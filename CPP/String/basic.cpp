#include <iostream>
#include <string>

using namespace std;

void f1()
{
	string hello = "hello wordl!";
	cout<<hello<<endl;

	string proverb("many a mickle makes muckle.");
	cout<<proverb<<endl;

	string sleep(6,'z');
	cout<<sleep<<endl;

	//string sleep2 = 'z'; //will generate error

	string proverb2(proverb);
	cout<<proverb2<<endl;

	string phrase(proverb,5,13); //(str_obj,start,end);
	cout<<phrase<<endl;

	string adj = "hornswoglimg";
	string word = "rubbish";

	adj = word;
	word = "twotiming";

	cout<<adj<<" "<<word<<endl;
}

void f2()
{
	string name = "ketan suthar";

	for(size_t i=0; i< name.length(); ++i)
		name[i] = toupper(name[i]);
	cout<<name;
}

void f3()
{
	string proverb("many a mickle makes muckle.");
	string phrase = proverb.substr(4,9);

	cout<<phrase;
}

void f4()
{
	const int max_names = 5;
	string names[max_names];
	int count=0;
	char ans;

	do
	{
		cout<<"enter name: ";
		cin>>names[count++];
		cout<<"\ndo you want to enter another name?(y/n): ";
		cin>>ans;
	}while(count<max_names && tolower(ans)=='y');

	if(count == max_names)
		cout<<"\nmaximum name limit reached.";

	int ind_max=0, ind_min=0;

	for(int i=1; i<max_names; ++i)
	{
		if(names[i] > names[ind_max])
			ind_max = i;
		else if(names[i] < names[ind_min])
			ind_min = i;
	}
	cout<<"\nminmum name: "<<names[ind_min];
	cout<<"\nmaximum name: "<<names[ind_max];
}

void f5()
{
	string text;
	getline(cin, text, '#');

	string sep = " ,.?!\"";
	size_t start = text.find_first_not_of(sep);
	size_t end = 0;
	int count=0;

	while(start != string::npos)
	{
		end = text.find_first_of(sep, start+1);
		if(end == string::npos)
			end = text.length();

		cout<<text.substr(start, end-start)<<endl;
		++count;
		start = text.find_first_not_of(sep, end+1);
	}
	cout<<"\nyour string contained "<<count<<" word."<<endl;
}

void f6()
{
	string sentence = "Manners maketh man";
	string word = "an";
	cout<<"an: "<<sentence.rfind(word);
	cout<<"\nman: "<<sentence.rfind("man");
	cout<<"\ne: "<<sentence.rfind("e");
}

void f7()
{
	string phrase = "we can insert a string.";
	string word = "a string into ";

	phrase.insert(14, word);
	cout<<phrase;

	phrase.insert(14, word, 8, 5);
	cout<<"\n"<<phrase;

	phrase.insert(0,"hello ");
	cout<<"\n"<<phrase;

	string newsen = "hello world. how are you?";
	newsen.insert(6,5,'*');
	cout<<"\n"<<newsen;
}

void f8()
{
	string text = "smith, where jones had had had had \"had had\", had Had.";
	text.replace(13, 5, "ketan");
	cout<<text;

	string sep = " ,.?!";
	text = "smith, where jones had had had had \"had had\", had Had.";
	size_t start = text.find("jones");
	size_t end = text.find_first_of(sep, start+1);

	text.replace(start, end-start, "ketan");
	cout<<"\n"<<text;

	text = "smith, where jones had had had had \"had had\", had Had.";
	start = text.find("jones");
	end = text.find_first_of(sep, start+1);

	text.replace(start, end-start, 5, '*');
	cout<<"\n"<<text;
}

void f9()
{
	
}

int main(int argc, char const *argv[])
{
	//f1();
	//f2();
	//f3();
	//f4();
	//f5();
	//f6();
	//f7();
	//f8();
	f9();
	return 0;
}

