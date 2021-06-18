lexer grammar MSqlLexer;

options { language=Cpp; }
channels { ERRORCHANNEL }

/* Skip */
SPACE:                              [ \t\r\n]+     -> channel(HIDDEN);
// COMMENT_INPUT:                      '/*' .*? '*/'  -> channel(HIDDEN);
// LINE_COMMENT:                       (
//                                        ('--' [ \t] | '#') ~[\r\n]* ('\r'? '\n' | EOF)
//                                        | '--' ('\r'? '\n' | EOF)
//                                     ) -> channel(HIDDEN);

/* Define some common keywords */
AS:                                 A S;
CREATE:                             C R E A T E;
SELECT:                             S E L E C T;
FROM:                               F R O M;
TABLE:                              T A B L E;
MAX:                                M A X;
SUM:                                S U M;
AVG:                                A V G;
MIN:                                M I N;
COUNT:                              C O U N T;
ALL:                                A L L;
DISTINCT:                           D I S T I N C T;
WHERE:                              W H E R E;
GROUP:                              G R O U P;
BY:                                 B Y;
ORDER:                              O R D E R;
HAVING:                             H A V I N G;
NOT:                                N O T;
IS:                                 I S;
TRUE:                               T R U E;
FALSE:                              F A L S E;
UNKNOWN:                            U N K N O W N;
BETWEEN:                            B E T W E E N;
AND:                                A N D;
IN:                                 I N;
OR:                                 O R;
ASC:                                A S C;
DESC:                               D E S C;
LIMIT:                              L I M I T;
OFFSET:                             O F F S E T;
CONSTRAINT:                         C O N S T R A I N T;
PRIMARY:                            P R I M A R Y;
KEY:                                K E Y;
DEFAULT:                            D E F A U L T;
CHECK:                              C H E C K;
FOREIGN:                            F O R E I G N;
NULL_LITERAL:                       N U L L;
INDEX:                              I N D E X;
UNIQUE:                             U N I Q U E;
DROP:                               D R O P;
ON:                                 O N;
INSERT:                             I N S E R T;
INTO:                               I N T O;
VALUES:                             V A L U E S;
VALUE:                              V A L U E;
ANY:                                A N Y;
SOME:                               S O M E;
BINARY:                             B I N A R Y;
COLLATE:                            C O L L A T E;
SOUNDS:                             S O U N D S;
LIKE:                               L I K E;
REGEXP:                             R E G E X P;
ESCAPE:                             E S C A P E;
RLIKE:                              R L I K E;
MEMBER:                             M E M B E R;
OF:                                 O F;
ROW:                                R O W;
EXISTS:                             E X I S T S;
INTERVAL:                           I N T E R V A L;
DIV:                                D I V;
MOD:                                M O D;
DELETE:                             D E L E T E;
PARTITION:                          P A R T I T I O N;
USING:                              U S I N G;
BIT_STRING:                         BIT_STRING_L;

/* Data type keywords */
INT:                                I N T;
CHAR:                               C H A R;
FLOAT:                              F L O A T;
SIGNED:                             S I G N E D;
UNSIGNED:                           U N S I G N E D;
ZEROFILL:                           Z E R O F I L L;

/* Operators. Arithmetics */
STAR:                                '*';
DIVIDE:                              '/';
MODULE:                              '%';
PLUS:                                '+';
MINUSMINUS:                          '--';
MINUS:                               '-';

/* Operators. Comparation */
EQUAL_SYMBOL:                        '=';
GREATER_SYMBOL:                      '>';
LESS_SYMBOL:                         '<';
EXCLAMATION_SYMBOL:                  '!';


/* Operators. Bit */
BIT_NOT_OP:                          '~';
BIT_OR_OP:                           '|';
BIT_AND_OP:                          '&';
BIT_XOR_OP:                          '^';

/* Constructors symbols */
DOT:                                 '.';
LR_BRACKET:                          '(';
RR_BRACKET:                          ')';
COMMA:                               ',';
SEMI:                                ';';
AT_SIGN:                             '@';
SINGLE_QUOTE_SYMB:                   '\'';
DOUBLE_QUOTE_SYMB:                   '"';
REVERSE_QUOTE_SYMB:                  '`';
COLON_SYMB:                          ':';

