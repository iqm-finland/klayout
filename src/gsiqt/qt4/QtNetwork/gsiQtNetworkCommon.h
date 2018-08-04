/**
 *  Common header for Qt binding definition library
 *
 *  DO NOT EDIT THIS FILE. 
 *  This file has been created automatically
 */

#include "tlDefs.h"

#if !defined(HDR_gsiQtNetworkCommon_h)
# define HDR_gsiQtNetworkCommon_h

# ifdef MAKE_GSI_QTNETWORK_LIBRARY
#   define GSI_QTNETWORK_PUBLIC           DEF_INSIDE_PUBLIC
#   define GSI_QTNETWORK_PUBLIC_TEMPLATE  DEF_INSIDE_PUBLIC_TEMPLATE
#   define GSI_QTNETWORK_LOCAL            DEF_INSIDE_LOCAL
# else
#   define GSI_QTNETWORK_PUBLIC           DEF_OUTSIDE_PUBLIC
#   define GSI_QTNETWORK_PUBLIC_TEMPLATE  DEF_OUTSIDE_PUBLIC_TEMPLATE
#   define GSI_QTNETWORK_LOCAL            DEF_OUTSIDE_LOCAL
# endif

#define FORCE_LINK_GSI_QTNETWORK void force_link_gsiQtNetwork_f () { GSI_QTNETWORK_PUBLIC int force_link_gsiQtNetwork; force_link_gsiQtNetwork = 0; }

#endif
