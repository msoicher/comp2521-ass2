/*
// Code to create List 
// Code extracted from lab01, credit to John Shepherd

struct UrlListNode {
	char *urlName;
    int degrees; // number of out going links
	float pageRank; // relative pageRank
	struct UrlListNode *next;
};

struct UrlListRep {
	int size;           **< number of elements in list */
	//struct UrlListNode *first;     /**< node containing first value */
	//struct UrlListNode *last;      /**< node containing last value */};
/*
typedef struct UrlListRep *UrlList;

UrlList newUrlList(void) {

    struct UrlListRep *L = malloc(sizeof *L);
    L->size = 0;
    L->first = 0;
    L->last = 0;
    return L;
}

static struct UrlListNode *newUrlNode(char *urlName, Graph g, char **urlArray, float *currentIteration) {
   
    struct UrlListNode *newUrl = malloc(sizeof *newUrl);
    newUrl->urlName = malloc(strlen(urlName) +1);
    strcpy(newUrl->urlName, urlName);

    newUrl->degrees = findNumDegrees(urlName, g, urlArray);
    // pageRank is from currentIteration's pageRank, add respective index where url exists
    newUrl->pageRank = *(currentIteration + findUrlElement(urlArray, urlName));
    newUrl->next = NULL;
    return newUrl;
}

void urlListInsert(UrlList L, char *url, Graph g, char **urlArray, float *currentIteration) {

    assert(L != NULL);
    struct UrlListNode *newNode = newUrlNode(url, g, urlArray, currentIteration);
        
    if (L->first == NULL) {
		L->first = newNode;
        L->last = newNode;
	} else {
		L->last->next = newNode;
		L->last = newNode;
	}
	L->size++;
}

UrlList createUrlList(char **urlArray, Graph g, float *currentIteration) {
    
    UrlList L = newUrlList(); 

    for (int i = 0; i < g->nV; i++) {
        urlListInsert(L, urlArray[i], g, urlArray, currentIteration);
    }
    return L;
} */

