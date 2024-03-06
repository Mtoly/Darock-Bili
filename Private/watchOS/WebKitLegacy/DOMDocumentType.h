//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMDocumentType_h
#define DOMDocumentType_h
@import Foundation;

#include "DOMNode.h"
#include "DOMNamedNodeMap.h"

@class NSString;

@interface DOMDocumentType : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) DOMNamedNodeMap *entities;
@property (readonly) DOMNamedNodeMap *notations;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;
@property (readonly, copy) NSString *internalSubset;

/* instance methods */
- (void)remove;
@end

#endif /* DOMDocumentType_h */