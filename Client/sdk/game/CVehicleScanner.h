/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/CVehicleScanner.h
 *  PURPOSE:     Vehicle scanner interface
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

class CVehicle;

class CVehicleScanner
{
public:
    virtual CVehicle* GetClosestVehicleInRange() = 0;
};
