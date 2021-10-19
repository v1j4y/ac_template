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

# Generate Makefile from Makefile.in
AC_CONFIG_FILES([Makefile src/Makefile])

# Done
AC_OUTPUT
