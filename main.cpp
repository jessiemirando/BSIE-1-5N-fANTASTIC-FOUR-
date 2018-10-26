#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;
int main()



{
    //intro ng laro
    cout<<"   +------------------------------------------------------------------------------+"<<endl;
    cout<<"   |          *             *****  *****  *   *  *****  *   *  *****  *   *       |"<<endl;
    cout<<"   |         * *              *    *   *  *   *  *   *  **  *  *      *   *       |"<<endl;
    cout<<"   |        *****          *  *    *   *  *   *  ****   * * *  ****    ***        |"<<endl;
    cout<<"   |       *     *         *  *    *   *  *   *  *   *  *  **  *        *         |"<<endl;
    cout<<"   |      *       *        ****    *****  *****  *   *  *   *  *****    *         |"<<endl;
    cout<<"   |                                                                              |"<<endl;
    cout<<"   |                             *****  *****                                     |"<<endl;
    cout<<"   |                               *    *   *                                     |"<<endl;
    cout<<"   |                               *    *   *                                     |"<<endl;
    cout<<"   |                               *    *   *                                     |"<<endl;
    cout<<"   |                               *    *****                                     |"<<endl;
    cout<<"   |                                                                              |"<<endl;
    cout<<"   |     *   *  *****  *****  *        *      *      *****  *****  *****          |"<<endl;
    cout<<"   |     *   *  *   *  *      *    *   *     * *     *   *    *    *              |"<<endl;
    cout<<"   |     *****  *   *  *  **   *   *   *    *****    ****     *    *****          |"<<endl;
    cout<<"   |     *   *  *   *  *   *    * * * *    *     *   *   *    *        *          |"<<endl;
    cout<<"   |     *   *  *****  *****     *   *    *       *  *   *    *    *****          |"<<endl;
    cout<<"   |                                                                              |"<<endl;
    cout<<"   |                                **  **                                        |"<<endl;
    cout<<"   |                               * *  * *                                       |"<<endl;
    cout<<"   |                              * *    * *                                      |"<<endl;
    cout<<"   |                             * *      * *                                     |"<<endl;
    cout<<"   |                           ******    ******                                   |"<<endl;
    cout<<"   |                             *          *                                     |"<<endl;
    cout<<"   |                            *            *                                    |"<<endl;
    cout<<"   +------------------------------------------------------------------------------+"<<endl;
    getch();
    cout <<""<<endl;
    getch();
    cout <<""<<endl;
    cout <<""<<endl;
    cout <<"                     Please enter to start the game"<<endl;
    getch();

    //kukuhanin yung info ng manlalaro
    system ("CLS");
    int month;
    int year, day;
    string first;
    cout << "Enter your first name: ";
    cin >> first;
    string last;
    cout << "Enter your last name: ";
    cin >> last;
    string age;
    cout << "Enter your age: ";
    cin >> age;
    cout<<""<<endl;
    cout << "**Your Birthday**"<<endl;
    cout << "Enter month ex:(02) : ";
    cin >> month;
    cout << "Enter day ex:(25) : ";
    cin >> day;
    cout << "Enter year ex:(1992) : ";
    cin >> year;

    string name = first + " " + last;

    cout <<" "<<endl<<endl;

    system ("CLS");
    cout << "Hello " << name <<" you are "<< age << " years old"<< ", welcome to this journey." << endl;

    switch (month)
    {
        case 1:
            cout <<  "Your birthday is January "<< day <<" "<< year;

            break;
        case 2:
             cout <<  "Your birthday is Febuary "<< day <<" "<< year;
            break;
        case 3:
             cout <<  "Your birthday is March "<< day <<" "<< year;
            break;
        case 4:
             cout <<  "Your birthday is April "<< day <<" "<< year;
            break;
        case 5:
             cout <<  "Your birthday is May "<< day <<" "<< year;
            break;
        case 6:
             cout <<  "Your birthday is June "<< day <<" "<< year;
            break;
         case 7:
             cout <<  "Your birthday is July "<< day <<" "<< year;
            break;
        case 8:
             cout <<  "Your birthday is August "<< day <<" "<< year;
            break;
        case 9:
             cout <<  "Your birthday is September "<< day <<" "<< year;
             break;
        case 10:
             cout <<  "Your birthday is October "<< day <<" "<< year;
            break;
        case 11:
             cout <<  "Your birthday is November "<< day <<" "<< year;
            break;
        case 12:
             cout <<  "Your birthday is December "<< day <<" "<< year;
            break;


        default:

            cout << "Error! enter valid number of month";
            break;
    }

    //start na game
    getch();
    cout<<""<<endl;
    cout<<""<<endl;
    cout <<" YOUR GAME WILL START"<<endl<<endl;
    getch();
    cout <<" The game started when Hogwarts send a message through Hedwigs the owl to you,"<<endl;
    cout<<""<<endl;
    getch();
    cout <<"     saying that you are qualified to enter in the world of Witchcraft and Wizardry"<<endl;
    getch();
    cout<<""<<endl;
    cout<<""<<endl;
    cout <<"   ''crew! crew! crew!''"<<endl<<endl;
    getch();
    cout <<"   Owl(Hedwig) : greetings wizard, I am Hedwig and I'm here to send a message to you from hogwarts"<<endl<<endl;
    getch();
    cout <<"         please think about the offer, you are lucky receiving it"<<endl<<endl;
    getch();
    cout<<"          I will going back to you for your answer"<<endl;
    getch();

    system ("CLS");
    cout<<"Hedwig:"<<endl;
    getch();
    cout<<"       Hey "<<first<<", I'm back. Don't be afraid to explore. I'm here to guide you to your journey."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"        Do you want to experience the world of magic and mystery? "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    getch();
    cout<<"         Check this letter out. "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    getch();
    cout<<"     ------Press any key to read the letter....."<<endl;
    getch();


    system ("CLS");
    cout<<"DEAR Future Wizard,"<<endl;
    getch();
    cout<<""<<endl;
    cout<<"  We are pleased to inform you that you have a place at Hogwarts School of Witchcraft and Wizardy. "<<endl;
    getch();
    cout<<""<<endl;
    cout<<"  Please find enclosed list of all necessary books and equipment. Term begins on November. "<<endl;
    getch();
    cout<<""<<endl;
    cout<<"  We await your owl by no later than October."<<endl;
    cout<<""<<endl;
    getch();
    cout<<"                                      Yours sincerely,"<<endl;
    getch();
    cout<<"                                      Minerva McGonagall (Deputy Headmistress)"<<endl;
    getch();


    system ("CLS");
    cout<<"  'Knock! Knock!'"<<endl;Hedwig:
    getch();
    cout<<""<<endl;
    cout<<"  Hedwig: Hey "<<first<<", I'm back. Don't be afraid to explore."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          I'm here to guide you to your journey."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Let's go! Pack your bag and please arrive at the Kingcross station."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Hope you goodluck."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Hogwarts School of Witchcraft and Wizardry was divided into four houses,"<<endl;
    cout<<"          each bearing the last name of its founder."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          They are Godric Gryffindor, Helga Hufflepuff, Rowena Ravenclaw and Salazar Slytherin."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Each of the 4 houses has a set of positive and negative traits. "<<endl;
    getch();
    cout<<""<<endl;
    cout<<""<<endl;
    // lalagyan ko to ng loop
    cout<<"           -----Press any key if you want to accept the invitation to Hogwarts....."<<endl;
    getch();


    system ("CLS");

    cout<<"  Hedwig: You are using invisible flying car to go to hogwarts"<<endl;
    getch();

    cout<<"                                                                  "<<endl;
    cout<<"                      *************                               "<<endl;
    cout<<"                    **             **                             "<<endl;
    cout<<"            ********                *************                 "<<endl;
    cout<<"            *                                   *                 "<<endl;
    cout<<"            *   ****               ****         *                 "<<endl;
    cout<<"            *  *    *             *    *        *                 "<<endl;
    cout<<"            ****    ***************    **********                 "<<endl;
    cout<<"               *    *             *    *                          "<<endl;
    cout<<"                ****               ****                           "<<endl;
    cout<<"                                                                  "<<endl;
    cout<<"                                                                  "<<endl;

    cout<<"  You're now entering the world of magic and mystery..."<<endl;
    getch();

    cout<<" "<<endl;
    cout<<" "<<endl;
    getch();
    cout<<"  Minerva McGonagall:"<<endl;
    getch();
    cout<<" "<<endl;
    cout<<"                     Welcome! wizard "<<first<<", You made it to the Hogwarts School of Witchcraft and Wizardry."<<endl;
    getch();
    cout<<" "<<endl;
    cout<<"                     But before that, I hope you will choose the house that suits you"<<endl;
    getch();
    cout<<" "<<endl;
    cout<<"                     and well prepared for the challenges that awaits you"<<endl;
    getch();
    cout<<" "<<endl;
    cout<<"                     thank you Hedwig, for taking "<<first<<", here at our magical school safe."<<endl;
    getch();

    system ("CLS");
    cout<<"  Hedwig:"<<endl;
    getch();
    cout<<"          So let's talk deeply about the four houses."<<endl;
    getch();
    cout<<" "<<endl;
    cout<<"          First, GRYFFINDOR where bravery is the main quality."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Even when they don't have all the information, they will be the first to jump to action."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          They seek glory for the mere sake of getting glory, not money or academics or a position of power."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Their element is fire. Fire is the element of passion,"<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          and symbolizes wild emotions and lack of restraint."<<endl;
    getch();
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"          The second house is SYLTHERIN where they are calm and adaptive."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Positive traits include very crafty and sneaky, rarely ever getting caught."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          They may not have all the answers, but they know how to use what they have"<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          their element is water. Water is the element of adaptability."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          It is fluid and symbolized calmness, flowing whichever path offers the least resistance or the easier path"<<endl;
    getch();
    cout<<" "<<endl;
    cout<<" "<<endl;

    system ("CLS");
    cout<<"          Third, is HUFFLEPUFF where they are modest and meek."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          They do the right thing because it's the right thing, not for glory or selfish reasons."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          The element is earth. Earth is the element of stability and in this case deals with nature-like motherly"<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          affection (as opposed to the stubborn, gruff rocky nature more recent shows emphasize)."<<endl;
    getch();
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"          The fourth and last house is RAVWNCLAW where intelligence is the biggest trait."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Not only intelligent, but very unpredictable and creative with their spell work."<<endl;
    getch();
    cout<<""<<endl;
    cout<<"          Their element is air. Air is the element of freedom. Air people are typically the least"<<endl;
    getch();
    cout<<"          involved due to having their head in the clouds"<<endl;
    getch();
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"          Now that you know about the characteristics of each house, it's time for you to choose which among the houses fits your personality by playing wizard game(hangman)"<<endl;
    cout<<""<<endl;

//lalagyan ko to ng game

    const int MAX_WRONG = 8;

    vector<string> words;
    words.push_back("PIZZA");
    words.push_back("BACON");
    words.push_back("COMPLICATED");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];
    int wrong = 0;
    string soFar(THE_WORD.size(), '-');
    string used = "";

    cout << "\t\t\tWelcome to Hangman!";
	cout<<"\n\t\t\t-------------------\n\n";
	cout<<"You have exactly " <<(MAX_WRONG - wrong)<< " guesses, goodluck!";


    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "So far, the word is: " << soFar << endl;

        char guess;
        cout << "\n\nEnter your guess: ";
        cin >> guess;
        guess = toupper(guess); //make uppercase since secret word in uppercase

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        if (THE_WORD.find(guess) != string::npos)
        {
            cout << "That's right! " << guess << " is in the word.\n";
            for (unsigned int i = 0; i < THE_WORD.length(); ++i)
			{
                if (THE_WORD[i] == guess)
				{
                    soFar[i] = guess;
				}
			}
        }
        else
        {
			++wrong;
            cout << "Sorry, " << guess << " isn't in the word.\n";
			cout<<"You have " <<(MAX_WRONG - wrong)<< " guesses left.\n";

        }
    }
    if (wrong == MAX_WRONG)
	{
        cout << "Game over, you've been hanged!";

	}
    else
	{
        cout << "Congratulation! You've successfully guessed the secret word!";
	}

	//This is a little something i like to do at the end of my games ;)
    cout << "\nThe word was " << THE_WORD<<"\n\n";
	int rate;
	cout<<"Hegwig: now, you must choose which house you want to be part of base from your experience after playing hangman\n";
	cout<<"1 - If bravery surged in your blood \n";
	cout<<"2 - If you deal with the challenges with great adaptivity and calmlness\n";
	cout<<"3 - If you are modest and meeky throughout the challenges\n";
	cout<<"4 - If you are witty and intelligent as you deal with the challenges\n";
	cin>>rate;
	switch (rate)
	{
	case 1: cout<<"Congratulation! You belong to house of GRYFFINDOR\n"<<endl<<"THANK YOU FOR PLAYING OUR GAME :) HOPE YOU ENJOY!!!"; break;
	case 2: cout<<"Congratulation! You belong to house of SYLTHERIN\n"<<endl<<"THANK YOU FOR PLAYING OUR GAME :) HOPE YOU ENJOY!!!"; break;
	case 3: cout<<"Congratulation! You belong to house of UFFLEPUFF\n"<<endl<<"THANK YOU FOR PLAYING OUR GAME :) HOPE YOU ENJOY!!!"
	; break;
	case 4: cout<<"Congratulation! You belong to house of RAVWNCLAW\n"<<endl<<"THANK YOU FOR PLAYING OUR GAME :) HOPE YOU ENJOY!!!"; break;
	default: cout<<"Good-bye\n"; break;
	}
	system("pause");

return 0;
}
