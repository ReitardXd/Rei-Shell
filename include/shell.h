#ifndef SHELL_H
#define SHELL_H



#DEFINE MAX_ARGS 128
#DEFINE MAX_INPUT 4096
#DEFINE MAX_COMMANDS 32


typedef  struct {


      char  **argv;
      int argc;
      char *input_file;
      char *output_file;
      char *error_file;
      int append_stdout;
      int append_stderr;
      int background;
}    Command;


typedef struct {
      Command commands[MAX_COMMANDS];
    int     num_commands;
    int     background; 

}


typedef strcut { 
    char cwd[MAX_INPUT];
    int last_exit_status;
    int running;

 } ShellState;


#endif 
