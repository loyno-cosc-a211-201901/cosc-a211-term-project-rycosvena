// file location constants complete
// openAndCheckFiles() function complete
// getComicInfo() function complete
// writeToFiles() function I think is complete
// recallFiles() function I think is complete
// closeFiles() function I think is complete
// save_comic_files(), loadComicFiles(), and listComics() functions need to be started
	/*move the file-write operation into a "save comic files" function that writes a single
	  comic (from the in-memory arrays or vectors) to the storage files. From there, you can 
	  stub out a complete menu system that adds "load comic files" and "list comics".*/
// Vectors NEED to be incorporated
	//with sort and searches
// Incorporate all functions into main
// probably need cases for each input user preference





// Program Name: Comic Book Organizer
/* Purpose: To display and organize the comics inputted. Should display
 * the comics' series name, issue name, issue number, author, and main artist.
 * Hopefully it will organize these titles by the users selected parameters. */
// Author: Kyla Evans
// Date Last Modified: 4/25/19
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Constants for file calling and usage
//++PROF+ANDREW:    see adaptation here. You can define a directory location and use it as a
// prefix for the actual file variables
const string LOCATION_OF_FILES = "C:\\Users\\Witle\\Documents\\GitHub\\cosc-a211-term-project-rycosvena\\";
const string SERIES_NAME_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
const string ISSUE_NAME_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
const string AUTHOR_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string ARTIST_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string COLORIST_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string ISSUE_NUMBER_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string VARIANT_LETTER_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string PUBLISH_DATE_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string CONDITION_RATING_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";
//const string PRICE_PAYED_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";

//++PROF+ANDREW:    use globals
//fstream series_namefile, issue_namefile, authorfile;, artistfile, coloristfile, issue_numberfile, variant_letterfile, publish_datefile, conditionfile, price_payedfile;
ofstream series_namefile, issue_namefile, author_file, artist_file, colorist_file, issue_numberfile, variant_letterfile, publish_datefile, condition_file, price_payedfile;
ifstream seriesnamefile, issuenamefile, authorfile, artistfile, coloristfile, issuenumberfile, variantletterfile, publishdatefile, conditionfile, pricepayedfile;
const int MAX_NUM_OF_COMICS = 500;
string seriesName;					// the complete title of the series
string issueName;					// some comics have specific names for the issue
string author;						// enter full name
//string artistOrPenciller;			// the drawer
//string colorist;					// the colorer
//int issueNumber;					// the number assighned to an issue in a series
//char variantLetter;					// this letter corresponds w/ the different cover arts available for an issue (some are valuable than others)
//string publishDate;					// the date published
//string conditionRating;
//double pricePayed;
// Use getline for the strings

