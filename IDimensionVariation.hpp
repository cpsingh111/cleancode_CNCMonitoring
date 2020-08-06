#ifndef IDIMENSIONVARIATION_H
#define IDIMENSIONVARIATION_H

#include "ICNC.hpp"

CNC_Status Notify_DimensionVariation(float val);

class IDimensionVariation
{
private:
    float DimensionVariation;
    float DimensionVariationAllowed= 0.05;//in mm
public:
    void Set_DimensionVariation( float val){
        DimensionVariation=val;
    }
    float Get_DimensionVariation(void){
        return DimensionVariation;
    }
    bool IsDimensionVariationNok(void){
        return(!Islessthan(DimensionVariation,DimensionVariationAllowed));
    }

    IDimensionVariation(){
        DimensionVariation =0;
    }
};

#endif