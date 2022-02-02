void menu();

void init(){
	menu();
}

void menu(){
	int var = 1;
	int inp;

	initscr();
	while (true) {
		clear();
		//print Title screen
		printw("%s\n\n",&title);
		if (var > 0){
			printw("	/\\ > %s\n",&names[var - 1][0]);
		}
		else {
			printw("\n");
		}
		printw("select > %s\n",&names[var][0]);
		if (var < progs - 1){
			printw("	\\/ > %s\n",&names[var + 1][0]);
		}
		inp = getch();
		//get Keys
		if (inp == 10){
			endwin();
			system("clear");
			system(&runs[var][0]);
			system("clear");
		}
		if (inp == 113){
			endwin();
			return;
		}
		if (inp == 106 && var - 1 != -1){
			var = var -1;
		}
		if (inp == 107 && var + 1 != progs){
			var = var + 1;
		}
	}
}
