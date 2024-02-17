//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableMediaStatusDomainData_h
#define STMutableMediaStatusDomainData_h
@import Foundation;

#include "STMediaStatusDomainData.h"
#include "STMutableListData.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSArray, NSString;

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData<STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *microphoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *mutedMicrophoneRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *systemAudioRecordingAttributionListData;
@property (readonly, copy, nonatomic) STMutableListData *cameraAttributionListData;
@property (copy, @dynamic, nonatomic) NSArray *cameraAttributions;
@property (copy, @dynamic, nonatomic) NSArray *microphoneRecordingAttributions;
@property (copy, @dynamic, nonatomic) NSArray *mutedMicrophoneRecordingAttributions;
@property (copy, @dynamic, nonatomic) NSArray *systemAudioRecordingAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMicrophoneRecordingAttributionListData:(id)data mutedMicrophoneRecordingAttributionListData:(id)data systemAudioRecordingAttributionListData:(id)data cameraAttributionListData:(id)data;
- (void)addCameraAttribution:(id)attribution;
- (void)removeCameraAttribution:(id)attribution;
- (void)addMicrophoneRecordingAttribution:(id)attribution;
- (void)removeMicrophoneRecordingAttribution:(id)attribution;
- (void)addMutedMicrophoneRecordingAttribution:(id)attribution;
- (void)removeMutedMicrophoneRecordingAttribution:(id)attribution;
- (void)addSystemAudioRecordingAttribution:(id)attribution;
- (void)removeSystemAudioRecordingAttribution:(id)attribution;
- (void)setAudioRecordingAttributionList:(id)list;
- (void)addAudioRecordingAttribution:(id)attribution;
- (void)removeAudioRecordingAttribution:(id)attribution;
- (void)setAudioRecordingAttributions:(id)attributions;
- (void)setMutedAudioRecordingAttributionList:(id)list;
- (void)addMutedAudioRecordingAttribution:(id)attribution;
- (void)removeMutedAudioRecordingAttribution:(id)attribution;
- (void)setMutedAudioRecordingAttributions:(id)attributions;
- (void)setCameraCaptureAttributionList:(id)list;
- (void)addCameraCaptureAttribution:(id)attribution;
- (void)removeCameraCaptureAttribution:(id)attribution;
- (void)setCameraCaptureAttributions:(id)attributions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableMediaStatusDomainData_h */