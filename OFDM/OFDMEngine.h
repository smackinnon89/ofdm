//
//  OFDMEngine.h
//  OFDM
//
//  Created by Stephen MacKinnon on 1/17/13.
//  Copyright (c) 2013 Stephen MacKinnon. All rights reserved.
//

#ifndef __OFDM__OFDMEngine__
#define __OFDM__OFDMEngine__

#include <iostream>
#include "ofdm_params.h"
#include <math.h>
#include <vector>
#define _USE_MATH_DEFINES

class OFDMEngine {
public:
    OFDMEngine();
    std::vector<double> Modulate( unsigned char* data, long lDataLength );
    void Demodulate( unsigned char* data, long lDataLength );    
    
};

#endif /* defined(__OFDM__OFDMEngine__) */