// Code to create List 
// Used from lab01, written by John Shepherd

struct UrlListNode {
	char *urlName;
    int degrees; // number of out going links
	double pageRank; // relative pageRank
	struct UrlListNode *next;
};

struct UrlListRep {
	int size;           /**< number of elements in list */
	struct UrlListNode *first;     /**< node containing first value */
	struct UrlListNode *last;      /**< node containing last value */
};

UrlList newUrlList(void) {

    struct UrlListRep *L = malloc(sizeof *L);
    L->size = 0;
    L->first = 0;
    L->last = 0;
    return L;
}

UrlList createUrlList(char **urlArray, Graph g) {
    
    UrlList L = newUrlList(); 

    for (int i = 0; i < g->nV; i++) {
        urlListInsert(L, urlArray[i], g, urlArray);
    }
    return L;
}

static struct UrlListNode *newUrlNode(char *urlName, Graph g, char **urlArray) {
   
    struct UrlListNode *newUrl = malloc(sizeof *newUrl);
    newUrl->urlName = malloc(strlen(urlName) +1);
    strcpy(newUrl->urlName, urlName);

    newUrl->degrees = findNumDegrees(urlName, g, urlArray);
    // initialise all pageranks to 1/N 
    newUrl->pageRank = 1 / g->nV;
    newUrl->next = NULL;
    return newUrl;
}
void urlListInsert(UrlList L, char *url, Graph g, char **urlArray) {

    assert(L != NULL);
    struct UrlListNode *newNode = newUrlNode(url, g, urlArray);
        
    if (L->first == NULL) {
		L->first = newNode;
        L->last = newNode;
	} else {
		L->last->next = newNode;
		L->last = newNode;
	}
	L->size++;
}