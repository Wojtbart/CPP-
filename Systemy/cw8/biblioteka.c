#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#include "biblioteka.h"


mqd_t OtworzKolejkeODB(const char *nazwa, struct mq_attr *attr)
{
	int fd;
	if((fd=mq_open(nazwa,O_CREAT|O_EXCL| O_RDONLY, 0777, attr))==(mqd_t)-1)
	{
		perror("Blad przy tworzeniu, otwarciu kolejki!\n");
		exit(1); 	
	}
	return fd;
}

mqd_t OtworzKolejkeWYS(const char *nazwa, struct mq_attr *attr)
{
	int fd;
	if((fd=mq_open(nazwa, O_WRONLY, 0777, attr))==(mqd_t)-1)
	{
		perror("Blad przy tworzeniu, otwarciu kolejki!\n");
		exit(1); 	
	}
	return fd;
}

int ZamknijKolejke(mqd_t mqdes)
{
	if(mq_close(mqdes)==-1)
	{
		perror("Blad przy zamykaniu kolejki!\n");
		exit(2);
	}	
}

int UsunKolejke(const char *nazwa)
{
	if(mq_unlink(nazwa)==-1)
	{
		perror("Blad przy zamykaniu kolejki!\n");
		exit(3);
	}	
}

int PobierzAtrybut(mqd_t mqdes, struct mq_attr *attr)
{
	if(mq_getattr(mqdes, attr)==-1)
	{
		perror("Blad przy pobieraniu atrybutu kolejki!\n");
		exit(4);
	}	
}

int UstawAtrybut(mqd_t mqdes, struct mq_attr *newattr, struct mq_attr *oldattr)
{
	if(mq_setattr(mqdes, newattr, NULL)==-1)
	{
		perror("Blad przy ustawianiu atrybutu kolejki!\n");
		exit(5);
	}	
}

int WyslijKomunikat(mqd_t mqdes,  char *msg_ptr, size_t msg_len, unsigned int msg_prio)
{
	if(mq_send(mqdes, msg_ptr, msg_len, msg_prio)==-1)
	{
		perror("Blad przy wysylaniu komunikatu!\n");
		exit(6);
	}	
}

int OdbierzKomunikat(mqd_t mqdes,  char *msg_ptr, size_t msg_len, unsigned int *msg_prio)
{
	if(mq_receive(mqdes, msg_ptr, msg_len, msg_prio)==-1)
	{
		perror("Blad przy odbieraniu komunikatu!\n");
		exit(7);
	}	
}

