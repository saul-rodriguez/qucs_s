#include "custompreferences.h"

CustomPreferences gCustomPref;

CustomPreferences::CustomPreferences()
{
   setQUCSdefault();
}

void CustomPreferences::loadCustomProperties()
{
  //TODO: read user defined colors
}

void CustomPreferences::setCadence()
{
    //Cadence colors
    gridColor = Qt::gray;

    //componentColor = Qt::darkGreen;
    //componentName = Qt::red;
    //componentValue = Qt::darkYellow;

    componentColor = QColor(0x00ca66);
    componentName = QColor(0xfe0000);
    componentValue = QColor(0xfe8000);
    componentThickness = 1;

    portColor = QColor(0xfe0000);
    portShape = "rect";

    wireColor = QColor(0x38befe);
    wireThickness = 1;
}

void CustomPreferences::setQUCSdefault()
{
    //Default QUCS values
    gridColor = Qt::black;

    componentColor = Qt::darkBlue;
    componentName = Qt::black;
    componentValue = Qt::black;
    componentThickness = 2;

    portColor = Qt::red;
    portShape = "arc";

    wireColor = Qt::darkBlue;
    wireThickness = 2;
}
