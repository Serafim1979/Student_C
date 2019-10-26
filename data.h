#ifndef DATA_H
#define DATA_H

#define MAXLEN 32
#define MAXGRADES 3

typedef struct
{
    char last_name[MAXLEN];
    int grade[MAXGRADES];
}student;

extern student *pstud;
extern int nstud;

#endif // DATA_H
