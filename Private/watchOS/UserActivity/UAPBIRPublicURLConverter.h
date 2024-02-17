//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAPBIRPublicURLConverter_h
#define UAPBIRPublicURLConverter_h
@import Foundation;

#include "UAPBIRConverter-Protocol.h"

@class NSString;

@interface UAPBIRPublicURLConverter : NSObject<UAPBIRConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerConverter;

/* instance methods */
- (id)typeString;
- (id)convertPlatformDataToIR:(id)ir;
- (id)convertIRDataToPlatform:(id)platform;
@end

#endif /* UAPBIRPublicURLConverter_h */