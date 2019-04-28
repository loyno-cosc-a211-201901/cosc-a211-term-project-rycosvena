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
// global for each variable Vectors NEED to be incorporated
	//with sort and searches
// Incorporate all functions into main
// probably need cases for each input user preference (completed)
// Vectors w/ sets





// Program Name: Comic Book Organizer
/* Purpose: To display and organize the comics inputted. Should display
 * the comics' series name, issue name, issue number, author, and main artist.
 * Hopefully it will organize these titles by the users selected parameters. */
// Author: Kyla Evans
// Date Last Modified: 4/28/19
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <set>
using namespace std;

// Constants for file calling and usage
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
//const string PRICE_PAID_FILE = LOCATION_OF_FILES + "Final Project Submission.txt";


//fstream series_namefile, issue_namefile, authorfile;, artistfile, coloristfile, issue_numberfile, variant_letterfile, publish_datefile, conditionfile, price_payedfile;
ofstream series_namefile, issue_namefile, author_file, artist_file, colorist_file, issue_numberfile, variant_letterfile, publish_datefile, condition_file, price_paidfile;
ifstream seriesnamefile, issuenamefile, authorfile, artistfile, coloristfile, issuenumberfile, variantletterfile, publishdatefile, conditionfile, pricepaidfile;
const int MAX_NUM_OF_COMICS = 500;
int numberOfComics =0;
string seriesName[MAX_NUM_OF_COMICS];					// the complete title of the series
string issueName[MAX_NUM_OF_COMICS];					// some comics have specific names for the issue
string author[MAX_NUM_OF_COMICS];						// enter full name
//string artistOrPenciller[MAX_NUM_OF_COMICS];				// the drawer
//string colorist[MAX_NUM_OF_COMICS];						// the colorer
//int issueNumber[MAX_NUM_OF_COMICS];						// the number assighned to an issue in a series
//char variantLetter[MAX_NUM_OF_COMICS];					// this letter corresponds w/ the different cover arts available for an issue (some are valuable than others)
//string publishDate[MAX_NUM_OF_COMICS];					// the date published
//string conditionRating[MAX_NUM_OF_COMICS];
//double pricePaid[MAX_NUM_OF_COMICS];
// Use getline for the strings

