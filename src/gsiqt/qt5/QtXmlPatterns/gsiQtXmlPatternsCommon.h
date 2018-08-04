/**
 *  Common header for Qt binding definition library
 *
 *  DO NOT EDIT THIS FILE. 
 *  This file has been created automatically
 */

#include "tlDefs.h"

#if !defined(HDR_gsiQtXmlPatternsCommon_h)
# define HDR_gsiQtXmlPatternsCommon_h

# ifdef MAKE_GSI_QTXMLPATTERNS_LIBRARY
#   define GSI_QTXMLPATTERNS_PUBLIC           DEF_INSIDE_PUBLIC
#   define GSI_QTXMLPATTERNS_PUBLIC_TEMPLATE  DEF_INSIDE_PUBLIC_TEMPLATE
#   define GSI_QTXMLPATTERNS_LOCAL            DEF_INSIDE_LOCAL
# else
#   define GSI_QTXMLPATTERNS_PUBLIC           DEF_OUTSIDE_PUBLIC
#   define GSI_QTXMLPATTERNS_PUBLIC_TEMPLATE  DEF_OUTSIDE_PUBLIC_TEMPLATE
#   define GSI_QTXMLPATTERNS_LOCAL            DEF_OUTSIDE_LOCAL
# endif

#define FORCE_LINK_GSI_QTXMLPATTERNS void force_link_gsiQtXmlPatterns_f () { GSI_QTXMLPATTERNS_PUBLIC int force_link_gsiQtXmlPatterns; force_link_gsiQtXmlPatterns = 0; }

#endif
