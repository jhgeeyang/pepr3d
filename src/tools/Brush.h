#pragma once
#include "tools/Tool.h"
#include "ui/IconsMaterialDesign.h"
#include "ui/SidePane.h"

namespace pepr3d {

class Brush : public Tool {
   public:
    virtual std::string getName() const override {
        return "Brush";
    }

    virtual std::string getIcon() const override {
        return ICON_MD_BRUSH;
    }
};
}  // namespace pepr3d
