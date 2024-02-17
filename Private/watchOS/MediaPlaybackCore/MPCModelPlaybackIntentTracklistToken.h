//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelPlaybackIntentTracklistToken_h
#define MPCModelPlaybackIntentTracklistToken_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class MPIdentifierSet, MPModelRequest;

@interface MPCModelPlaybackIntentTracklistToken : NSObject<NSSecureCoding>

@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)requiredPropertiesForStaticMediaClips;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MPCModelPlaybackIntentTracklistToken_h */