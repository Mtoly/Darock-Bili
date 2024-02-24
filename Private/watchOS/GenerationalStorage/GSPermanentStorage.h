//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 362.0.0.0.0
//
#ifndef GSPermanentStorage_h
#define GSPermanentStorage_h
@import Foundation;

#include "GSAdditionStoring-Protocol.h"
#include "GSAdditionStoringPrivate-Protocol.h"
#include "GSDocumentIdentifier.h"
#include "GSStagingPrefix.h"

@class NSData, NSURL;
@protocol NSCopying><NSSecureCoding;

@interface GSPermanentStorage : NSObject<GSAdditionStoringPrivate, GSAdditionStoring> {
  /* instance variables */
  long long _pubHandle;
  long long _privHandle;
}

@property (readonly, nonatomic) long long remoteID;
@property (retain, nonatomic) GSStagingPrefix *stagingPrefix;
@property (retain) NSData *pubExtension;
@property (retain) NSData *privExtension;
@property (readonly, nonatomic) GSDocumentIdentifier *documentID;
@property (readonly, nonatomic) unsigned long long storageID;
@property (retain) NSURL *documentURL;
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;

/* class methods */
+ (id)storagePrefixForFileDescriptor:(int)descriptor error:(id *)error;
+ (id)storageIDForItemAtURL:(id)url error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithFileDescriptor:(int)descriptor documentID:(id)id forItemAtURL:(id)url error:(id *)error;
- (BOOL)_refreshRemoteIDWithFileDescriptor:(int)descriptor error:(id *)error;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)getAdditionDictionary:(id)dictionary error:(id *)error;
- (BOOL)setAdditionOptions:(id)options value:(unsigned long long)value error:(id *)error;
- (BOOL)setAdditionDisplayName:(id)name value:(id)value error:(id *)error;
- (id)setAdditionNameSpace:(id)space value:(id)value error:(id *)error;
- (BOOL)mergeAdditionUserInfo:(id)info value:(id)value error:(id *)error;
- (id)stagingURLforCreatingAdditionWithError:(id *)error;
- (id)URLforReplacingItemWithError:(id *)error;
- (void)cleanupStagingURL:(id)url;
- (id)prepareAdditionCreationWithItemAtURL:(id)url byMoving:(BOOL)moving creationInfo:(id)info error:(id *)error;
- (void)createAdditionStagedAtURL:(id)url creationInfo:(id)info completionHandler:(id /* block */)handler;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)addition preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)url preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (id)additionWithName:(id)name inNameSpace:(id)space error:(id *)error;
- (id)additionsWithNames:(id)names inNameSpace:(id)space error:(id *)error;
- (id)enumeratorForAdditionsInNameSpace:(id)space withOptions:(unsigned long long)options withoutOptions:(unsigned long long)options ordering:(int)ordering;
- (id)_calculateSpecForAdditionRemoval:(id)removal;
- (id)_removalErrorDictionaryCreation:(id)creation withAdditions:(id)additions;
- (void)removeAdditions:(id)additions completionHandler:(id /* block */)handler;
- (void)removeAllAdditionsForNamespaces:(id)namespaces completionHandler:(id /* block */)handler;
- (BOOL)transferToItemAtURL:(id)url error:(id *)error;
@end

#endif /* GSPermanentStorage_h */