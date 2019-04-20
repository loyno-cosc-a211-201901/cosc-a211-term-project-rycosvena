// Program Name: Comic Book Organizer
/* Purpose: To display and organize the comics inputted. Should display
 * the comics' series name, issue name, issue number, author, and main artist.
 * Hopefully it will organize these titles by the users selected parameters. */
// Author: Kyla Evans
// Date Last Modified: 4/19/19
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getAndStoreComicInfo()			// gets all of the comics' information from the user
{
	int comicInfo;
	string seriesName;					// the complete title of the series
	string issueName;					// some comics have specific names for the issue
	string author;						// enter full name
	//string artistOrPenciller;			// the drawer
	//string colorist;					// the colorer
	//int issueNumber;					// the number assighned to an issue in a series
	//char variantLetter;					// this letter corresponds w/ the different cover arts available for an issue (some are valuable than others)
	//string publishDate;					// the date published
	//string conditionRating;
	//double comicPrice;
	// Use getline for the strings
	//++PROF+ANDREW:    get rid of these, use globals
	ofstream seriesNamefile, issueNamefile, authorfile;

	cout << "Please enter series name." << endl;
	getline(cin, seriesName);
	seriesNamefile << seriesName;
	cout << "Please enter issue name, if applicable." << endl;
	getline(cin, issueName); // Can be considered a subtitle
	issueNamefile << issueName;
	cout << "Please enter author's name." << endl;
	getline(cin, author);
	authorfile << author;
	/*cout << "Please enter the artist's or penciller's name." << endl;
	getline(cin, artistOrPenciller); // Comics can say either
	cout << "Please enter colorist's name." << endl;
	getline(cin, colorist); // The artist usually only draws, not colors
	cout << "Please enter issue number." << endl;
	 cin >> issueNumber;
	cout << "Please enter variant letter." << endl;
	 cin >> variantLetter;
	cout << "Please enter the publish date. Separate the month and year with a slash if necessary." << endl;
	 cin >> publishDate; // string/getline didn't work.
	cout << "Please enter condition rating. (Use letter notation)." << endl;
	 cin >> conditionRating; // Letter rating system prefered
	cout << "Please enter the price you paid for the comic. (DO NOT PUT COMMAS)" << endl;
	 cin >> comicPrice;*/
	cout << endl;

	//++PROF+ANDREW:    This looks like it should be in a "print comic" function, not
	// this "input comic" function
	cout << seriesName << "| " << issueName << "| " << author <<
		//	"| " << artistOrPenciller  <<
		// "| " << colorist <<
		// "| " << issueNumber << variantLetter <<
		// "| " << publishDate <<
		// "| " << conditionRating <<
		// "| " << comicPrice <<
		endl;
	cout << endl;
	return (comicInfo);
}
// Constants for file calling and usage
//++PROF+ANDREW:    see adaptation here. You can define a directory location and use it as a
// prefix for the actual file variables
const string LOCATION_OF_FILES = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\";
const string SERIES_NAME_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
const string ISSUE_NAME_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
const string AUTHOR_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";

int openAndCheckFiles()			// checks and opens the comic info files
{
	//++PROF+ANDREW:    use globals
	fstream seriesNamefile, issueNamefile, authorfile;

	seriesNamefile.open(SERIES_NAME_FILE);
	if (!seriesNamefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;

	}
	issueNamefile.open(ISSUE_NAME_FILE);
	if (!issueNamefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	authorfile.open(AUTHOR_FILE);
	if (!authorfile)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
	cout << endl;
	return 0;
}
int closefiles()			// closes the comic info files
{
	//++PROF+ANDREW:    these won't actually close anything - you need to pass the files in to the
	// function
	//++PROF+ANDREW:    use globals instead
	fstream seriesNamefile, issueNamefile, authorfile;
	seriesNamefile.close();
	issueNamefile.close();
	authorfile.close();
	return 0;
}
int recallFiles ()
{
}
const int MAX_NUM_OF_COMICS = 500;

int main()
{
	char userAnswer;
	//int comicInfo;
	int numberOfComics =0;

	openAndCheckFiles();

	//++PROF+ANDREW:    restructured to
	cout << "This program is a comic book organizer. Please enter the comics' " << endl <<
			"series name, issue name, author" <<
			// ", artist (orPenciller)" <<
			// ", colorist" <<
			// ", issue number" <<
			// " (with variant)" <<
			// ", date published" <<
			// ", condition" <<
			// ", and price paid, when applicable." <<
			endl;
	cout << endl;
	getAndStoreComicInfo();
	numberOfComics++;

	cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
	 cin >> userAnswer;
// I probably need if/ else
	while (numberOfComics <= MAX_NUM_OF_COMICS && userAnswer == 'Y')
	{
		if (userAnswer == 'Y')
		{
			cin.ignore(100,'\n');
			getAndStoreComicInfo(); //will call function here
			numberOfComics++;
			cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
			cin >> userAnswer;
		}
	}
	if (userAnswer == 'N')
	{
		closefiles();
		cout << endl;
		cout << endl;
		cout << "You entered: " << numberOfComics << " comics!" << endl;
		cout << "Keep your comics safe! Thank you for using this program." << endl;
	}



// search function??
// find a way to select and alphebetize	by selected parameters
// Need to figure out storage. watch lecture 0x17 (3-1-19)
// stay tune for arrays
return 0;
}
