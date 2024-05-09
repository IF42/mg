CC=gcc
CFLAGS=-D_GNU_SOURCE=1 -DDATADIR=\"/usr/local/share/mg\" -DDOCDIR=\"/usr/local/doc/mg\" -Wall -O2
LIBS=


CACHE=.cache
OUTPUT=$(CACHE)/release
TARGET=mg


INSTALL_PATH=


ifeq ($(OS),Windows_NT)
	INSTALL_PATH=/usr/bin
else
	INSTALL_PATH=/usr/bin
endif


MODULE+=main.o
MODULE+=ansi.o
MODULE+=autoexec.o
MODULE+=basic.o
MODULE+=buffer.o
MODULE+=cinfo.o
MODULE+=cmode.o
MODULE+=cscope.o
MODULE+=dir.o
MODULE+=dired.o
MODULE+=display.o
MODULE+=echo.o
MODULE+=extend.o
MODULE+=extensions.o
MODULE+=file.o
MODULE+=fileio.o
MODULE+=fparseln.o
MODULE+=funmap.o
MODULE+=grep.o
MODULE+=help.o
MODULE+=interpreter.o
MODULE+=kbd.o
MODULE+=keymap.o
MODULE+=line.o
MODULE+=log.o
MODULE+=macro.o
MODULE+=match.o
MODULE+=modes.o
MODULE+=paragraph.o
MODULE+=re_search.o
MODULE+=region.o
MODULE+=search.o
MODULE+=spawn.o
MODULE+=strtonum.o
MODULE+=tags.o
MODULE+=tty.o
MODULE+=ttyio.o
MODULE+=ttykbd.o
MODULE+=undo.o
MODULE+=util.o
MODULE+=version.o
MODULE+=window.o
MODULE+=word.o
MODULE+=yank.o


OBJ=$(addprefix $(CACHE)/,$(MODULE))


all: env $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(OUTPUT)/$(TARGET)


%.o:
	$(CC) $(CFLAGS) -c $< -o $@


-include dep.list


.PHONY: env dep clean


dep:
	$(CC) -MM src/*.c | sed 's|[a-zA-Z0-9_-]*\.o|$(CACHE)/&|' > dep.list


env:
	mkdir -pv $(CACHE)
	mkdir -pv $(OUTPUT)


clean: 
	rm -vrf $(CACHE)


install:
	cp -pv $(OUTPUT)/$(TARGET) $(INSTALL_PATH)/$(TARGET)




