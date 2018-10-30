#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

//for close, read, write
#include <unistd.h>

//for open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//int main(char * argv[]){
int main(){
  int fd;
  fd = open("/dev/random", O_RDWR );
  printf("Success of opening file: %d\n",fd);

  int arr[10];
  int readbytes = read(fd,arr,10 * sizeof(int));
  printf("How many bytes were read: %d\n", readbytes);
  printf("arr[0] = %d\n",arr[0]);
  printf("arr[1] = %d\n",arr[1]);
  printf("arr[2] = %d\n",arr[2]);
  printf("arr[3] = %d\n",arr[3]);
  printf("arr[4] = %d\n",arr[4]);
  printf("arr[5] = %d\n",arr[5]);
  printf("arr[6] = %d\n",arr[6]);
  printf("arr[7] = %d\n",arr[7]);
  printf("arr[8] = %d\n",arr[8]);
  printf("arr[9] = %d\n",arr[9]);

  int success;
  success = close(fd);
  printf("Success of closing file: %d\n",success);

  int fd2;
  fd2 = open("file.txt",O_RDWR | O_CREAT,00744);
  printf("Success of opening file: %d\n",fd2);

  int writebytes = write(fd2,arr,10 * sizeof(int));
  printf("How many bytes were written: %d\n",writebytes);

  int success2;
  success2 = close(fd2);
  printf("Success of closing file: %d\n",success2);

  int fd3;
  fd3 = open("file.txt", O_RDWR);
  printf("Success of opening file: %d\n", fd3);

  int secondread[10];
  int readagain = read(fd3,secondread,10 * sizeof(int));
  printf("How many bytes were read: %d\n", readbytes);
  printf("secondread[0] = %d\n",secondread[0]);
  printf("secondread[1] = %d\n",secondread[1]);
  printf("secondread[2] = %d\n",secondread[2]);
  printf("secondread[3] = %d\n",secondread[3]);
  printf("secondread[4] = %d\n",secondread[4]);
  printf("secondread[5] = %d\n",secondread[5]);
  printf("secondread[6] = %d\n",secondread[6]);
  printf("secondread[7] = %d\n",secondread[7]);
  printf("secondread[8] = %d\n",secondread[8]);
  printf("secondread[9] = %d\n",secondread[9]);

  int success3;
  success3 = close(fd3);
  printf("Success of closing file: %d\n",success3);


}
