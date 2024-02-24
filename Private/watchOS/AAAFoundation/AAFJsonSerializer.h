//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef AAFJsonSerializer_h
#define AAFJsonSerializer_h
@import Foundation;

#include "AAFDefaultSerializer.h"

@interface AAFJsonSerializer : AAFDefaultSerializer
/* instance methods */
- (id)mediaTypes;
- (id)_dictionaryFromObject:(id)object error:(out id *)error;
- (id)_dataFromDictionary:(id)dictionary error:(out id *)error;
@end

#endif /* AAFJsonSerializer_h */