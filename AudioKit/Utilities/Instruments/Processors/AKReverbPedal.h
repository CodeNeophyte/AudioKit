//
//  AKReverbPedal.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 3/20/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import "AKFoundation.h"

/// A reverb processor and end point (outputs to the DAC)
@interface AKReverbPedal : AKInstrument

@property (nonatomic) AKInstrumentProperty *feedback;

// Audio outlet for global effects processing
@property (readonly) AKStereoAudio *output;

- (instancetype)initWithAudioSource:(AKAudio *)audioSource;

@end
