CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*) 
OBJECT=genomf.o main.o 
TARGET=genom
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)