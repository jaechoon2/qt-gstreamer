/*
    Copyright (C) 2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGST_PLUGINFEATURE_H
#define QGST_PLUGINFEATURE_H

#include "object.h"

namespace QGst {

class PluginFeature : public Object
{
    QGST_WRAPPER(PluginFeature)
public:
    uint rank() const;
    void setRank(uint rank);

    QGlib::String name() const;
    void setName(const QGlib::String & name);

    bool checkVersion(uint major, uint minor, uint micro) const;

    void load();
};

}

QGLIB_REGISTER_TYPE(QGst::PluginFeature)

#endif // QGST_PLUGINFEATURE_H