int openAndCheckOFiles()			// checks and opens the comic info files
{
	series_namefile.open(SERIES_NAME_FILE);
	if (!series_namefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	issue_namefile.open(ISSUE_NAME_FILE);
	if (!issue_namefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	author_file.open(AUTHOR_FILE);
	if (!author_file)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
/*
	artist_file.open(ARTIST_FILE);
	if (!artist_file)
	{
		cout << "Artist file open failure" << endl;
		cout << ARTIST_FILE << endl;
	}
	colorist_file.open(COLORIST_FILE);
	if (!colorist_file)
	{
		cout << "Colorist file open failure" << endl;
		cout << COLORIST_FILE << endl;
	}
	issue_numberfile.open(ISSUE_NUMBER_FILE);
	if (!issue_numberfile)
	{
		cout << "Issue number file open failure" << endl;
		cout << ISSUE_NUMBER_FILE << endl;
	}
	variant_letterfile.open(VARIANT_LETTER_FILE);
	if (!variant_letterfile)
	{
		cout << "Variant letter file open failure" << endl;
		cout << VARIANT_LETTER_FILE << endl;
	}
	series_namefile.open(PUBLISH_DATE_FILE);
	if (!series_namefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	condition_file.open(CONDITION_RATING_FILE);
	if (!condition_file)
	{
		cout << "Condition file open failure" << endl;
		cout << CONDITION_RATING_FILE << endl;
	}
	price_payedfile.open(PRICE_PAYED_FILE);
	if (!price_payedfile)
	{
		cout << "Price paid file open failure" << endl;
		cout << PRICE_PAYED_FILE << endl;
	}
*/
	cout << endl;
	return 0;
}
int getComicInfo()			// gets all of the comics' information from the user
{
	int comicInfo;
	cout << "Please enter series name." << endl;
	getline(cin, seriesName);
	
	
	cout << "Please enter issue name, if applicable." << endl;
	getline(cin, issueName); // Can be considered a subtitle
	
	cout << "Please enter author's name." << endl;
	getline(cin, author);
	
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
	 cin >> pricePayed;*/
	cout << endl;

	//++PROF+ANDREW:    This looks like it should be in a "print comic" function, not
	// this "input comic" function
	cout << seriesName << "| " << issueName << "| " << author <<
		//	"| " << artistOrPenciller  <<
		// "| " << colorist <<
		// "| " << issueNumber << variantLetter <<
		// "| " << publishDate <<
		// "| " << conditionRating <<
		// "| " << pricePayed <<
		endl;
	cout << endl;
	return (comicInfo);
}
int writeToFiles()			// take user inputs and put into respective files
{
	int write;
	series_namefile << seriesName;
	issue_namefile << issueName;
	author_file << author;
/*
	artist_fire << artistOrPenciller;
	colorist_file << colorist;
	issue_numberfile << issueNumber;
	variant_letterfile << variantLetter;
	publish_datefile << publishDate;
	condition_file << conditionRating;
	price_payedfile << pricePayed;
*/
	return (write);
}

int recallFiles ()			// calling the files to read inputs within
{
	int recall;
	seriesnamefile >> seriesName;
	issuenamefile >> issueName;
	authorfile >> author;
/*
	artistfire >> artistOrPenciller;
	coloristfile >> colorist;
	issuenumberfile >> issueNumber;
	variantletterfile >> variantLetter;
	publishdatefile >> publishDate;
	conditionfile >> conditionRating;
	pricepayedfile >> pricePayed;
*/
	return (recall);
}

int closefiles()			// closes the comic info files
{
	//++PROF+ANDREW:    these won't actually close anything - you need to pass the files in to the
	// function
	// These don't compile.
	/*series_namefile.close(SERIES_NAME_FILE);
	  issue_namefile.close(ISSUE_NAME_FILE);
	  author_file.close(AUTHOR_FILE);
	  artist_file.close(ARTIST_FILE);
	  colorist_file.close(COLORIST_FILE);
	  issue_numberfile.close(ISSUE_NUMBER_FILE);
	  variant_letterfile.close(VARIANT_LETTER_FILE);
	  series_namefile.close(PUBLISH_DATE_FILE);
	  condition_file.close(CONDITION_RATING_FILE);
	  price_payedfile.close(PRICE_PAYED_FILE);
	*/
	series_namefile.close();
	issue_namefile.close();
	author_file.close();
	/*artist_file.close();
	colorist_file.close();
	issue_numberfile.close();
	variant_letterfile.close();
	series_namefile.close();
	condition_file.close();
	price_payedfile.close();*/
	
	return 0;
}
/*
 should:
		load comic-book data into parallel arrays
		give the user a command to save the data from the arrays into files
		give the user a command to load the data from the files into the arrays
 */ 
void save_comic_files()
{}
int loadComicFiles()
{
	int loaded;
	//open and check ifstream files
	return (loaded);
}
int listComics()
{
	int list;
	cout << "How would you like your comics organized?" << endl;
	//cout << make list to choose what variable to organize comics by << endl; 
	//do cases for the cout formatting (try to do it in chart format)
	return (list);
}



int main()
{
	char userAnswer;
	//int comicInfo;
	int numberOfComics =0;

	openAndCheckOFiles();

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
	getComicInfo();
	numberOfComics++;

	cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
	 cin >> userAnswer;
// I probably need if/ else
	while (numberOfComics <= MAX_NUM_OF_COMICS && userAnswer == 'Y')
	{
		if (userAnswer == 'Y')
		{
			cin.ignore(100,'\n');
			getComicInfo(); //will call function here
			numberOfComics++;
			cout << "Do you want to input more comics? Y (Yes) or N (No)" << endl;
			cin >> userAnswer;
		}
	}
	if (userAnswer == 'N')
	{
		closefiles();
		save_comic_files();
		loadComicFiles();
		cout << endl;
		cout << endl;
		listComics();
		cout << "You entered: " << numberOfComics << " comics!" << endl;
		cout << "Keep your comics safe! Thank you for using this program." << endl;
	}
	


// search function??
// find a way to select and alphebetize	by selected parameters
// Need to figure out storage. watch lecture 0x17 (3-1-19)
// stay tune for arrays
return 0;
}
