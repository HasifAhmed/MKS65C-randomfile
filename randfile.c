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
  int readbytes = read(fd,arr,10);
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

  int close;
  close = close(fd);
  printf("Success of closing file: %d\n",close);
}
