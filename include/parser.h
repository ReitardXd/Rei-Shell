#ifndef PARSER_H
#define PARSER_H

#include "shell.h"


int parse_input(char *input, Pipeline *pipeline);

void free_pipeline(Pipeline,*pipeline);

#endif
