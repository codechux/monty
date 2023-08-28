#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 */
typedef struct arg_z
{
	FILE *str;
	char *line;
	unsigned int lnum;
	char **tken;
	int n_tken;
	instruction_t *instruction;
	stack_t *head;
	/*stack_t *next;
	stack_t *prev;*/
	int stack_length;
} arg_a;
extern arg_a *elements;

int dprintf(int fd, const char *format, ...);
void validate(int argc);
void initialize();
void get_str(char *file);
int main(int argc, char **argv);
void init_instruct(void);
void close_stream(void);
void free_tken(void);
void instruction_failed(void);
void instruction(void);
void line_tken(void);
int is_number(char *str);

void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
/*void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
int unused_var __attribute__((unused));*/

#endif
