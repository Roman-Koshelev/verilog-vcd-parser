
#include <iostream>

#include "VCDFile.hpp"
        
        
//! Instance a new VCD file container.
VCDFile::VCDFile(){

}


/*!
@brief Add a new scope object to the VCD file
*/
void VCDFile::add_scope(
    VCDScope * s
){
    this -> scopes.push_back(s);
}


/*!
@brief Add a new signal object to the VCD file
*/
void VCDFile::add_signal(
    VCDSignal * s
){
    this -> signals.push_back(s);

    // Add a timestream entry
    if(val_map.find(s -> hash) == val_map.end()) {
        // Values will be populated later.
        val_map[s -> hash] = new VCDSignalValues();
    }
}


/*!
@brief Return the scope object in the VCD file with this name
*/
VCDScope * VCDFile::get_scope(
    VCDScopeName name
){
        return nullptr;
}

