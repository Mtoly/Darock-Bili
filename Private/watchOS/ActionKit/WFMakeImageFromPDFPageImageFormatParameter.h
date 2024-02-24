//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMakeImageFromPDFPageImageFormatParameter_h
#define WFMakeImageFromPDFPageImageFormatParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"

@class NSArray;

@interface WFMakeImageFromPDFPageImageFormatParameter : WFEnumerationParameter {
  /* instance variables */
  NSArray *_possibleStates;
}

/* instance methods */
- (id)possibleStates;
- (id)readableStringFromFileTypeString:(id)string;
- (id)localizedLabelForPossibleState:(id)state;
- (id)defaultSerializedRepresentation;
@end

#endif /* WFMakeImageFromPDFPageImageFormatParameter_h */