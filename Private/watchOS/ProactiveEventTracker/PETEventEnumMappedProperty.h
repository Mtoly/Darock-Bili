//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETEventEnumMappedProperty_h
#define PETEventEnumMappedProperty_h
@import Foundation;

#include "PETEventProperty.h"

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty {
  /* instance variables */
  NSDictionary *_enumMap;
  BOOL _autoSanitizeValues;
}

/* instance methods */
- (id)initWithName:(id)name enumMapping:(id)mapping autoSanitizeValues:(BOOL)values;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })validRange;
- (BOOL)isValidValue:(id)value;
- (id)_loggingKeyStringRepresentationForValue:(id)value;
- (id)possibleValues;
- (unsigned long long)cardinality;
- (id)longestValueString;
@end

#endif /* PETEventEnumMappedProperty_h */