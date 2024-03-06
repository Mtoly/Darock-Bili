//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMNLUPreprocessRequestCommand_h
#define CDMNLUPreprocessRequestCommand_h
@import Foundation;

#include "CDMServiceGraphProtoBackedCommand.h"

@class SIRINLUEXTERNALCDMNluRequest;

@interface CDMNLUPreprocessRequestCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;

/* class methods */
+ (id)innerProtoPropertyName;
+ (Class)innerProtoType;
+ (id)serviceGraphName;

/* instance methods */
- (id)initWithNLURequest:(id)nlurequest;
@end

#endif /* CDMNLUPreprocessRequestCommand_h */