bool openAndCheckOFiles()			// checks and opens the comic info writing files
{
	series_namefile.open(SERIES_NAME_FILE);
	if (!series_namefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	else
	{
		cout << " Series name file open success." << endl;
	}
	issue_namefile.open(ISSUE_NAME_FILE);
	if (!issue_namefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	else
	{
		cout << " Issue name file open success." << endl;
	}
	author_file.open(AUTHOR_FILE);
	if (!author_file)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
	else
	{
		cout << " Author file open success." << endl;
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
	price_paidfile.open(PRICE_PAiD_FILE);
	if (!price_paidfile)
	{
		cout << "Price paid file open failure" << endl;
		cout << PRICE_PAYED_FILE << endl;
	}
*/
	cout << endl;
	return 0;
}
bool openAndCheckIFiles()			// checks and opens the comic info reading files
{
	seriesnamefile.open(SERIES_NAME_FILE);
	if (!seriesnamefile)
	{
		cout << "Series name file open failure" << endl;
		cout << SERIES_NAME_FILE << endl;
	}
	else
	{
		cout << " Series name file open success." << endl;
	}
	issuenamefile.open(ISSUE_NAME_FILE);
	if (!issuenamefile)
	{
		cout << "Issue name file open failure" << endl;
		cout << ISSUE_NAME_FILE << endl;
	}
	else
	{
		cout << " Issue name file open success." << endl;
	}
	authorfile.open(AUTHOR_FILE);
	if (!authorfile)
	{
		cout << "Author file open failure" << endl;
		cout << AUTHOR_FILE << endl;
	}
	else
	{
		cout << " Author file open success." << endl;
	}
/*
	artistfile.open(ARTIST_FILE);
	if (!artistfile)
	{
		cout << "Artist file open failure" << endl;
		cout << ARTIST_FILE << endl;
	}
	else
	{
		cout << " Artist file open success." << endl;
	}
	coloristfile.open(COLORIST_FILE);
	if (!coloristfile)
	{
		cout << "Colorist file open failure" << endl;
		cout << COLORIST_FILE << endl;
	}
	else
	{
		cout << " Colorist file open success." << endl;
	}
	issuenumberfile.open(ISSUE_NUMBER_FILE);
	if (!issuenumberfile)
	{
		cout << "Issue number file open failure" << endl;
		cout << ISSUE_NUMBER_FILE << endl;
	}
	else
	{
		cout << " Issue number file open success." << endl;
	}
	variantletterfile.open(VARIANT_LETTER_FILE);
	if (!variantletterfile)
	{
		cout << "Variant letter file open failure" << endl;
		cout << VARIANT_LETTER_FILE << endl;
	}
	else
	{
		cout << " Variant letter file open success." << endl;
	}
	publishdate.open(PUBLISH_DATE_FILE);
	if (!publishdatefile)
	{
		cout << "Publish date file open failure" << endl;
		cout << PUBLISH_DATE_FILE_ << endl;
	}
	else
	{
		cout << " Publish date file open success." << endl;
	}
	conditionfile.open(CONDITION_RATING_FILE);
	if (!conditionfile)
	{
		cout << "Condition file open failure" << endl;
		cout << CONDITION_RATING_FILE << endl;
	}
	else
	{
		cout << " Condition rating file open success." << endl;
	}
	pricepaidfile.open(PRICE_PAID_FILE);
	if (!pricepaidfile)
	{
		cout << "Price paid file open failure" << endl;
		cout << PRICE_PAID_FILE << endl;
	}
	else
	{
		cout << " Price paid file open success." << endl;
	}
*/
	cout << endl;
	return 0;
}
int getComicInfo()			// gets all of the comics' information from the user
{
	int comicInfo;
	cout << "Please enter series name." << endl;
	getline(cin, seriesName[0]);
	
	
	cout << "Please enter issue name, if applicable." << endl;
	getline(cin, issueName[0]); // Can be considered a subtitle
	
	cout << "Please enter author's name." << endl;
	getline(cin, author[0]);
	
	/*cout << "Please enter the artist's or penciller's name." << endl;
	getline(cin, artistOrPenciller[0]); // Comics can say either
	cout << "Please enter colorist's name." << endl;
	getline(cin, colorist[0]); // The artist usually only draws, not colors
	cout << "Please enter issue number." << endl;
	 cin >> issueNumber[0];
	cout << "Please enter variant letter." << endl;
	 cin >> variantLetter[0];
	cout << "Please enter the publish date. Separate the month and year with a slash if necessary." << endl;
	 cin >> publishDate[0]; // string/getline didn't work.
	cout << "Please enter condition rating. (Use letter notation)." << endl;
	 cin >> conditionRating[0]; // Letter rating system prefered
	cout << "Please enter the price you paid for the comic. (DO NOT PUT COMMAS)" << endl;
	 cin >> pricePaid[0];*/
	cout << endl;


	
	cout << endl;
	return (comicInfo);
}
int writeToFiles()			// take user inputs and put into respective files
{
	int write;
	series_namefile << seriesName[0] << endl;
	issue_namefile << issueName[0] << endl;
	author_file << author[0] << endl;
/*
	artist_fire << artistOrPenciller[0];
	colorist_file << colorist[0];
	issue_numberfile << issueNumber[0];
	variant_letterfile << variantLetter[0];
	publish_datefile << publishDate[0];
	condition_file << conditionRating[0];
	price_paidfile << pricePaid[0];
*/
	return (write);
}

int recallFiles ()			// calling the files to read inputs within
{
	int recall;
	seriesnamefile >> seriesName[0];
	issuenamefile >> issueName[0];
	authorfile >> author[0];
/*
	artistfire >> artistOrPenciller[0];
	coloristfile >> colorist[0];
	issuenumberfile >> issueNumber[0];
	variantletterfile >> variantLetter[0];
	publishdatefile >> publishDate[0];
	conditionfile >> conditionRating[0];
	pricepaidfile >> pricePaid[0];
*/
	return (recall);
}

int closeOfiles()			// closes the comic info files
{
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
	  price_paidfile.close(PRICE_PAID_FILE);
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
	price_paidfile.close();*/
	
	return 0;
}

int closeIfiles()
{
	seriesnamefile.close();
	issuenamefile.close();
	authorfile.close();
	/*artistfile.close();
	coloristfile.close();
	issuenumberfile.close();
	variantletterfile.close();
	seriesnamefile.close();
	conditionfile.close();
	pricepaidfile.close();*/
	
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
	openAndCheckIFiles();
	
	return (loaded);
}
int listComics()
{
	int list;
	int choice;
	int num = 1;
	loadComicFiles();
	cout << "How would you like your comics organized?" << endl;
	cout << endl;
	//make list to choose what variable to organize comics by
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(5) << "1: Series Name" << endl;
	cout << setw(5) << "2: Issue Name" << endl;
	cout << setw(5) << "3: Author" << endl;
	cout << setw(5) << "4: Artist/Penciller" << endl;
	cout << setw(5) << "5: Colorist" << endl;
	cout << setw(5) << "6: Issue Number" << endl;
	cout << setw(5) << "7: Publsh Date" << endl;
	cout << setw(5) << "8: Condition Rating" << endl;
	cout << setw(5) << "9: Price Paid" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cin >> choice;
	cout << "You chose to organize your comics by option #" << choice << "." << endl;
	//do cases for the cout formatting (try to do it in chart format)
	for (numberOfComics = 0; numberOfComics <= MAX_NUM_OF_COMICS; numberOfComics++)
	{
		switch (choice)
		{
			case 1: cout << setw(10) << num++ << ": " << seriesName[numberOfComics] << "| " << issueName[numberOfComics] << "| " << author[numberOfComics] <<
						// "| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						// "| " << pricePaid[0] <<
						endl;
					  break;
			case 2: cout << issueName[0] << "| " << seriesName[0] << "| " << author[0] <<
						//	"| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						// "| " << pricePaid[0] <<
						endl;
					  break;
			case 3: cout << author[0] << "| " << seriesName[0] << "| " << issueName[0] << 
						//	"| " << artistOrPenciller[0] <<
						// "| " << colorist[0] <<
						// "| " << issueNumber[0] << variantLetter[0] <<
						// "| " << publishDate[0] <<
						// "| " << conditionRating[0] <<
						// "| " << pricePaid[0] <<
						endl;
					  break;
			/*case '4': cout << artistOrPenciller[0] << "| " << seriesName[0] << "| " << issueName[0] << "| "
						//	<< author[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '5': cout << colorist[0] << "| " << issueName[0] << "| " << seriesName[0] << "| "
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '6': cout << issueNumber[0] << variantLetter[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '7': cout << publishDate[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << conditionRating[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '8': cout << conditionRating[0] << "| " << seriesName[0] << "| " << issueName[0] << "| " 
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << pricePaid[0] << endl;
					  break;
			case '9': cout << pricePaid[0] << "| " << seriesName[0] << "| " << issueName[0] << "| "
						//	<< author[0] << "| "
						//  << artistOrPenciller[0] << "| "
						//  << colorist[0] << "| "
						//  << issueNumber[0] << variantLetter[0] << "| "
						//  << publishDate[0] << "| " 
						//  << conditionRating[0] << endl;
					  break;*/
			default: cout << "You didn't enter your organizing choice." << endl;
			// Will try to restart questioning for choice. Choice function?
		}
	}
	closeIfiles();
	return (list);
}



int main()
{
	char userAnswer;
	//int comicInfo;
	

	openAndCheckOFiles();

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
		closeOfiles();
		save_comic_files();
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
