//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/        /*Command*/                /*Update Interval*/    /*Update Signal*/
	{" 📨: ",       "countmail",               1,                     11},
	{"CPU: ",       "cat ~/.cache/sysinfod",   1,                     0},
	{"RAM: ",       "showmem",                 10,                    0},
	{"",            "audio-device",            10,                    12},
    {"",            "getvol",                  2,                     14 },
	{"",            "wttrreport",              60*5,                  13},
	{"",            "datetime",                1,                     10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
