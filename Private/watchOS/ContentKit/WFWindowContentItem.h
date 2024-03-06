//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWindowContentItem_h
#define WFWindowContentItem_h
@import Foundation;

#include "WFContentItem.h"
#include "WFContentItemClass-Protocol.h"
#include "WFObjectType.h"
#include "WFWindow.h"

@class NSDictionary, NSString, WFFileType;

@interface WFWindowContentItem : WFContentItem<WFContentItemClass>

@property (readonly, nonatomic) WFWindow *window;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)propertyBuilders;
+ (void)runQuery:(id)query withItems:(id)items permissionRequestor:(id)requestor completionHandler:(id /* block */)handler;
+ (BOOL)hasLibrary;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (BOOL)getListSubtitle:(id /* block */)subtitle;
- (BOOL)getListThumbnail:(id /* block */)thumbnail forSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)getListAltText:(id /* block */)text;
- (id)app;
- (id)display;
- (id)generateObjectRepresentationForClass:(Class)class options:(id)options error:(id *)error;
- (id)defaultSourceForRepresentation:(id)representation;
@end

#endif /* WFWindowContentItem_h */