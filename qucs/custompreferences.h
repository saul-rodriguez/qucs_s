#ifndef CUSTOMPREFERENCES_H
#define CUSTOMPREFERENCES_H

#include <QColor>
#include <QObject>

class CustomPreferences
{
public:
    CustomPreferences();

    QColor componentColor;
    QColor componentName;
    QColor componentValue;
    int componentThickness;

    QColor wireColor;
    int wireThickness;

    QColor portColor;
    QString portShape;

    QColor gridColor;

    void loadCustomProperties();
    void setCadence();
};

extern CustomPreferences gCustomPref;

#endif // CUSTOMPREFERENCES_H
