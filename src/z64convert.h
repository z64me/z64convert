#define  NAME     "z64convert"
#define  VERSION  "1.0.1"
#define  AUTHOR   "<z64.me>"

extern const char *z64convert(
	int argc
	, const char *argv[]
	, FILE *docs
	, void (die)(const char *fmt, ...)
);
extern char *z64convert_flavor(void);

