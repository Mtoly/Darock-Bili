//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSDecryptInfo_h
#define CSDecryptInfo_h
@import Foundation;

@class NSData, NSString;

@interface CSDecryptInfo : NSObject

@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSData *decryptInfo;

/* instance methods */
- (id)initWithPlistObject:(struct { char * x0; struct { unsigned int x0; unsigned char x1; } x1; })object externalID:(id)id;
@end

#endif /* CSDecryptInfo_h */