/*
 * $Source: F:/DOSDEV/NEWKRB/INCLUDE/RCS/osconf.h $
 * $Author: pbh $
 * $Header: F:/DOSDEV/NEWKRB/INCLUDE/RCS/osconf.h 1.2 1994/08/16 18:43:42 pbh Exp $
 *
 * Copyright 1988 by the Massachusetts Institute of Technology.
 *
 * For copying and distribution information, please see the file
 * <mit-copyright.h>.
 *
 * Athena configuration.
 */

#include <mit_copy.h>

#ifndef _OSCONF_H_
#define _OSCONF_H_

#if defined(IBMPC) && !defined(PC)
#define PC
#endif

#ifdef tahoe
#include "conf-bsdtahoe.h"
#else /* !tahoe */
#ifdef vax
#include "conf-bsdvax.h"
#else /* !vax */
#if defined(mips) && defined(ultrix)
#include "conf-ultmips2.h"
#else /* !Ultrix MIPS-2 */
#ifdef ibm032
#include "conf-bsdibm032.h"
#else /* !ibm032 */
#ifdef apollo
#include "conf-bsdapollo.h"
#else /* !apollo */
#ifdef sun
#ifdef sparc
#include "conf-bsdsparc.h"
#else /* sun but not sparc */
#ifdef i386
#include "conf-bsd386i.h"
#else /* sun but not (sparc or 386i) */
#include "conf-bsdm68k.h"
#endif /* i386 */
#endif /* sparc */
#else /* !sun */
#ifdef pyr
#include "conf-pyr.h"
#else
#if defined(PC) || defined(__MSDOS__) || defined(OS2)
#include "conf-pc.h"
#endif /* PC */
#endif /* pyr */
#endif /* sun */
#endif /* apollo */
#endif /* ibm032 */
#endif /* mips */
#endif /* vax */
#endif /* tahoe */

#endif /* _OSCONF_H_ */
