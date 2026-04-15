#pragma once
#ifndef LEGACY_H
#define LEGACY_H

/*
 * Executes the legacy UI system
 * Will eventually be deprecated
 *
 * Return Values:
 * 0 - Success
 * -1 - Unknown error
 * errno - Error as defined by errno
 */
int legacyui();

#endif
