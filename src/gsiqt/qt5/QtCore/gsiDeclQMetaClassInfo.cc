
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

/**
*  @file gsiDeclQMetaClassInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaClassInfo>
#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMetaClassInfo

//  Constructor QMetaClassInfo::QMetaClassInfo()


static void _init_ctor_QMetaClassInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaClassInfo> ();
}

static void _call_ctor_QMetaClassInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaClassInfo *> (new QMetaClassInfo ());
}


// const QMetaObject *QMetaClassInfo::enclosingMetaObject()


static void _init_f_enclosingMetaObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_enclosingMetaObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaClassInfo *)cls)->enclosingMetaObject ());
}


// const char *QMetaClassInfo::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaClassInfo *)cls)->name ());
}


// const char *QMetaClassInfo::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const char * > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const char * > ((const char *)((QMetaClassInfo *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QMetaClassInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaClassInfo::QMetaClassInfo()\nThis method creates an object of class QMetaClassInfo.", &_init_ctor_QMetaClassInfo_0, &_call_ctor_QMetaClassInfo_0);
  methods += new qt_gsi::GenericMethod ("enclosingMetaObject", "@brief Method const QMetaObject *QMetaClassInfo::enclosingMetaObject()\n", true, &_init_f_enclosingMetaObject_c0, &_call_f_enclosingMetaObject_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method const char *QMetaClassInfo::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method const char *QMetaClassInfo::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QMetaClassInfo> decl_QMetaClassInfo ("QtCore", "QMetaClassInfo",
  methods_QMetaClassInfo (),
  "@qt\n@brief Binding of QMetaClassInfo");


GSI_QTCORE_PUBLIC gsi::Class<QMetaClassInfo> &qtdecl_QMetaClassInfo () { return decl_QMetaClassInfo; }

}
