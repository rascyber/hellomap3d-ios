/*
 * Copyright 2014 Nutiteq Llc. All rights reserved.
 * Copying and using this code is allowed only according
 * to license terms, as given in https://www.nutiteq.com/license/
 */

#ifndef _NUTI_MAPCLICKINFO_H_
#define _NUTI_MAPCLICKINFO_H_

#include "core/MapPos.h"
#include "ui/MapEventListener.h"

namespace Nuti {

    /**
     * A container class that provies information about a click performed on
     * an empty area of the map.
     */
    class MapClickInfo {
    public:
        /**
         * Constructs a MapClickInfo object from a click type and a click position.
         * @param clickType The click type.
         * @param clickPos The click position in the coordinate system of the base projection.
         */
        MapClickInfo(ClickType::ClickType clickType, const MapPos& clickPos);
        virtual ~MapClickInfo();
    
        /**
         * Returns the click type.
         * @return The type of the click performed.
         */
        ClickType::ClickType getClickType() const;
    
        /**
         * Returns the click position.
         * @return The click position in the coordinate system of the base projection.
         */
        const MapPos& getClickPos() const;
    
    private:
        ClickType::ClickType _clickType;
    
        MapPos _clickPos;
    };
    
}

#endif
