/*
 * modify this file to change what commands output to your statusbar, and
 * ecompile using the make command.
 */
static const Block blocks[] = {
	/*Icon*/    /*Command*/                                             /*Update Interval*/     /*Update Signal*/
	{"",        "battery.sh",                                                   1,                     1},
};


/* sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;
