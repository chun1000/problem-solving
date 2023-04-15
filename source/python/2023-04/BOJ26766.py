import sys
read = sys.stdin.readline
write = sys.stdout.write

heart = ''' @@@   @@@ 
@   @ @   @
@    @    @
@         @
 @       @ 
  @     @  
   @   @   
    @ @    
     @     
'''

N = int(read())

for _ in range(N):
    write(heart)