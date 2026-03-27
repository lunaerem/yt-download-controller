#pragma once
#ifndef FIO_H
#define FIO_H

/*
 * Checks if the given file exists
 *
 * Parameters:
 * fname - Name of file to check
 *
 * Return Values:
 * 0 - Success
 * -1 - Unknown error
 * -2 - File not found error
 */
int fcheck(const char *fname);

#endif
