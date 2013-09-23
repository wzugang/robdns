/*

    The source of the input, for printing error messages
*/
#ifndef SOURCE_H
#define SOURCE_H

struct Source
{
    const char *filename;
    unsigned line_number;
    unsigned error_count;
};

#endif
