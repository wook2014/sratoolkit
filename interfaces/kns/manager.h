/*===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*/
#ifndef _h_kns_manager_
#define _h_kns_manager_

#ifndef _h_kns_extern_
#include <kns/extern.h>
#endif

#ifndef _h_klib_defs_
#include <klib/defs.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif


/*--------------------------------------------------------------------------
 * forwards
 */


/*--------------------------------------------------------------------------
 * KNSManager
 *  manages the network system
 */
typedef struct KNSManager KNSManager;


/* Make
 *  create a manager instance
 */
KNS_EXTERN rc_t CC KNSManagerMake ( KNSManager **mgr );


/* AddRef
 * Release
 *  ignores NULL references
 */
KNS_EXTERN rc_t CC KNSManagerAddRef ( const KNSManager *self );
KNS_EXTERN rc_t CC KNSManagerRelease ( const KNSManager *self );


/* Avail - DEPRECATED
 *  indicate to caller whether networking services are available
 *  mainly here to support libcurl
 */
KNS_EXTERN rc_t CC KNSManagerAvail ( const KNSManager *self );

/* CurlVersion - DEPRECATED
 *  indicate which version of curl is available
 *  return this as a string, because this is how libcurl does it
 */
KNS_EXTERN rc_t CC KNSManagerCurlVersion ( const KNSManager *self, const char ** version_string );


#ifdef __cplusplus
}
#endif

#endif /* _h_kns_manager_ */
