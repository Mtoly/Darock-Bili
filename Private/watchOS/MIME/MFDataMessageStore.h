//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFDataMessageStore_h
#define MFDataMessageStore_h
@import Foundation;

#include "MFMessageStore.h"

@class BOOL *, NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {
  /* instance variables */
  NSData *_data;
  Class _messageClass;
  NSString *_storagePath;
}

@property (retain, nonatomic) id mailboxUid;

/* instance methods */
- (id)initWithData:(id)data;
- (id)storePath;
- (id)storagePath;
- (void)setStoragePath:(id)path;
- (void)setMessageClass:(Class)class;
- (id)message;
- (id)account;
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
- (BOOL)bodyFetchRequiresNetworkActivity;
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;
- (id)storeData:(id)data forMimePart:(id)part isComplete:(BOOL)complete;
- (BOOL)messageCanBeTriaged:(id)triaged;
@end

#endif /* MFDataMessageStore_h */