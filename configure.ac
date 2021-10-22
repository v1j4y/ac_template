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

# Detect HDF5
AX_LIB_HDF5()

# Add HDF5 flags
CXXFLAGS="${HDF5_CFLAGS} ${CXXFLAGS}"
CFLAGS="${HDF5_CFLAGS} ${CFLAGS}"
CPPFLAGS="${HDF5_CPPFLAGS} ${CPPFLAGS} -I../include"
LDFLAGS="${HDF5_LDFLAGS} ${LDFLAGS}"
LIBS="${HDF5_LIBS} ${LIBS} -lhdf5_cpp"

# Add headers
#CFLAGS="${HDF5_CFLAGS} ${CFLAGS} -I/home/vijay/Documents/codes/autotools_template/tyson/include"

AC_SUBST(CFLAGS)

# Generate Makefile from Makefile.in
AC_CONFIG_FILES([Makefile src/Makefile])

# Done
AC_OUTPUT

echo \
"-------------------------------------------------

${PACKAGE_NAME} Version ${PACKAGE_VERSION} ${TREXIO_DEVEL}

Prefix ........:  ${prefix}
CC ............:  ${CC}
CPPFLAGS ......:  ${CPPFLAGS}
CFLAGS ........:  ${CFLAGS}
FC ............:  ${FC}
FCLAGS ........:  ${FCFLAGS}
LDFLAGS .......:  ${LDFLAGS}
LIBS ..........:  ${LIBS}

Package features:
  Compilation with HDF5 ..:  ${with_hdf5}
  HDF5 version ...........:  ${HDF5_VERSION}

Now type 'make @<:@<target>@:>@'
where the optional <target> is:
  all           - build C library and Fortran binding
  check	        - run unit tests
  install       - install the library 
--------------------------------------------------"
