//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 85.0.0.0.0
//
#ifndef FFDefaultFileReader_h
#define FFDefaultFileReader_h
@import Foundation;

#include "FFFileReader-Protocol.h"

@interface FFDefaultFileReader : NSObject<FFFileReader>
/* instance methods */
- (id)dictionaryWithContentsOfURL:(id)url error:(id *)error;
- (id)contentsOfDirectoryAtURL:(id)url error:(id *)error;
@end

#endif /* FFDefaultFileReader_h */