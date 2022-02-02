#define shell "bash"
#define title "quick-start-menue \n (j \"UP\" | k \"DOWN\" | q \"quit proramm\" | enter \"run selectet programm\" )"

int progs = 3; // write your number of defined programs here
char names[][64] = {"htop","shell","file manager"}; // write here the names they are displayed
char runs[][64] = {"htop -d 10",shell,"ranger"}; // write here the commands for the names
