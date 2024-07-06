/* modify this file to change what commands output to your statusbar, and
 * recompile using the make command.
 *
 * run `kill -$(( 34 + signalnum )) $(pidof dwmblocks)` to update the dwmblocks
 * status text
 */
static const Block blocks[] = {
	/*Icon*/    /*Command*/                                     /*Update Interval*/     /*Update Signal*/
	{"",        "volume.sh get",                                         0,                     5},
	{"",        "backlight.sh get",                                      0,                     4},
	{"",        "sb-date.sh",                                        86400,                     3},
	{"",        "sb-time.sh",                                           60,                     2},
	{"",        "sb-battery.sh",                                        60,                     1},
};


/* sets delimiter between status commands. NULL character ('\0') means no delimiter. */
static char delim[] = " | ";
static unsigned int delimLen = 5;
