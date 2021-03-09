//C2 P5 Story Adventure 
// Demon Slayer
//For theme, see the game's introduction

# include <iostream>
# include <string>
# include <cstdlib> //generates random number
# include <ctime> //returns current time
# include <iomanip>
# include <chrono>
# include <thread>

using namespace std;
int playerChoice;
char playAgain = 'Y';
int goodChoice;
enum READ {Y};

int main()
{
	cout << "★ ☆ ★ ☆ Demon Slayer ★ ☆ ★ ☆";
	//READ
	string message = "\n\nIt is 1919, and in the quaint village of Takayama, innocent people have been disappearing due to a demon outbreak.";
	string message1 = "\n\nWith this being said, the origin of these creatures is currently unknown.";
	
	string message2 = "\n\nSome of the many victims of this epidemic include the family of Tajiro Kamado.";
	string message3 ="\n\nAfter a demon ate his family with the exception of his demon-turned sister - Nezuko,";
	string message4 = "\n\nTajiro Kamado trains to become apart of the Demon Slayer Corps to avenge his family and seek a cure for his sister.";
	string message6 ="\n\nNow, please enter the following information to begin your adventure as a Demon Slayer:";
		for (const auto c : message)
		{
		    cout << c << std::flush;
		    this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message1)
		{
		    cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message2)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
	    }
		for (const auto c : message3)
		{
		    cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message4)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message6)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
	while ((playAgain == 'Y') || (playAgain == 'y'))
	{
	    string message8 = "\n\nWhich character would you like to play as in this brutal story?";
	    string message9 = "\n\n1. Tajiro Kamado";
	    string message10 = "\tOR";
	    string message11 = "\t2. Nezuko Kamado\n";
	    string message12 = "\nYou will now begin the game as Tajiro Kamado!";
	    string message13 = "\nYou will now begin the game as Nezuko Kamado!";
	    string message14 = "\n\t☆ Sorry, I didn't understand that.\n\nYou will be assigned to play the game as Tajiro Kamado!";
	   for (const auto c : message8)
	   {
		   cout << c << std::flush;
		   this_thread::sleep_for(chrono::milliseconds(100));
	   }
	   for (const auto c : message9)
	   {
		    cout << c << std::flush;
		    this_thread::sleep_for(chrono::milliseconds(100));
	    }
	    for (const auto c : message10)
		{
		    cout << c << std::flush;
		    this_thread::sleep_for(chrono::milliseconds(100));
	    }
	    for (const auto c : message11)
		{
		    cout << c << std::flush;
		    this_thread::sleep_for(chrono::milliseconds(100));
	    }
	    cin >> playerChoice;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.";
			cin >> playerChoice;
		}
	    
	    switch (playerChoice)
		{
			case 1:        
			
				for (const auto c : message12)
				{
				   	cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			case 2:
			
				for (const auto c : message13)
				{
					cout << c << std::flush;
				   	this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			default:
			
				for (const auto c : message14)
				{
				   	cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
		}
		
		string message15 = "\n\nIt's important to note that in this game, you will be able to gain 'slayer points'.";
		for (const auto c : message15)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message16 = "\n\nSlayer points can be acquired when you choose the correct action of the two choices given.";
		for (const auto c : message16)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message17 = "\n\nAnd at the end of the game, your slayer points will be totaled.";
		for (const auto c : message17)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message18 = "\n\nLet's start the game!";
		for (const auto c : message18)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message19 = "\n\nAs Tajiro and Nezuko venture into the crowded streets of Asakusa, for Tajiro's first quest as a demon slayer,";
		for (const auto c : message19)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message20 = " you both identify the scent of a nearby demon.";
		for (const auto c : message20)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message21 = "\n\nHow do you react?";
		for (const auto c : message21)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message22 = "\n\n1. Find and confront the demon.";
		for (const auto c : message22)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message23 = "\tOR";
		for (const auto c : message23)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		string message24 = "\t2. Sneak away unseen.\n";
		for (const auto c : message24)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> playerChoice;
		   	
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.\n";
			cin >> playerChoice;
		}
	
		string message25 = "\n\nSlayer point acquired!";
		string message27 = "\n\nTo your horror, you spot this demon almost immediately - Muzan Tibutsji, leader of the Twelve Kizuki, disguised in civilian clothing as the father of a human family."; 
		string message28 = "\n\nMuzan also spots you, recognising you and your affiliation with the Demon Slayer Corps.";
		string message29 = "\n\nLeading him to casually slice the neck of a passerby, turning him into a demon.";
		
		string message30 = "\n\nThis demon's strong scent forces you to turn back around, pushing you to locate this demon in close vicinity.";
		string message31 = "\n\n'AAAHHH!!' A passerby screamed in pain, gripping his neck tight has blood spatted out, you then made eye contact with the demon responsible for this: Muzan Tibutsuji - leader of the Twelve Kizuki.";
		switch (playerChoice)
		{
			case 1:        
				goodChoice = (goodChoice + 1);
				for (const auto c : message25)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message27)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message28)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message29)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			case 2:
				for (const auto c : message30)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message31)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			default:
				cout << "\n\t☆ Could you please repeat that?\n";
				break;
		}
		
		string message32 = "\n\nHe's attempting to distract you by converting an innocent human into a demon!";
		string message33 = "\n\nThe newly-turned demon is now going on a rampage!";
		string message34 = "\n\nWhat will you do?";
		string message35 = "\n\n1. I can't afford to let Muzan slip away, especially being that he murdered my family!";
		string message36 = "\n\t\t\t\tOR";
		string message37 = "\n2. With many humans close by, I have to take care of this victim.\n";
		for (const auto c : message32)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message33)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message34)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message35)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message36)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message37)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		
		cin >> playerChoice;
		   	
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.\n";
			cin >> playerChoice;
		}
		string message38 = "\n\nBefore you even notice, Muzan has distanced himself from you since harming the bystander, forcing you to focus on helping the victim.";
		string message39 = "\n\nIn saying this, you vow to find him again soon.";
		
		string message40 = "\n\nSlayer point acquired!";
		string message42 = "\n\nWhile assisting the victim in the situation, you vow to find Muzan again, who has by this point, disappeared from your field of sight.";
		switch (playerChoice)
		{
			case 1:  
				for (const auto c : message38)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message39)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			case 2:
				goodChoice = (goodChoice + 1);
				for (const auto c : message40)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message42)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			
			default:
				cout << "\n\t☆ Could you please repeat that?\n";
				break;
		}
		string message43 = "\n\n*At Muzan's Hideout*";
		string message44 = "\n\n'Susamaru and Yahaba, you two are responsible for killing Tajiro, the young man with the hanafuda earrings.'";
		string message45 = "\n\nBoth demons who possess blood demon art, Susamaru - with her temari balls, and Yahaba - possessing eyes with arrows for pupils on his palms, are tasked with finding and killing Tajiro.";
		string message46 = "\n\n*Several hours later*";
		string message47 = "\n\nJust before you both sit down to eat a katsudon bowl, two demons pummel into the restaurant building, revealing themselves to you.";
		string message48 = "\n\nThink fast! How will you react?";
		string message49 = "\n\n1. We need to dodge Susamaru's temari balls!";
		string message50 = "\n\t\t\tOR";
		string message51 = "\n2. These demons seem very powerful, maybe we can somehow escape?\n";
		for (const auto c : message43)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message44)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message45)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message46)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message47)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message48)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message49)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message50)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message51)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> playerChoice;
		
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.\n";
			cin >> playerChoice;
		}	
		
		string message52 = "\n\nSlayer point acquired!";
		string message53 = "\n\nWhile you and Nezuko struggle to dodge yourselves from being hit with the temari balls, Tajiro and Nezuko begin to slash the balls with his sword and her claws.";
		string message54 = "\n\nUnfortunately, you both face great difficulty in slashing them since they swerve in physically impossible directions, proving to be very risky.";
		
		string message55 = "\n\nWhile primarily focusing on escaping, Nezuko's leg is cut off by a temari ball!";
		string message56 = "\n\n'NEZUKO!' Tajiro yells, as he swoops to her side, but luckily, due to Nezko's demon abilites, she will be able to recover.";
		string message57 = "\n\nThe new plan is to slash the balls, although Tajiro discovers that by doing this, the termari balls swerve in physically impossible directions, proving to be very risky.";
		switch (playerChoice)
		{
			case 1:        
				goodChoice = (goodChoice + 1);
				for (const auto c : message52)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message53)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				} 
				for (const auto c : message54)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			case 2:
				for (const auto c : message55)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message56)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message57)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
				
			default:
				cout << "\n\t☆ Could you please repeat that?\n";
				cin >> playerChoice;
				break;
		}
		string message58 = "\n\nClearly, Yahaba is responsible for altering the trajectory of Susamaru's temari balls.";
		string message59 = "\n\nHow do you two plan to get out of this alive?";
		string message60 ="\n\n1. Is there someway to stop Yahaba's arrows?";
		string message61 = "\n\t\tOR";
		string message62 = "\n2. Is Nezuko alright?\n";
		for (const auto c : message58)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message59)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message60)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message61)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message62)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> playerChoice;
		
			while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.\n";
			cin >> playerChoice;
		}	
			
		string message000 = "\n\nSlayer point acquired!";	
		string message63 = "\n\nYou attempt to slash the arrows. As a direct result, your body is thrashed against the nearby buildings and trees, dragged from left to right, then up and down to the ground.";
		string message64 = "\n\nFortunately, you were able to form an attack to break your fall.";
		string message65 = "\n\nIt is safe to conclude that you need to avoid touching the arrows at all costs, being that now your body is in critical condition.";
		
		string message66 = "\n\nFortunately, Nezuko's leg has completely regrown back.";
		string message67 = "\n\nYou attempt to slash the arrows. As a direct result, your body is thrashed against the nearby buildings and trees, dragged from left to right, then up and down to the ground.";
		string message68 = "\n\nFortunately, you were able to form an attack to break your fall.";
		string message69 = "\n\nIt is safe to conclude that you need to avoid touching the arrows at all costs, being that now your body is in critical condition.";
		switch (playerChoice)
		{
			case 1:      
				goodChoice = (goodChoice + 1);
				for (const auto c : message000)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message63)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message64)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message65)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
			case 2:
				for (const auto c : message66)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message67)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message68)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message69)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				break;
		
			default:
				cout << "\n\t☆ Could you please repeat that?\n";
				break;
		}
		string message70 = "\n\nHow will you be able to stop Yahaba while not touching Yahaba's arrows?";
		string message71 = "\n\n1. Give up.";
		string message72 = "\tOR";
		string message73 = "\t2. Would my past training help me here?\n";
		for (const auto c : message70)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message71)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message72)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		for (const auto c : message73)
		{
			cout << c << std::flush;
			this_thread::sleep_for(chrono::milliseconds(100));
		}
		cin >> playerChoice;
			
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout << "\n\t☆ Sorry, I didn't understand that.\n";
			cin >> playerChoice;
		}	
		string message74 = "\n\nI can't fight much longer...";
		string message75 = "\n\nI'm in critical contition and on top of it, these demons don't seem like they will slow down.";
		string message76 = "\n\nJust as hope was lost, tears begin to blur your eyesight, while your body is torn apart by the temari balls.";
		string message77 = "\n\nGame Over.";
		string message78 = "\n\nTotal Slayer Points:";
		string message79 = "\n\n\tWould you like to play again (Y/N)?\n";
		
		string message80 = "\n\nSlayer point acquired!";
		string message82 = "\n\nIf those demons think I'm finished, they have another thing coming!";
		string message83 = "\n\nLooking back at my training before becoming a demon slayer, unleashing a combination of those movements will enable me to defeat Yahaba without touching the arrows!";
		string message84 = "\n\nAs you unleash a fierce combination of attacks against Yahaba, you are able to successfully decapitate the demon!";
		string message85 = "\n\nAlthough, as the rest of Yahaba disintegrates, he continues to attack, determined to kill you as he dies, forcing you to unleash move after move to lessen the impact, leaving you exhausted.";
		string message86 = "\n\nNow, what will you do about Susamaru?";
		string message87 = "\n\n1. Give up.";
		string message88 = "\tOR";
		string message89 = "\t2. Use demon blood art somehow?\n";
		switch (playerChoice)
		{
			case 1:        
				for (const auto c : message74)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message75)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message76)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message77)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message78)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				cout << " " << goodChoice;
				for (const auto c : message79)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				cin >> playAgain;
				break;
			case 2:
				goodChoice = (goodChoice + 1);
				for (const auto c : message80)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message82)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message83)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message84)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message85)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message86)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message87)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message88)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				for (const auto c : message89)
				{
					cout << c << std::flush;
					this_thread::sleep_for(chrono::milliseconds(100));
				}
				cin >> playerChoice;
				string message90 = "Give up.";
				string message91 = "\n\nJust as hope was lost, tears begin to blur your eyesight, while your body is torn apart by the temari balls.";
				string message92 = "\n\nGame Over.";
				string message93 = "\n\nSlayer Points:";
				string message94 = "\n\n\tWould you like to play again (Y/N)?\n";
				
				string message95 = "\n\nSlayer point acquired!";
				string message97 = "\n\nNezuko's special demon abilities will allow you to defeat Susamaru with demon blood art!";
				string message99 = "\n\nAs a result of this, Susamaru's brain functions are lowered through the scent of her blood, causing Susamaru to accidentally activate the Kibutsuji curse - a curse that forces demons to be killed instantly if they utter his name, causing her own death.";
				string message96 = "\n\nSlayer Points:";
				string message100 = "\n\nDemo Complete:";
				string message101 = "\n\nFor a one-time purchase of $1,000, YOU can find out what happens to Tajiro and Nezuko!";
				string message102 = "\n\nWould you like to play again (Y/N)?\n";
					switch (playerChoice)
					{
						case 1:
							for (const auto c : message90)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message91)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message92)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message93)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							cout << " " << goodChoice;
								for (const auto c : message94)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							cin >> playAgain;
							break;
						case 2:
					    	for (const auto c : message95)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message97)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message99)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							goodChoice = (goodChoice + 1);
						   	for (const auto c : message96)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							cout << " " << goodChoice;
							for (const auto c : message100)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message101)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							for (const auto c : message102)
							{
								cout << c << std::flush;
								this_thread::sleep_for(chrono::milliseconds(100));
							}
							cin >> playAgain;
					   	
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "\n\t☆ Sorry, I didn't understand that.";
				cin >> playAgain;
			}
			
						break;
					default:
						cout << "\n\t☆ Could you please repeat that?\n";
						break;
						
					}
		}
					
	}
					
	string message103 = "\nHope you will play again soon!";
	string message104 = "\n\n© 2019 Isabella Talijancic All Rights Reserved.";
	for (const auto c : message103)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	for (const auto c : message104)
	{
		cout << c << std::flush;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	return 0;
}