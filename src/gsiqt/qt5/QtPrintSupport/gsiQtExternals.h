
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtPrintSupportExternals)
#define HDR_gsiQtPrintSupportExternals

#include "gsiClass.h"
#include "gsiQtPrintSupportCommon.h"

class QAbstractPrintDialog;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QAbstractPrintDialog> &qtdecl_QAbstractPrintDialog (); }

class QPageSetupDialog;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog (); }

class QPrintDialog;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintDialog> &qtdecl_QPrintDialog (); }

class QPrintEngine;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintEngine> &qtdecl_QPrintEngine (); }

class QPrintPreviewDialog;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintPreviewDialog> &qtdecl_QPrintPreviewDialog (); }

class QPrintPreviewWidget;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrintPreviewWidget> &qtdecl_QPrintPreviewWidget (); }

class QPrinter;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrinter> &qtdecl_QPrinter (); }

class QPrinterInfo;
namespace gsi { GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPrinterInfo> &qtdecl_QPrinterInfo (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif
