//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKXReaderBase_h
#define CKXReaderBase_h
@import Foundation;

#include "CKXSchema.h"

@interface CKXReaderBase : NSObject

@property (readonly, nonatomic) CKXSchema *schema;

/* instance methods */
- (id)initWithSchema:(id)schema;
@end

#endif /* CKXReaderBase_h */