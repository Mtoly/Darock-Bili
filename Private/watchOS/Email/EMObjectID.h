//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMObjectID_h
#define EMObjectID_h
@import Foundation;

#include "EFCacheable-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class EFStringHash, NSData, NSString;
@protocol NSObject><NSSecureCoding><NSCopying;

@interface EMObjectID : NSObject<EFLoggable, EFCacheable, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSObject<NSObject><NSSecureCoding><NSCopying> *representedObjectID;
@property (readonly) BOOL ephemeral;
@property (readonly) EFStringHash *stringHash;
@property (readonly, copy, nonatomic) NSData *serializedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)_decodableClasses;
+ (void)addDecodableClass:(Class)class;
+ (id)objectIDFromSerializedRepresentation:(id)representation;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)cachedSelf;
- (id)initAsEphemeralID:(BOOL)id;
- (id)initWithRepresentedObjectID:(id)id;
- (id)initAsEphemeralID:(BOOL)id representedObjectID:(id)id;
- (void)_commonInitAsEphemeralID:(BOOL)id representedObjectID:(id)id;
- (BOOL)isEphemeral;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* EMObjectID_h */