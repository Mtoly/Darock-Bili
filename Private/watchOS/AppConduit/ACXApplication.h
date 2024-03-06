//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.60.2.0.0
//
#ifndef ACXApplication_h
#define ACXApplication_h
@import Foundation;

#include "ACXRemoteApplication.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSURL;

@interface ACXApplication : ACXRemoteApplication<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSURL *watchAppURL;
@property (readonly, nonatomic) unsigned long long lsSequenceNumber;
@property (readonly, copy, nonatomic) NSArray *clockFaceExtensionPaths;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initForTesting;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithBundleID:(id)id databaseUUID:(id)uuid sequenceNumber:(unsigned long long)number;
- (id)initWithSerializedDictionary:(id)dictionary;
- (id)initWithSerializedDictionary:(id)dictionary reevaluatingTrust:(BOOL)trust;
- (id)serialize;
- (id)serializeAsRemoteApplication;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isLocallyAvailable;
- (void)_populateStoreMetadata;
- (id)initWithApplicationRecord:(id)record databaseUUID:(id)uuid sequenceNumber:(unsigned long long)number;
- (id)initWithApplicationRecord:(id)record databaseUUID:(id)uuid sequenceNumber:(unsigned long long)number expectPlaceholder:(BOOL)placeholder;
- (id)_storeMetadataWithError:(id *)error;
@end

#endif /* ACXApplication_h */