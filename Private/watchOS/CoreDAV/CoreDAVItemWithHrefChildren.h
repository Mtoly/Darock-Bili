//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVItemWithHrefChildren_h
#define CoreDAVItemWithHrefChildren_h
@import Foundation;

#include "CoreDAVItem.h"
#include "CoreDAVItemWithNoChildren.h"

@class NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

/* class methods */
+ (id)copyParseRules;

/* instance methods */
- (id)description;
- (void)addHref:(id)href;
- (id)hrefsAsFullURLs;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
@end

#endif /* CoreDAVItemWithHrefChildren_h */