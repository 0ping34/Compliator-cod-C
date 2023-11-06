#include <stdio.h>
#include "C_MODIF2.h"
#include "C_MODIF2.tab.h"
#define DOWHILE   11  //  pentru do-while
#include <math.h>

float ex(nodeType *p) {
    int val;
    if (!p) return 0;
    switch(p->type) {
        case typeIntCon:
            return p->con.value.iValue;
        case typeFloatCon:
            return p->con.value.fValue;
	 case typeDoubleCon:
            return p->con.value.dValue;
	  case typeLongCon:
            return p->con.value.lValue;
	  case typeUnsignedIntCon:
            return p->con.value.uValue;
	  case typeSignedCon:
            return p->con.value.sValue;
	  case typeShortCon:
            return p->con.value.shValue;
	   case typeUnsignedLongCon:
            return p->con.value.ulValue;
            case typeId:
    if (sym[p->id.i].type == typeIntCon) 
	    {
        return sym[p->id.i].value.iValue;
    } 
    else if (sym[p->id.i].type == typeFloatCon) 
    {
        return sym[p->id.i].value.fValue;
    }
    else if (sym[p->id.i].type == typeDoubleCon) 
    {
        return sym[p->id.i].value.dValue;
    }
     else if (sym[p->id.i].type == typeLongCon) 
    {
        return sym[p->id.i].value.lValue;
    }
    else if (sym[p->id.i].type == typeUnsignedIntCon) 
    {
        return sym[p->id.i].value.uValue;
    }
    else if (sym[p->id.i].type == typeSignedCon) 
    {
        return sym[p->id.i].value.sValue;
    }
    else if (sym[p->id.i].type == typeShortCon) 
    {
        return sym[p->id.i].value.shValue;
    }
    else if (sym[p->id.i].type == typeUnsignedLongCon) 
    {
        return sym[p->id.i].value.ulValue;
    }
        case typeOper:
            switch(p->opr.oper) {
		    /* while*/   
                case WHILE:
                    while(ex(p->opr.op[0])) ex(p->opr.op[1]);
                    return 0;
		   /* if */   
                case IF:
                    if (ex(p->opr.op[0]))
                        ex(p->opr.op[1]);
                    else if (p->opr.nops > 2)
                        ex(p->opr.op[2]);
                    return 0;
		/* print */       
   case PRINT:
	   if (p->opr.op[0]->type == typeOper) {
        printf("%f\n", ex(p->opr.op[0]));}
          else if (p->opr.op[0]->type == typeId) 
	    {
        if (sym[p->opr.op[0]->id.i].type == typeIntCon) 
		{
            printf("%d\n", sym[p->opr.op[0]->id.i].value.iValue);
        } 
	else if (sym[p->opr.op[0]->id.i].type == typeFloatCon)
		{
            printf("%f\n", sym[p->opr.op[0]->id.i].value.fValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon)
		{
            printf("%lf\n", sym[p->opr.op[0]->id.i].value.dValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeLongCon)
		{
            printf("%ld\n", sym[p->opr.op[0]->id.i].value.lValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.uValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeSignedCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.sValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeShortCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.shValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon)
		{
            printf("%lu\n", sym[p->opr.op[0]->id.i].value.ulValue);
        }
    } 
    else if (p->opr.op[0]->type == typeIntCon) 
	    {
        printf("%d\n", (int)ex(p->opr.op[0]));
    } 
    else if (p->opr.op[0]->type == typeFloatCon) 
	    {
        printf("%f\n", ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type == typeDoubleCon) 
	    {
        printf("%lf\n", (double)ex(p->opr.op[0]));
    }
     else if (p->opr.op[0]->type == typeLongCon) 
	    {
        printf("%ld\n", (long)ex(p->opr.op[0]));
    }
       else if (p->opr.op[0]->type ==  typeUnsignedIntCon) 
	    {
        printf("%u\n", (unsigned)ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type ==  typeSignedCon) 
	    {
        printf("%i\n", (signed)ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type ==  typeShortCon) 
	    {
        printf("%hi\n", (short)ex(p->opr.op[0]));
    }
      else if (p->opr.op[0]->type ==  typeUnsignedLongCon) 
	    {
        printf("%lu\n", (unsigned long)ex(p->opr.op[0]));
    }
    return 0;


                case ';':
                    ex(p->opr.op[0]);
                    return ex(p->opr.op[1]);
		
case '=':
    if (p->opr.op[1]->type == typeIntCon) {
        sym[p->opr.op[0]->id.i].type = typeIntCon;
        sym[p->opr.op[0]->id.i].value.iValue = (int)ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeLongCon) {
        sym[p->opr.op[0]->id.i].type = typeLongCon;
        sym[p->opr.op[0]->id.i].value.lValue = (long)ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeFloatCon) {
        sym[p->opr.op[0]->id.i].type = typeFloatCon;
        sym[p->opr.op[0]->id.i].value.fValue = ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeDoubleCon) {
        sym[p->opr.op[0]->id.i].type = typeDoubleCon;
        sym[p->opr.op[0]->id.i].value.dValue = ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeUnsignedIntCon) {
        sym[p->opr.op[0]->id.i].type = typeUnsignedIntCon;
        sym[p->opr.op[0]->id.i].value.uValue = (unsigned int)ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeSignedCon) {
        sym[p->opr.op[0]->id.i].type = typeSignedCon;
        sym[p->opr.op[0]->id.i].value.sValue = (signed int)ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeShortCon) {
        sym[p->opr.op[0]->id.i].type = typeShortCon;
        sym[p->opr.op[0]->id.i].value.shValue = (short)ex(p->opr.op[1]);
    } else if (p->opr.op[1]->type == typeUnsignedLongCon) {
        sym[p->opr.op[0]->id.i].type = typeUnsignedLongCon;
        sym[p->opr.op[0]->id.i].value.ulValue = (unsigned long)ex(p->opr.op[1]);
    }else if (p->opr.op[1]->type == typeOper) {
        double rhs = ex(p->opr.op[1]);
        if (rhs == (int)rhs) {
            sym[p->opr.op[0]->id.i].type = typeIntCon;
            sym[p->opr.op[0]->id.i].value.iValue = (int)rhs;
        } else {
            sym[p->opr.op[0]->id.i].type = typeDoubleCon;
            sym[p->opr.op[0]->id.i].value.dValue = rhs;
        }
    }
    return ex(p->opr.op[1]);



                case UMINUS:
			return -ex (p-> opr.op[0]);
             case '+':
                    return ex(p->opr.op[0]) + ex(p->opr.op[1]);
                case '-':
                    return ex(p->opr.op[0]) - ex(p->opr.op[1]);
                case '*':
                    return ex(p->opr.op[0]) * ex(p->opr.op[1]);
                case '/':
                    return ex(p->opr.op[0]) / ex(p->opr.op[1]);
                case '<':
                    return ex(p->opr.op[0]) < ex(p->opr.op[1]);
                case '>':
                    return ex(p->opr.op[0]) > ex(p->opr.op[1]);
                case GE:
                    return ex(p->opr.op[0]) >= ex(p->opr.op[1]);
                case LE:
                    return ex(p->opr.op[0]) <= ex(p->opr.op[1]);
                case NE:
                    return ex(p->opr.op[0]) != ex(p->opr.op[1]);
                case EQ:
                    return ex(p->opr.op[0]) == ex(p->opr.op[1]);

		case POST_INCREMENT:
    return sym[p->opr.op[0]->id.i].value.iValue++;
case PRE_INCREMENT:
    return ++sym[p->opr.op[0]->id.i].value.iValue;
case POST_INCREMENT_ASSIGN:
    sym[p->opr.op[0]->id.i].value.iValue = sym[p->opr.op[1]->id.i].value.iValue++;
    return sym[p->opr.op[0]->id.i].value.iValue;
case PRE_INCREMENT_ASSIGN:
    sym[p->opr.op[0]->id.i].value.iValue = ++sym[p->opr.op[1]->id.i].value.iValue;
    return sym[p->opr.op[0]->id.i].value.iValue;

                 case POST_DECREMENT:
    return sym[p->opr.op[0]->id.i].value.iValue--;
case PRE_DECREMENT:
    return --sym[p->opr.op[0]->id.i].value.iValue;
case POST_DECREMENT_ASSIGN:
    sym[p->opr.op[0]->id.i].value.iValue = sym[p->opr.op[1]->id.i].value.iValue--;
    return sym[p->opr.op[0]->id.i].value.iValue;
case PRE_DECREMENT_ASSIGN:
    sym[p->opr.op[0]->id.i].value.iValue = --sym[p->opr.op[1]->id.i].value.iValue;
    return sym[p->opr.op[0]->id.i].value.iValue;		

		case '^': 
                 return pow(ex(p->opr.op[0]), ex(p->opr.op[1]));
		case AND:
                 return ex(p->opr.op[0]) && ex(p->opr.op[1]);
                case OR:
		 return ex(p->opr.op[0]) || ex(p->opr.op[1]);
                case NOT:
                 return !ex(p->opr.op[0]);

		/* bloc de cod */   
                case BLOCK: 
                    for (int i = 0; i < p->opr.nops; i++)
                        ex(p->opr.op[i]);
                    return 0;
		/* writeln */   
		case WRITELN:
     if (p->opr.op[0]->type == typeOper) {
        printf("%f\n", ex(p->opr.op[0]));}
          else if (p->opr.op[0]->type == typeId) 
	    {
        if (sym[p->opr.op[0]->id.i].type == typeIntCon) 
		{
            printf("%d\n", sym[p->opr.op[0]->id.i].value.iValue);
        } 
	else if (sym[p->opr.op[0]->id.i].type == typeFloatCon)
		{
            printf("%f\n", sym[p->opr.op[0]->id.i].value.fValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon)
		{
            printf("%lf\n", sym[p->opr.op[0]->id.i].value.dValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeLongCon)
		{
            printf("%ld\n", sym[p->opr.op[0]->id.i].value.lValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.uValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeSignedCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.sValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeShortCon)
		{
            printf("%u\n", sym[p->opr.op[0]->id.i].value.shValue);
        }
	else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon)
		{
            printf("%lu\n", sym[p->opr.op[0]->id.i].value.ulValue);
        }
    } 
    else if (p->opr.op[0]->type == typeIntCon) 
	    {
        printf("%d\n", (int)ex(p->opr.op[0]));
    } 
    else if (p->opr.op[0]->type == typeFloatCon) 
	    {
        printf("%f\n", ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type == typeDoubleCon) 
	    {
        printf("%lf\n", (double)ex(p->opr.op[0]));
    }
     else if (p->opr.op[0]->type == typeLongCon) 
	    {
        printf("%ld\n", (long)ex(p->opr.op[0]));
    }
       else if (p->opr.op[0]->type ==  typeUnsignedIntCon) 
	    {
        printf("%u\n", (unsigned)ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type ==  typeSignedCon) 
	    {
        printf("%i\n", (signed)ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type ==  typeShortCon) 
	    {
        printf("%hi\n", (short)ex(p->opr.op[0]));
    }
    else if (p->opr.op[0]->type ==  typeUnsignedLongCon) 
	    {
        printf("%lu\n", (unsigned long)ex(p->opr.op[0]));
    }
    return 0;

      case BREAK:
            return 0;
      
case SWITCH:
    val = ex(p->opr.op[0]);
    int i;
    for (i = 0; i < p->opr.nops - 1; i++)
        if (ex(p->opr.op[i+1]->opr.op[0]) == val) {
            if (p->opr.op[i+1]->opr.nops > 1)
                ex(p->opr.op[i+1]->opr.op[1]);
            return 0;
        }
    if (p->opr.nops > i)
        ex(p->opr.op[i+1]);
    return 0;




	    
                /* do-while */   
		 case DOWHILE:
                    do {
                        ex(p->opr.op[0]);
                    } while(ex(p->opr.op[1]));
                    return 0;

            

             case PLUS_EQUAL:
    if (sym[p->opr.op[0]->id.i].type == typeIntCon && sym[p->opr.op[1]->id.i].type == typeIntCon) {
        sym[p->opr.op[0]->id.i].value.iValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.iValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeFloatCon && sym[p->opr.op[1]->id.i].type == typeFloatCon) {
        sym[p->opr.op[0]->id.i].value.fValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.fValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon && sym[p->opr.op[1]->id.i].type == typeDoubleCon) {
        sym[p->opr.op[0]->id.i].value.dValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.dValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeLongCon && sym[p->opr.op[1]->id.i].type == typeLongCon) {
        sym[p->opr.op[0]->id.i].value.lValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.lValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon && sym[p->opr.op[1]->id.i].type == typeUnsignedIntCon) {
        sym[p->opr.op[0]->id.i].value.uValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.uValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeSignedCon && sym[p->opr.op[1]->id.i].type == typeSignedCon) {
        sym[p->opr.op[0]->id.i].value.sValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.sValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeShortCon && sym[p->opr.op[1]->id.i].type == typeShortCon) {
        sym[p->opr.op[0]->id.i].value.shValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.shValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon && sym[p->opr.op[1]->id.i].type == typeUnsignedLongCon) {
        sym[p->opr.op[0]->id.i].value.ulValue += ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.ulValue;
    }
    break;

	    
    
	        case MINUS_EQUAL:
    if (sym[p->opr.op[0]->id.i].type == typeIntCon && sym[p->opr.op[1]->id.i].type == typeIntCon) {
        sym[p->opr.op[0]->id.i].value.iValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.iValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeFloatCon && sym[p->opr.op[1]->id.i].type == typeFloatCon) {
        sym[p->opr.op[0]->id.i].value.fValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.fValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon && sym[p->opr.op[1]->id.i].type == typeDoubleCon) {
        sym[p->opr.op[0]->id.i].value.dValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.dValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeLongCon && sym[p->opr.op[1]->id.i].type == typeLongCon) {
        sym[p->opr.op[0]->id.i].value.lValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.lValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon && sym[p->opr.op[1]->id.i].type == typeUnsignedIntCon) {
        sym[p->opr.op[0]->id.i].value.uValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.uValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeSignedCon && sym[p->opr.op[1]->id.i].type == typeSignedCon) {
        sym[p->opr.op[0]->id.i].value.sValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.sValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeShortCon && sym[p->opr.op[1]->id.i].type == typeShortCon) {
        sym[p->opr.op[0]->id.i].value.shValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.shValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon && sym[p->opr.op[1]->id.i].type == typeUnsignedLongCon) {
        sym[p->opr.op[0]->id.i].value.ulValue -= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.ulValue;
    }
    break;
    
    
	        case MULT_EQUAL:
    if (sym[p->opr.op[0]->id.i].type == typeIntCon && sym[p->opr.op[1]->id.i].type == typeIntCon) {
        sym[p->opr.op[0]->id.i].value.iValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.iValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeFloatCon && sym[p->opr.op[1]->id.i].type == typeFloatCon) {
        sym[p->opr.op[0]->id.i].value.fValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.fValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon && sym[p->opr.op[1]->id.i].type == typeDoubleCon) {
        sym[p->opr.op[0]->id.i].value.dValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.dValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeLongCon && sym[p->opr.op[1]->id.i].type == typeLongCon) {
        sym[p->opr.op[0]->id.i].value.lValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.lValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon && sym[p->opr.op[1]->id.i].type == typeUnsignedIntCon) {
        sym[p->opr.op[0]->id.i].value.uValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.uValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeSignedCon && sym[p->opr.op[1]->id.i].type == typeSignedCon) {
        sym[p->opr.op[0]->id.i].value.sValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.sValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeShortCon && sym[p->opr.op[1]->id.i].type == typeShortCon) {
        sym[p->opr.op[0]->id.i].value.shValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.shValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon && sym[p->opr.op[1]->id.i].type == typeUnsignedLongCon) {
        sym[p->opr.op[0]->id.i].value.ulValue *= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.ulValue;
    }
    break;
    
    
	        case SUBST_EQUAL:
    if (sym[p->opr.op[0]->id.i].type == typeIntCon && sym[p->opr.op[1]->id.i].type == typeIntCon) {
        sym[p->opr.op[0]->id.i].value.iValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.iValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeFloatCon && sym[p->opr.op[1]->id.i].type == typeFloatCon) {
        sym[p->opr.op[0]->id.i].value.fValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.fValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon && sym[p->opr.op[1]->id.i].type == typeDoubleCon) {
        sym[p->opr.op[0]->id.i].value.dValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.dValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeLongCon && sym[p->opr.op[1]->id.i].type == typeLongCon) {
        sym[p->opr.op[0]->id.i].value.lValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.lValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon && sym[p->opr.op[1]->id.i].type == typeUnsignedIntCon) {
        sym[p->opr.op[0]->id.i].value.uValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.uValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeSignedCon && sym[p->opr.op[1]->id.i].type == typeSignedCon) {
        sym[p->opr.op[0]->id.i].value.sValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.sValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeShortCon && sym[p->opr.op[1]->id.i].type == typeShortCon) {
        sym[p->opr.op[0]->id.i].value.shValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.shValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedLongCon && sym[p->opr.op[1]->id.i].type == typeUnsignedLongCon) {
        sym[p->opr.op[0]->id.i].value.ulValue /= ex(p->opr.op[1]);
        return sym[p->opr.op[0]->id.i].value.ulValue;
    }
    break;
    
    
	        case POWER_EQUAL:
    if (sym[p->opr.op[0]->id.i].type == typeIntCon && sym[p->opr.op[1]->id.i].type == typeIntCon) {
         sym[p->opr.op[0]->id.i].value.iValue = pow(sym[p->opr.op[0]->id.i].value.iValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.iValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeFloatCon && sym[p->opr.op[1]->id.i].type == typeFloatCon) {
          sym[p->opr.op[0]->id.i].value.fValue = pow(sym[p->opr.op[0]->id.i].value.fValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.fValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeDoubleCon && sym[p->opr.op[1]->id.i].type == typeDoubleCon) {
          sym[p->opr.op[0]->id.i].value.dValue = pow(sym[p->opr.op[0]->id.i].value.dValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.dValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeLongCon && sym[p->opr.op[1]->id.i].type == typeLongCon) {
          sym[p->opr.op[0]->id.i].value.lValue = pow(sym[p->opr.op[0]->id.i].value.lValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.lValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeUnsignedIntCon && sym[p->opr.op[1]->id.i].type == typeUnsignedIntCon) {
          sym[p->opr.op[0]->id.i].value.uValue = pow(sym[p->opr.op[0]->id.i].value.uValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.uValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeSignedCon && sym[p->opr.op[1]->id.i].type == typeSignedCon) {
         sym[p->opr.op[0]->id.i].value.sValue = pow(sym[p->opr.op[0]->id.i].value.sValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.sValue;
    } else if (sym[p->opr.op[0]->id.i].type == typeShortCon && sym[p->opr.op[1]->id.i].type == typeShortCon) {
          sym[p->opr.op[0]->id.i].value.shValue = pow(sym[p->opr.op[0]->id.i].value.shValue, ex(p->opr.op[1]));
        return sym[p->opr.op[0]->id.i].value.shValue;
    } 
    break;
    
    }
    
    }
    return 0;
}