/* Define all the charsets */
ARMSCII8:                           'ARMSCII8';
ASCII:                              'ASCII';
BIG5:                               'BIG5';
CP1250:                             'CP1250';
CP1251:                             'CP1251';
CP1256:                             'CP1256';
CP1257:                             'CP1257';
CP850:                              'CP850';
CP852:                              'CP852';
CP866:                              'CP866';
CP932:                              'CP932';
DEC8:                               'DEC8';
EUCJPMS:                            'EUCJPMS';
EUCKR:                              'EUCKR';
GB2312:                             'GB2312';
GBK:                                'GBK';
GEOSTD8:                            'GEOSTD8';
GREEK:                              'GREEK';
HEBREW:                             'HEBREW';
HP8:                                'HP8';
KEYBCS2:                            'KEYBCS2';
KOI8R:                              'KOI8R';
KOI8U:                              'KOI8U';
LATIN1:                             'LATIN1';
LATIN2:                             'LATIN2';
LATIN5:                             'LATIN5';
LATIN7:                             'LATIN7';
MACCE:                              'MACCE';
MACROMAN:                           'MACROMAN';
SJIS:                               'SJIS';
SWE7:                               'SWE7';
TIS620:                             'TIS620';
UCS2:                               'UCS2';
UJIS:                               'UJIS';
UTF16:                              'UTF16';
UTF16LE:                            'UTF16LE';
UTF32:                              'UTF32';
UTF8:                               'UTF8';
UTF8MB3:                            'UTF8MB3';
UTF8MB4:                            'UTF8MB4';

/* Literal Primitives */
START_NATIONAL_STRING_LITERAL:      'N' SQUOTA_STRING;
STRING_LITERAL:                     DQUOTA_STRING | SQUOTA_STRING | BQUOTA_STRING;
DECIMAL_LITERAL:                    DEC_DIGIT+;
HEXADECIMAL_LITERAL:                HEX_DIGIT+;
REAL_LITERAL:                       (DEC_DIGIT+)? '.' DEC_DIGIT+;
NULL_SPEC_LITERAL:                  '\\' 'N';
STRING_CHARSET_NAME:                '_' CHARSET_NAME;

DOT_ID:                             '.' ID_LITERAL;
ID:                                 ID_LITERAL;
REVERSE_QUOTE_ID :                  '`' ~'`'+ '`';
TEXT_STRING :                       (  '\'' ( ('\\' '\\') | ('\'' '\'') | ('\\' '\'') | ~('\'') )* '\''  );

LOCAL_ID:                           '@'
                                    (
                                        [a-zA-Z0-9._$]+
                                        | SQUOTA_STRING
                                        | DQUOTA_STRING
                                        | BQUOTA_STRING
                                    );
GLOBAL_ID:                          '@' '@'
                                    (
                                        [a-zA-Z0-9._$]+
                                        | BQUOTA_STRING
                                    );

/* Fragments for Literal primitives */
fragment CHARSET_NAME:              ARMSCII8 | ASCII | BIG5 | BINARY | CP1250
                                    | CP1251 | CP1256 | CP1257 | CP850
                                    | CP852 | CP866 | CP932 | DEC8 | EUCJPMS
                                    | EUCKR | GB2312 | GBK | GEOSTD8 | GREEK
                                    | HEBREW | HP8 | KEYBCS2 | KOI8R | KOI8U
                                    | LATIN1 | LATIN2 | LATIN5 | LATIN7
                                    | MACCE | MACROMAN | SJIS | SWE7 | TIS620
                                    | UCS2 | UJIS | UTF16 | UTF16LE | UTF32
                                    | UTF8 | UTF8MB3 | UTF8MB4;
fragment ID_LITERAL:                [a-zA-Z_$0-9\u0080-\uFFFF]*?[a-zA-Z_$\u0080-\uFFFF]+?[a-zA-Z_$0-9\u0080-\uFFFF]*;
fragment DQUOTA_STRING:             '"' ( '\\'. | '""' | ~('"'| '\\') )* '"';
fragment SQUOTA_STRING:             '\'' ('\\'. | '\'\'' | ~('\'' | '\\'))* '\'';
fragment BQUOTA_STRING:             '`' ( '\\'. | '``' | ~('`'|'\\'))* '`';
fragment HEX_DIGIT:                 [0-9A-Fa-f];
fragment DEC_DIGIT:                 [0-9];
fragment BIT_STRING_L:              'B' '\'' [01]+ '\'';
fragment A:                         [aA];
fragment B:                         [bB];
fragment C:                         [cC];
fragment D:                         [dD];
fragment E:                         [eE];
fragment F:                         [fF];
fragment G:                         [gG];
fragment H:                         [hH];
fragment I:                         [iI];
fragment J:                         [jJ];
fragment K:                         [kK];
fragment L:                         [lL];
fragment M:                         [mM];
fragment N:                         [nN];
fragment O:                         [oO];
fragment P:                         [pP];
fragment Q:                         [qQ];
fragment R:                         [rR];
fragment S:                         [sS];
fragment T:                         [tT];
fragment U:                         [uU];
fragment V:                         [vV];
fragment W:                         [wW];
fragment X:                         [xX];
fragment Y:                         [yY];
fragment Z:                         [zZ];


/* Last tokens must generate Errors */
ERROR_RECONGNIGION:                  .    -> channel(ERRORCHANNEL);