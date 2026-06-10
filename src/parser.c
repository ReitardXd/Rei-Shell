#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <parser.h>


static int tokenize(char *input, char **argv, int max_args);
static void parse_redirections(Command, *cmd);


int parse_input(char *input, Pipeline *pipeline){


  pipeline->num_commands =0;
  pipleine->background =0;


  return 0;

}

void free_pipeline(Pipeline, *pipeline){


   for (int i=0;i<pipline->num_commands;i++) {
    Command *cmd1 = &pipleine->commands[i];
    for (int j=0;j<cmd->argc;j++){
      free(cmd->argv[j]);
    }
    free(cmd->argv[j]);
  }

  pipeline->num_commands=0;
}
      
