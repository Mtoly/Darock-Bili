//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsContacts_h
#define MapsSuggestionsContacts_h
@import Foundation;

#include "MapsSuggestionsContactsConnector-Protocol.h"
#include "MapsSuggestionsDarwinNotificationTrigger.h"
#include "MapsSuggestionsLimitedDictionary.h"
#include "MapsSuggestionsLocaleChangedTrigger.h"
#include "MapsSuggestionsMeCard.h"
#include "MapsSuggestionsMeCardReader-Protocol.h"
#include "MapsSuggestionsNetworkRequester-Protocol.h"
#include "MapsSuggestionsObservers.h"

@class NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"};

@interface MapsSuggestionsContacts : NSObject<MapsSuggestionsMeCardReader> {
  /* instance variables */
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
  NSObject<MapsSuggestionsContactsConnector> *_connector;
  NSObject<MapsSuggestionsNetworkRequester> *_networkRequester;
  MapsSuggestionsLimitedDictionary *_cache;
  MapsSuggestionsObservers *_meCardObservers;
  MapsSuggestionsMeCard *_currMeCard;
  MapsSuggestionsLocaleChangedTrigger *_localeChangedTrigger;
  MapsSuggestionsDarwinNotificationTrigger *_geoActiveTileGroupChangedTrigger;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnector:(id)connector networkRequester:(id)requester;
- (id)initFromResourceDepot:(id)depot;
- (void)dealloc;
- (void)registerMeCardObserver:(id)observer;
- (void)unregisterMeCardObserver:(id)observer;
- (char)readMeCardWithHandler:(id /* block */)handler;
- (void)contactsDidUpdate;
- (char)readMeCardAddressStringsWithHandler:(id /* block */)handler;
- (id)contactNameForIdentifier:(id)identifier;
- (id)friendlyNameForIndentifier:(id)indentifier;
- (id)profilePictureForIdentifier:(id)identifier;
- (id)dataForContactWithIdentifier:(id)identifier;
- (void)awaitQueue;
@end

#endif /* MapsSuggestionsContacts_h */