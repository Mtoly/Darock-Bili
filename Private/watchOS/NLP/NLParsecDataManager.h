//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 233.0.0.0.0
//
#ifndef NLParsecDataManager_h
#define NLParsecDataManager_h
@import Foundation;

@class NSData, NSMutableArray;

@interface NLParsecDataManager : NSObject {
  /* instance variables */
  NSMutableArray *m_entries;
}

@property (readonly, nonatomic) NSData *serializableData;

/* class methods */
+ (unsigned short)maxNumberOfPOIsAllowed;
+ (BOOL)supportsDomain:(id)domain;
+ (void)enumerateEntriesForSerializedData:(id)data withBlock:(id /* block */)block;
+ (void)notifyStoredSerializedDataChanged;

/* instance methods */
- (id)getEntries;
- (void)dealloc;
- (void)addEntry:(id)entry domain:(id)domain metaData:(id)data;
- (void)insertEntry:(id)entry;
@end

#endif /* NLParsecDataManager_h */