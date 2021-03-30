#ifndef _BIBLIOTEKA_H
#define _BIBLIOTEKA_H

#include <mqueue.h>
#include <fcntl.h>
#include <sys/stat.h>

#define NAZWASERWERA "/SERWER"

mqd_t OtworzKolejkeODB( );
mqd_t OtworzKolejkeWYS( );

int ZamknijKolejke( );
int UsunKolejke( );

int PobierzAtrybut( );
int UstawAtrybut( );

int WyslijKomunikat( );
int OdbierzKomunikat( );

#endif
