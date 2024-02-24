//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBTabGroup_h
#define WBTabGroup_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WBBookmarkRepresentable-Protocol.h"
#include "WBSerializable-Protocol.h"
#include "WBTab.h"
#include "WebBookmark.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL, WBSCRDTPosition;

@interface WBTabGroup : NSObject<NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable> {
  /* instance variables */
  NSArray *_cachedImmutableTabs;
  NSMutableArray *_deletedTabs;
  NSMutableDictionary *_tabsByUUID;
}

@property (readonly, copy, nonatomic) id /* block */ displayTitleProvider;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) BOOL inserted;
@property (nonatomic) long long kind;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic) BOOL isMutable;
@property (readonly, nonatomic) Class tabClass;
@property (readonly, copy, nonatomic) NSArray *overflowRemoteTabs;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) BOOL hasDynamicTitle;
@property (readonly, copy, nonatomic) NSString *lastSelectedTabUUID;
@property (readonly, nonatomic) BOOL local;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSURL *representativeURL;
@property (readonly, nonatomic) BOOL privateBrowsing;
@property (readonly, nonatomic) BOOL syncable;
@property (readonly, nonatomic) BOOL named;
@property (readonly, nonatomic) BOOL usesGlobalPinnedTabs;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, copy, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, copy, nonatomic) NSSet *emptyTabsUUIDSet;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) WBTab *lastPinnedTab;
@property (readonly, copy, nonatomic) NSString *debugSyncDescription;
@property (readonly, copy, nonatomic) NSString *debugRecursiveSyncDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithDeviceIdentifier:(id)identifier;
- (id)initWithTitle:(id)title deviceIdentifier:(id)identifier;
- (id)initWithTitle:(id)title uuid:(id)uuid deviceIdentifier:(id)identifier;
- (id)initWithBookmark:(id)bookmark;
- (id)initWithBookmark:(id)bookmark lastSelectedTabUUID:(id)uuid;
- (id)initWithBookmark:(id)bookmark lastSelectedTabUUID:(id)uuid kind:(long long)kind;
- (BOOL)isEqual:(id)equal;
- (id)_copyWithZone:(struct _NSZone *)zone isMutable:(BOOL)mutable;
- (void)_updateCachedImmutableTabsIfNeeded;
- (void)_updateTabLookupTable;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithDictionaryRepresentation:(id)representation;
- (BOOL)isHidden;
- (BOOL)isInserted;
- (BOOL)isLocal;
- (BOOL)isPrivateBrowsing;
- (BOOL)isSyncable;
- (BOOL)isNamed;
- (id)lastPinnedTabExcluding:(id)excluding;
- (BOOL)hasSameKindAsTabGroup:(id)group;
- (BOOL)isIdentical:(id)identical;
- (BOOL)tabsAreIdentical:(id)identical;
- (id)tabWithUUID:(id)uuid;
- (BOOL)isTabPinnable:(id)pinnable;
- (void)detectDuplicatedTabs;
- (BOOL)_isMutable;
- (Class)_tabClass;
@end

#endif /* WBTabGroup_h */