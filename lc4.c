#include <stdio.h>
#include "lc4_memory.h"
#include "lc4_loader.h"
#include "lc4_disassembler.h"

/* program to mimic pennsim loader and disassemble object files */

int main (int argc, char** argv) {

	/**
	 * main() holds the linked list &
	 * only calls functions in other files 
	 */

	/* step 1: create head pointer to linked list: memory 	*/
	row_of_memory* memory = NULL ;

	
	/* step 2: determine filename, then open it		*/
	/*   TODO: extract filename from argv, pass it to open_file() */


	/* step 3: call function: parse_file() in lc4_loader.c 	*/
	/*   TODO: call function & check for errors		*/


	/* step 4: call function: reverse_assemble() in lc4_disassembler.c */
	/*   TODO: call function & check for errors		*/


	/* step 5: call function: print_list() in lc4_memory.c 	*/
	/*   TODO: call function 				*/


	/* step 6: call function: delete_list() in lc4_memory.c */
	/*   TODO: call function & check for errors		*/


	/* only return 0 if everything works properly */
	return -1 ;
}
