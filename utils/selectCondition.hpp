#ifndef __SELECT_CONDITION__
#define __SELECT_CONDITION__

#include "../config.hpp"
#include "element.hpp"
#include "../catalog/catalogManager.hpp"

class SelectCondition {
public:
    string attributeName;
    CMP conditionType;
    Element value;
    int attributeIndex;

    SelectCondition(string _attributeName, CMP _conditionType, Element _value, int _attributeIndex = -1):
                    attributeName(_attributeName), conditionType(_conditionType), value(_value), attributeIndex(_attributeIndex) {}
    
    void fillAttributeIndex(string tableName, CatalogManager& catalog_manager) {
        attributeIndex = catalog_manager.get_attribute_index(tableName, attributeName);
    }
};

#endif