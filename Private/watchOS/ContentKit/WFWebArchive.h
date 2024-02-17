//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWebArchive_h
#define WFWebArchive_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFWebResource.h"

@class NSArray, NSData;

@interface WFWebArchive : NSObject<NSSecureCoding>

@property (readonly, nonatomic) WFWebResource *mainResource;
@property (readonly, nonatomic) NSArray *subresources;
@property (readonly, nonatomic) NSArray *subframeArchives;
@property (readonly, nonatomic) NSData *data;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)containedImageFiles;
- (id)initWithMainResource:(id)resource subresources:(id)subresources subframeArchives:(id)archives;
- (id)initWithData:(id)data;
- (id)initWithSerializedRepresentation:(id)representation;
- (id)serializedRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFWebArchive_h */