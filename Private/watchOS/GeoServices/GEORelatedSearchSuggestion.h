//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORelatedSearchSuggestion_h
#define GEORelatedSearchSuggestion_h
@import Foundation;

#include "GEOPDRelatedSearchSuggestion.h"

@class NSString;

@interface GEORelatedSearchSuggestion : NSObject

@property (retain, nonatomic) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *searchBarDisplayToken;

/* instance methods */
- (id)initWithPDRelatedSearchSuggestion:(id)suggestion;
- (id)_suggestionEntryMetadata;
@end

#endif /* GEORelatedSearchSuggestion_h */