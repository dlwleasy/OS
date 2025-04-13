
int main(){

pid_t pid;

pid = fork();
if(pid<0){
  //error
  fprint(stderr,"Fork Failed");
  exit(-1);
  
}

else if(pid==0){
  //child
  execlp("/bin/ls","ls",NULL);
}

else{
  //parent - wait for the child to complete
  wait(NULL);
  printf("child complete");
  exit(0);
  
}
}
