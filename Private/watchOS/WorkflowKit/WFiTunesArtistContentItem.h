//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFiTunesArtistContentItem_h
#define WFiTunesArtistContentItem_h
@import Foundation;

#include "WFiTunesObjectContentItem.h"

@interface WFiTunesArtistContentItem : WFiTunesObjectContentItem
/* class methods */
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;

/* instance methods */
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
- (BOOL)getListSubtitle:(id /* block */)subtitle;
@end

#endif /* WFiTunesArtistContentItem_h */