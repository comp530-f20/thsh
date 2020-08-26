/* COMP 530: Tar Heel SHell
 *
 * This file implements functions related to launching
 * jobs and job control.
 */

#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include "thsh.h"

static char ** path_table;

/* Initialize the table of PATH prefixes.
 *
 * Split the result on the parenteses, and
 * remove any trailing '/' characters.
 * The last entry should be a NULL character.
 *
 * For instance, if one's PATH environment variable is:
 *  /bin:/sbin///
 *
 * Then path_table should be:
 *  path_table[0] = "/bin"
 *  path_table[1] = "/sbin"
 *  path_table[2] = '\0'
 *
 * Hint: take a look at getenv().  If you use getenv, do NOT
 *       modify the resulting string directly, but use
 *       malloc() or another function to allocate space and copy.
 *
 * Returns 0 on success, -errno on failure.
 */
int init_path(void) {
  /* Lab 0: Your code here */

  return 0;
}

/* Debug helper function that just prints
 * the path table out.
 */
void print_path_table() {
  if (path_table == NULL) {
    printf("XXXXXXX Path Table Not Initialized XXXXX\n");
    return;
  }

  printf("===== Begin Path Table =====\n");
  for (int i = 0; path_table[i]; i++) {
    printf("Prefix %2d: [%s]\n", i, path_table[i]);
  }
  printf("===== End Path Table =====\n");
}

/* Given the command listed in args,
 * try to execute it.
 *
 * If the first argument starts with a '.'
 * or a '/', it is an absolute path and can
 * execute as-is.
 *
 * Otherwise, search each prefix in the path_table
 * in order to find the path to the binary.
 *
 * Then fork a child and pass the path and the additional arguments
 * to execve() in the child.  Wait for exeuction to complete
 * before returning.
 *
 * stdin is a file handle to be used for standard in.
 * stdout is a file handle to be used for standard out.
 *
 * If stdin and stdout are not 0 and 1, respectively, they will be
 * closed in the parent process before this function returns.
 *
 * wait, if true, indicates that the parent should wait on the child to finish
 *
 * Returns 0 on success, -errno on failure
 */
int run_command(char *args[MAX_ARGS], int stdin, int stdout, bool wait) {
  /* Lab 1: Your code here */
  int rv = 0;

  return rv;
}

