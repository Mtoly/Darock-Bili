//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INFNumber_h
#define INFNumber_h
@import Foundation;

#include "INFSentenceToken.h"

@class NSNumber, NSString;

@interface INFNumber : INFSentenceToken {
  /* instance variables */
  NSString *_identifier;
}

@property (copy, nonatomic) NSNumber *value;

/* class methods */
+ (id)numberWithIdentifier:(id)identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)contributingSentenceContext;
- (id)stringForContext:(id)context;
- (id)dictionaryRepresentation;
- (id)identifier;
@end

#endif /* INFNumber_h */