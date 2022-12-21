typedef struct Token 
{
void *token_value; 
int token_type;
} token;

struct Token *initializeTokenList(void);
struct Token *initToken(void *value, int type);
void tokenize(void);