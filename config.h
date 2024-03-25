/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{" ",           "memory.sh",                            10,                     0},
	{"",            "nettraffic.sh",                         1,                     0},
	{"",            "internet.sh",                          10,                     0},
	{"",            "volume.sh",                             0,                     1},
	{"",            "datetime.sh",                          60,                     0},
	{" ",          "switch_layout.sh",                     0,                      2},
	{"",            "battery.sh",                           30,                     0},
};

/* sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;
