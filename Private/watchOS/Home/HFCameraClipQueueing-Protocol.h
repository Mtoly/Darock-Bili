//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraClipQueueing_Protocol_h
#define HFCameraClipQueueing_Protocol_h
@import Foundation;

@protocol HFCameraClipQueueing <NSObject>

@property (readonly, nonatomic) NSArray *queuableItems;

/* instance methods */
- (id)createQueueableItemForClipManager:(id)manager clip:(id)clip;
- (void)insertQueueableItem:(id)item afterItem:(id)item;
- (void)removeQueueableItem:(id)item;
- (void)seekToOffset:(double)offset inItem:(id)item;
@end

#endif /* HFCameraClipQueueing_Protocol_h */