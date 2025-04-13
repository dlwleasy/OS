//Producer

while(true){
// 다 찼는지 체크 
while(count == BUFFER_SIZE)
; //do nothing

buffer[in] = nextProduced;
in = (in+1)%BUFFER_SIZE;

count++;

}

//Consumer

while(true){

while(count==0);

nextConsumed = buffer[out];
out=(out+1)%BUFFER_SIZE;

count--;


}
