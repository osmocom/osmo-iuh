AC_INIT([osmo-iuh],
	m4_esyscmd([./git-version-gen .tarball-version]),
	[openbsc@lists.osmocom.org])

dnl *This* is the root dir, even if an install-sh exists in ../ or ../../
AC_CONFIG_AUX_DIR([.])

LT_INIT

AM_INIT_AUTOMAKE([foreign dist-bzip2 no-dist-gzip 1.9 tar-ustar])
dnl tar-ustar: some asn1 filenames surpass the 99 char limit of tar, so we need
dnl to make tar allow longer filenames.

AC_CONFIG_TESTDIR(src/tests)

dnl kernel style compile messages
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

dnl include release helper
RELMAKE='-include osmo-release.mk'
AC_SUBST([RELMAKE])

dnl checks for programs
AC_PROG_MAKE_SET
AC_PROG_MKDIR_P
AC_PROG_CC
AC_PROG_INSTALL

dnl check for pkg-config (explained in detail in libosmocore/configure.ac)
AC_PATH_PROG(PKG_CONFIG_INSTALLED, pkg-config, no)
if test "x$PKG_CONFIG_INSTALLED" = "xno"; then
        AC_MSG_WARN([You need to install pkg-config])
fi
PKG_PROG_PKG_CONFIG([0.20])

PKG_CHECK_MODULES(OSMOCORE, libosmocore >= 0.11.0)
PKG_CHECK_MODULES(OSMOGSM, libosmogsm >= 0.11.0)
PKG_CHECK_MODULES(OSMOVTY, libosmovty >= 0.11.0)
PKG_CHECK_MODULES(OSMOCTRL, libosmoctrl >= 0.11.0)
PKG_CHECK_MODULES(OSMONETIF, libosmo-netif >= 0.2.0)
PKG_CHECK_MODULES(OSMOSIGTRAN, libosmo-sigtran >= 0.9.0)
PKG_CHECK_MODULES(ASN1C, libasn1c >= 0.9.30)

AC_CONFIG_MACRO_DIR([m4])

dnl checks for header files
AC_HEADER_STDC

AC_ARG_ENABLE(sanitize,
	[AS_HELP_STRING(
		[--enable-sanitize],
		[Compile with address sanitizer enabled],
	)],
	[sanitize=$enableval], [sanitize="no"])
if test x"$sanitize" = x"yes"
then
	CFLAGS="$CFLAGS -fsanitize=address -fsanitize=undefined"
	CPPFLAGS="$CPPFLAGS -fsanitize=address -fsanitize=undefined"
fi

AC_ARG_ENABLE(werror,
	[AS_HELP_STRING(
		[--enable-werror],
		[Turn all compiler warnings into errors, with exceptions:
		 a) deprecation (allow upstream to mark deprecation without breaking builds);
		 b) "#warning" pragmas (allow to remind ourselves of errors without breaking builds)
		]
	)],
	[werror=$enableval], [werror="no"])
if test x"$werror" = x"yes"
then
	WERROR_FLAGS="-Werror"
	WERROR_FLAGS+=" -Wno-error=deprecated -Wno-error=deprecated-declarations"
	WERROR_FLAGS+=" -Wno-error=cpp" # "#warning"
	CFLAGS="$CFLAGS $WERROR_FLAGS"
	CPPFLAGS="$CPPFLAGS $WERROR_FLAGS"
fi

CFLAGS="$CFLAGS -Wall"
CPPFLAGS="$CPPFLAGS -Wall"

# https://www.freedesktop.org/software/systemd/man/daemon.html
AC_ARG_WITH([systemdsystemunitdir],
     [AS_HELP_STRING([--with-systemdsystemunitdir=DIR], [Directory for systemd service files])],,
     [with_systemdsystemunitdir=auto])
AS_IF([test "x$with_systemdsystemunitdir" = "xyes" -o "x$with_systemdsystemunitdir" = "xauto"], [
     def_systemdsystemunitdir=$($PKG_CONFIG --variable=systemdsystemunitdir systemd)

     AS_IF([test "x$def_systemdsystemunitdir" = "x"],
   [AS_IF([test "x$with_systemdsystemunitdir" = "xyes"],
    [AC_MSG_ERROR([systemd support requested but pkg-config unable to query systemd package])])
    with_systemdsystemunitdir=no],
   [with_systemdsystemunitdir="$def_systemdsystemunitdir"])])
AS_IF([test "x$with_systemdsystemunitdir" != "xno"],
      [AC_SUBST([systemdsystemunitdir], [$with_systemdsystemunitdir])])
AM_CONDITIONAL([HAVE_SYSTEMD], [test "x$with_systemdsystemunitdir" != "xno"])

AC_MSG_RESULT([CFLAGS="$CFLAGS"])
AC_MSG_RESULT([CPPFLAGS="$CPPFLAGS"])

AC_OUTPUT(
	libosmo-ranap.pc
	src/Makefile
	src/hnbap/Makefile
	src/ranap/Makefile
	src/rua/Makefile
	src/tests/Makefile
	Makefile
	include/Makefile
	include/osmocom/Makefile
	include/osmocom/hnbap/Makefile
	include/osmocom/ranap/Makefile
	include/osmocom/rua/Makefile
	include/osmocom/iuh/Makefile
	doc/Makefile
	doc/examples/Makefile
	contrib/Makefile
	contrib/systemd/Makefile
	)
