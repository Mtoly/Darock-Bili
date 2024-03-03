//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAQuotaInfoResponse_h
#define AAQuotaInfoResponse_h
@import Foundation;

#include "AAResponse.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface AAQuotaInfoResponse : AAResponse {
  /* instance variables */
  NSDictionary *_quotaInfo;
  NSDictionary *_endPoints;
  NSDictionary *_storageInfo;
  NSDictionary *_storageMeterLabel;
}

@property (readonly, nonatomic) NSArray *usage;
@property (readonly, nonatomic) NSURL *manageStorageURL;
@property (readonly, nonatomic) NSNumber *availableStorageInBytes;
@property (readonly, nonatomic) NSNumber *usedStorageInBytes;
@property (readonly, nonatomic) NSNumber *totalStorageInBytes;
@property (readonly, nonatomic) BOOL hasMaxTier;
@property (readonly, nonatomic) NSString *displayLabel;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
- (void)_initFromResponseDict;
- (void)updateAccount:(id)account completion:(id /* block */)completion;
@end

#endif /* AAQuotaInfoResponse_h */