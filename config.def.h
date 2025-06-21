/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static char defbg[] = "black";
static char inpbg[] = "#005577";
static char errbg[] = "#CC3333";
static char *colorname[NUMCOLS] = {
	[INIT] =   defbg,   /* after initialization */
	[INPUT] =  inpbg,   /* during input */
	[FAILED] = errbg,   /* wrong password */
};

ResourcePref resources[] = {
	{ "defbg", XresString, &defbg },
	{ "inpbg", XresString, &inpbg },
	{ "errbg", XresString, &errbg },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* enable or disable (1 means enable, 0 disable) bell sound when password is incorrect */
static const int xbell = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
