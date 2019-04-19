// Program Name: Comic Book Organizer
/* Purpose: To display and organize the comics inputted. Should display
 * the comics' series name, issue name, issue number, author, and main artist.
 * Hopefully it will organize these titles by the users selected parameters. */
// Author: Kyla Evans
// Date Last Modified: 4/1/19
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int getAndStoreComicInfo()
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

	cout << seriesName << "| " << issueName << "| " << author << /*
	"| " << artistOrPenciller  << "| " << colorist << "| " << issueNumber << variantLetter << "| " << 
	publishDate << "| " << conditionRating << "| " << comicPrice <<*/ endl;
	cout << endl;
	return (comicInfo);
} 
// Constants for file calling and usage
const string SERIES_NAME_FILE = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\Final Project Submission.txt";
const string ISSUE_NAME_FILE = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\Final Project Submission.txt";
const string AUTHOR_FILE = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\Final Project Submission.txt";

int openAndCheckFiles()
{
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
int closefiles()
{
	fstream seriesNamefile, issueNamefile, authorfile;
	seriesNamefile.close();
	issueNamefile.close();
	authorfile.close();
	return 0;
}
const int MAX_NUM_OF_COMICS = 500;

int main()
{
	char userAnswer;
	//int comicInfo;
	int numberOfComics =0;
	 
	openAndCheckFiles();
	
		
	cout << "This program is a comic book organizer. Please enter the comics' " << endl <<
			"series name, issue name, author, artist (orPenciller), colorist, issue number" <<
			" (with variant), date published, condition, and price paid, when applicable." << endl;
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
