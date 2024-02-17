//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef NSURL_CPLArchiver_h
#define NSURL_CPLArchiver_h
@import Foundation;

#include "NSCoder.h"

@interface NSURL (CPLArchiver)
/* instance methods */
- (id)cpl_redactedShareURL;
- (id)plistArchiveWithCPLArchiver:(id)cplarchiver;
- (id)initWithCPLArchiver:(id)cplarchiver;
@end

#endif /* NSURL_CPLArchiver_h */