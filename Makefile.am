AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = -I m4 --install

src_main_c = src/main.c
src_main_h = include/main.h include/utils.h
test_main_c = tests/test_main.c

include_HEADERS = $(src_main_h)

#bin_PROGRAMS = tyson
#tyson_SOURCES = $(src_main_c) $(src_main_h)

check_PROGRAMS = tests/test_main
tests_test_main_SOURCES = $(test_main_c) $(src_main_h)
tests_test_main_LDADD   = src/libtyson.la
tests_test_main_LDFLAGS = -no-install
tests_test_main_CPPFLAGS = "-I${top_srcdir}/include"


lib_LTLIBRARIES = src/libtyson.la
src_libtyson_la_SOURCES = $(src_main_c) 
src_libtyson_la_CPPFLAGS = "-I${top_srcdir}/include"

DATA_FILES = data/dims.txt

dist_data_DATA = $(DATA_FILES)
