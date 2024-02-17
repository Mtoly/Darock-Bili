//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentWebServiceBackgroundContext_h
#define PKPaymentWebServiceBackgroundContext_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface PKPaymentWebServiceBackgroundContext : NSObject<NSSecureCoding> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSMutableDictionary *backgroundTaskRecordsByTaskIdentifier;
@property (retain) NSMutableDictionary *backgroundTaskRecordsByRecordName;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)archive;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)archiveAtPath:(id)path;
- (void)addBackgroundDownloadRecord:(id)record forTaskIdentifier:(unsigned long long)identifier;
- (void)addBackgroundDownloadRecord:(id)record forRecordName:(id)name;
- (id)backgroundDownloadRecordForTaskIdentifier:(unsigned long long)identifier;
- (id)backgroundDownloadRecordForRecordName:(id)name;
- (void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)identifier;
- (void)removeBackgroundDownloadRecordForRecordName:(id)name;
- (id)remainingTasks;
@end

#endif /* PKPaymentWebServiceBackgroundContext_h */