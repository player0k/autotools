bin_PROGRAMS= erf hello glist
erf_SOURCES= erf.c
hello_SOURCES=hello.c
glist_SOURCES=glist.c
erf_LDADD=-lgsl -lgslcblas -lm 
glist_CFLAGS= $(AM_CFLAGS) `pkg-config --cflags glib-2.0`
#glist_LDADD=-I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -lglib-2.0
#glist_LIBS=`pkg-config --libs glib-2.0`
glist_LDADD= $(AM_LDADD) ${glib_LIBS}
glist_LDFLAGS=
AM_CFLAGS = -g -Wall -O0 -std=gnu11 -fprofile-arcs -ftest-coverage

.PHONY: all clean

docs:
	doxygen

clean-local:
	@rm -f config.status configure config.log configure\~ config.h.in config.h.in\~
	@rm -f Makefile depcomp
	@rm -rf autom4te.cache/ .deps/ 
	@rm -f aclocal.m4
	@rm -f compile install-sh missing Makefile.in
	@rm -vf erf hello glist *.o  *.gcda *.gcno
	@rm -rf ./docs/
	@rm -f stamp-h1

