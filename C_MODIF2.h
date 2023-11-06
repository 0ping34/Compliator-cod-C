typedef enum { typeCon, typeId, typeOper, typeIntCon, typeFloatCon,typeDoubleCon,typeLongCon,typeUnsignedIntCon,typeSignedCon,typeShortCon,typeUnsignedLongCon} nodeEnum;

/* constants */
typedef struct {
   int type; 
    union {
        int iValue; /* int */        
        float fValue;  /* float */        
	double dValue; /* double */   
	long lValue; /* long */   
	unsigned uValue; /* unsigned */   
	signed sValue; /* signed */   
	short shValue; /* short */   
	unsigned long ulValue; /*unsigned long*/
    } value;
} conNodeType;

/* identifiers */
typedef struct {
    int i; /* index in the symbol table */
} idNodeType;

/* operators */
typedef struct {
    int oper; /* operator */
    int nops; /* number of operands */
    struct nodeTypeTag *op[1]; /* operands */
} oprNodeType;

typedef struct nodeTypeTag {
    nodeEnum type; /* type of node */
    union {
        conNodeType con; /* constants */
        idNodeType id; /* identifiers */
        oprNodeType opr; /* operators */
    };
} nodeType;

typedef struct {
    int type; 
    union {
        int iValue;
        float fValue;  
	double dValue;
	long lValue;
	unsigned uValue;
	signed sValue;
	short shValue;
	unsigned long ulValue;
	
    } value;
} symEntry;

extern symEntry sym[208];  /* symbol table */
