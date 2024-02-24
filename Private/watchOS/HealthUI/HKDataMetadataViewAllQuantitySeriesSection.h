//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDataMetadataViewAllQuantitySeriesSection_h
#define HKDataMetadataViewAllQuantitySeriesSection_h
@import Foundation;

#include "HKDataMetadataSimpleSection.h"
#include "HKDataMetadataViewControllerDelegate-Protocol.h"
#include "HKQuantitySeriesDataProviderDelegate-Protocol.h"

@class HKSample, NSString;

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection<HKQuantitySeriesDataProviderDelegate>

@property (retain) HKSample *sample;
@property (weak, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate;
@property (copy) id /* block */ reloadMetaDataVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSample:(id)sample delegate:(id)delegate;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)index tableView:(id)view;
- (void)selectCellForIndex:(unsigned long long)index navigationController:(id)controller animated:(BOOL)animated;
- (void)sampleDidChange:(id)change;
- (void)reloadSampleData;
@end

#endif /* HKDataMetadataViewAllQuantitySeriesSection_h */