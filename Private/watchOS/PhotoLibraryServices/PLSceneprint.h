//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSceneprint_h
#define PLSceneprint_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLAdditionalAssetAttributes.h"

@class NSData;

@interface PLSceneprint : PLManagedObject

@property (retain, @dynamic, nonatomic) NSData *data;
@property (retain, @dynamic, nonatomic) NSData *duplicateMatchingData;
@property (retain, @dynamic, nonatomic) NSData *duplicateMatchingAlternateData;
@property (retain, @dynamic, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;

/* class methods */
+ (id)entityName;
+ (id)insertInCurrentManagedObjectContext:(id)context withAdditionalAssetAttributes:(id)attributes;

/* instance methods */
- (void)setDuplicateMatchingData:(id)data duplicateMatchingAlternateData:(id)data;
- (void)willSave;
@end

#endif /* PLSceneprint_h */