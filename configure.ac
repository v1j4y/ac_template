# Initialize
AC_INIT([tyson], [0.1])
LT_INIT
AC_CONFIG_MACRO_DIR([m4])

# Generate the Makefile
AM_INIT_AUTOMAKE([foreign -Wall -Werror])

# Make sure Fortran is available
AC_PROG_FC([gfortran])

# Make sure gcc is working
AC_PROG_CC([gcc])

AC_DEFINE([MAT_DIM],[224],["Default dim: 224"])
AC_DEFINE([MC],[32],["Default block: 32"])
AC_DEFINE([KC],[32],["Default block: 32"])
AC_DEFINE([NC],[224],["Default block: 224"])
AC_DEFINE([MR],[16],["Default block: 16"])
AC_DEFINE([MN],[14],["Default block: 14"])

# Read value of define parameters
AC_ARG_WITH([matdim],
            AS_HELP_STRING([The desired matdim [[default: 224]]]),
            [matdim="$withval"], [matdim=224])

my_CFLAGS=" -DMAT_DIM=$matdim"

AC_ARG_WITH([blockm],
            AS_HELP_STRING([The desired matdim [[default: 32]]]),
            [blockm="$withval"], [blockm=32])

my_CFLAGS+=" -DMC=$blockm"

AC_ARG_WITH([blockn],
            AS_HELP_STRING([The desired matdim [[default: 224]]]),
            [blockn="$withval"], [blockn=224])

my_CFLAGS+=" -DNC=$blockn"

AC_ARG_WITH([blockk],
            AS_HELP_STRING([The desired matdim [[default: 32]]]),
            [blockk="$withval"], [blockk=32])

my_CFLAGS+=" -DKC=$blockk"

AC_ARG_WITH([regsm],
            AS_HELP_STRING([The desired matdim [[default: 16]]]),
            [regsm="$withval"], [regsm=16])

my_CFLAGS+=" -DMR=$regsm"

AC_ARG_WITH([regsn],
            AS_HELP_STRING([The desired matdim [[default: 14]]]),
            [regsn="$withval"], [regsn=14])

my_CFLAGS+=" -DNR=$regsn"

AC_SUBST([my_CFLAGS])

# Generate config
AC_CONFIG_HEADERS([config.h])

# Generate Makefile from Makefile.in
AC_CONFIG_FILES([Makefile src/Makefile])

# Done
AC_OUTPUT
