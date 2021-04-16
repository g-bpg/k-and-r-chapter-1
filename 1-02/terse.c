#include <stdio.h>

    // Tested ecape sequences
   // Compiler only gives errors with \u and \x, 
  // \u tries to print unicode, and \x hex apparently
 // Compiler also warns about "unknown escape sequences"
// An interesting find is that the '\r' prevents some statements from printing, it seems to be the Carriage return

int main(){
    printf("testA\a ");
    printf("testC\c ");
    printf("testD\d ");   
    printf("testE\e ");   
    printf("testF\f ");   
    printf("testG\g ");   
    printf("testH\h ");   
    printf("testI\i ");   
    printf("testJ\j ");   
    printf("testK\k ");   
    printf("testL\l ");   
    printf("testM\m ");   
    printf("testO\o ");   
    printf("testP\p ");   
    printf("testQ\q ");
#ifdef DEBUGR   
    printf("testR\r ");
#endif   
    printf("testS\s ");
#ifdef DEBUG   
    printf("testU\u ");
#endif   
    printf("testV\v ");   
    printf("testW\w ");
#ifdef DEBUG   
    printf("testX\x ");   
#endif
    printf("testY\y ");
    printf("testZ\z ");   
}
