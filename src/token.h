typedef struct Token 
{
void *token_value; 
char token_type[];
} token;

struct Token *initializeTokenList(void);
void tokenize(void);