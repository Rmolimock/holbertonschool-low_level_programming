#ifndef HOLBERTON
#define HOLBERTON
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(int argc, char *argv[]);
int tests(int argc, char **argv, char *buf, int f1);
int tests2(char **argv, char *buf, int r, int f1, int f2, int wr);
#endif
