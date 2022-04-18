static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{" ", "pamixer --get-volume-human", 1, 10},
	{"", "sb-clock", 5, 1},
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
