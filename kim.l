digit								[0-9]
letter								[a-zA-Z_]
delim								[ \t]
line								[\n]
ws									{delim}+

%{
#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;

#include "y.tab.h"
#include "type.h"
extern long yylval;
extern int line_no;
extern A_ID *current_id;
char *makeString(char *);
int checkIdentifier(char *);
%}


%%
{ws}								{ }
{line}								{line_no++;}
auto 								{return(AUTO_SYM);}
break								{return(BREAK_SYM);}
case								{return(CASE_SYM);}
continue							{return(CONTINUE_SYM);}
default								{return(DEFAULT_SYM);}
do									{return(DO_SYM);}
else								{return(ELSE_SYM);}
enum								{return(ENUM_SYM);}
for									{return(FOR_SYM);}
if									{return(IF_SYM);}
return 								{return(RETURN_SYM);}
sizeof								{return(SIZEOF_SYM);}
static								{return(STATIC_SYM);}
struct								{return(STRUCT_SYM);}
switch								{return(SWITCH_SYM);}
typedef								{return(TYPEDEF_SYM);}
union								{return(UNION_SYM);}
while								{return(WHILE_SYM);}
goto								{return(GOTO_SYM);}
print								{return(PRINT_SYM);}
const								{return(CONST_SYM);}

"+"									{return(PLUS);}
"*"									{return(STAR);}
"("									{return(LP);}
")"									{return(RP);}
"="									{return(ASSIGN);}
"++"								{return(PLUSPLUS);}
"--"								{return(MINUSMINUS);}
"->"								{return(ARROW);}
"<"									{return(LSS);}
">"									{return(GTR);}
"<="								{return(LEQ);}
">="								{return(GEQ);}
"=="								{return(EQL);}
"!="								{return(NEQ);}
"&&"								{return(AMPAMP);}
"||"								{return(BARBAR);}
"..."								{return(DOTDOTDOT);}
"["									{return(LB);}
"]"									{return(RB);}
"{"									{return(LR);}
"}"									{return(RR);}
":"									{return(COLON);}
"."									{return(PERIOD);}
","									{return(COMMA);}
"!"									{return(EXCL);}
"/"									{return(SLASH);}
"%"									{return(PERCENT);}
"|"									{return(BAR);}
"&"									{return(AMP);}
";"									{return(SEMICOLON);}
"-"									{return(MINUS);}
"~"									{return(NOT);}
"?"									{return(QUEST_MARK);}

{digit}+							{yylval=atoi(yytext); return(INTEGER_CONSTANT);}
{digit}+\.{digit}+					{yylval=makeString(yytext); return(FLOAT_CONSTANT);}
{letter}({letter}|{digit})*			{return(checkIdentifier(yytext));}
\"([^"\n]|\\["\n])*\"				{yylval=makeString(yytext); return(STRING_LITERAL);}
\'([^'\n]|\'\')\'					{yylval=*(yytext+1); return(CHARACTER_CONSTANT);}
"//"[^\n]*							{ } 
"/*"([^*/]|[^*]"/"|"*"[^/])*"*/"	{ } 


%%
char *makeString(char* s){
	char* t;
	t = malloc(strlen(s)+1);
	strcpy(t, s);
	return(t);
}

int checkIdentifier(char* s){
	A_ID *id;
	char *t;
	id = current_id;
	while (id){
		if (strcmp(id->name, s)==0) break;
		id = id->prev;
	}
	if (id==0){
		yylval = makeString(s);
		return (IDENTIFIER);
	}
	else if (id->kind == ID_TYPE){
		yylval = id->type;
		return (TYPE_IDENTIFIER);
	}
	else{
		yylval = id->name;
		return (IDENTIFIER);
	}
}
