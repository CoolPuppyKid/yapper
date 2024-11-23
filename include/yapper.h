#ifndef YAPPER_H
#define YAPPER_H

// For printf()
#include <stdio.h>
// For EVIL! memory
#include <stdlib.h>
// this is logger so it needs string stuff
#include <string.h>

// For Bold Text
#ifdef BOLD
#define RED     "\e[1;31m"
#define YELLOW  "\e[1;33m"
#define WHITE   "\e[1;37m"
#else 
#define RED     "\e[0;31m"
#define YELLOW  "\e[0;33m"
#define WHITE   "\e[0;37m"
#endif

// If you see this in your output something real bad happend
#define INTERNAL_ERROR     "\e[7;31m"

// Shorter Text
#ifdef SHORT
#define INFO    "[INFO]"
#define WARNING "[WARN]"
#define ERROR   "[ERR]"
#else
#define INFO    "[INFO]"
#define WARNING "[WARNING]"
#define ERROR   "[ERROR]"
#endif

// Prints info to the output
void yapInfo(char info[])
{
    //     COLOR  TAG TEXT RESET     TAG   TEXT
    printf(WHITE  "%s: %s\n\x1B[0m", INFO, info);
}

// Prints warnings to the output
void yapWarning(char warn[])
{
    //     COLOR  TAG TEXT RESET     TAG      TEXT
    printf(YELLOW "%s: %s\n\x1B[0m", WARNING, warn);
}

// Prints errors to the output
void yapError(char error[])
{
    //   COLOR    TAG TEXT RESET     TAG    TEXT
    printf(RED    "%s: %s\n\x1B[0m", ERROR, error);
}

#endif