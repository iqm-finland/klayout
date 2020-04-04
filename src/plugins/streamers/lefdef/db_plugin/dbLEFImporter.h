
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

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



#ifndef HDR_dbLEFImporter
#define HDR_dbLEFImporter

#include "dbPluginCommon.h"
#include "dbLEFDEFImporter.h"

#include "dbLayout.h"
#include "dbReader.h"
#include "dbStreamLayers.h"
#include "tlStream.h"

#include <vector>
#include <string>
#include <map>

namespace db
{

/**
 *  @brief The LEF importer object
 */
class DB_PLUGIN_PUBLIC LEFImporter
  : public LEFDEFImporter
{
public:
  /**
   *  @brief Default constructor
   */
  LEFImporter ();

  /**
   *  @brief Destructor
   */
  ~LEFImporter ();

  /**
   *  @brief Get the cell for a macro name
   *
   *  Returns 0 if the name is not a valid macro name. Otherwise it returns the pointer
   *  to the corresponding db::Cell object.
   */
  db::Cell *macro_by_name (const std::string &macro_name) const;

  /**
   *  @brief Get the cell bbox for the given macro name
   */
  db::Box macro_bbox_by_name (const std::string &macro_name) const;

  /**
   *  @brief Get the width for a layer with the given name
   *
   *  Returns the given default width if the layer is not found.
   *  The nondefaultrule name gives the name of the nondefaultrule or an empty string if
   *  none is requested.
   */
  std::pair<double, double> layer_width (const std::string &layer, const std::string &nondefaultrule, const std::pair<double, double> &def_width = std::make_pair (0.0, 0.0)) const;

  /**
   *  @brief Get the extension for a layer with the given name
   *
   *  Returns the given default extension if the layer is not found.
   */
  double layer_ext (const std::string &layer, double def_ext = 0.0) const;

  /**
   *  @brief Gets the minimum wire width in x and y direction for the given layer name
   */
  std::pair<double, double> min_layer_width (const std::string &layer) const;

  /**
   *  @brief Returns true if the given layer is a routing layer
   */
  bool is_routing_layer (const std::string &layer) const
  {
    return m_routing_layers.find (layer) != m_routing_layers.end ();
  }

  /**
   *  @brief Returns true if the given layer is a cut layer
   */
  bool is_cut_layer (const std::string &layer) const
  {
    return m_cut_layers.find (layer) != m_cut_layers.end ();
  }

  /**
   *  @brief Gets a map of the vias defined in this LEF file
   *
   *  The map maps the via name to the via description.
   */
  const std::map<std::string, ViaDesc> &vias () const
  {
    return m_vias;
  }

protected:
  void do_read (db::Layout &layout);

private:
  std::map<std::string, std::map<std::string, std::pair<double, double> > > m_nondefault_widths;
  std::map<std::string, std::pair<double, double> > m_default_widths;
  std::map<std::string, double> m_default_ext;
  std::map<std::string, std::pair<double, double> > m_min_widths;
  std::map<std::string, db::Cell *> m_macros_by_name;
  std::map<std::string, db::Box> m_macro_bboxes_by_name;
  std::map<std::string, ViaDesc> m_vias;
  std::set<std::string> m_routing_layers, m_cut_layers;

  std::vector <db::Trans> get_iteration (db::Layout &layout);
  void read_geometries (db::Layout &layout, db::Cell &cell, LayerPurpose purpose, std::map<std::string, db::Box> *collect_bboxes = 0, properties_id_type prop_id = 0);
  void read_nondefaultrule (Layout &layout);
  void read_viadef (Layout &layout);
  void read_viadef_by_rule (Layout &layout, db::Cell &cell, ViaDesc &desc, const std::string &n);
  void read_viadef_by_geometry (Layout &layout, db::Cell &cell, ViaDesc &desc, const std::string &n);
  void read_layer (Layout &layout);
  void read_macro (Layout &layout);
};

}

#endif

