//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUAudioFrequencyController_h
#define TUAudioFrequencyController_h
@import Foundation;

#include "AVCAudioPowerSpectrumMeterDelegate-Protocol.h"

@class AVCAudioPowerSpectrumMeter, NSString;
@protocol OS_dispatch_queue, TUAudioFrequencyControllerDelegate;

@interface TUAudioFrequencyController : NSObject<AVCAudioPowerSpectrumMeterDelegate>

@property (readonly, weak, nonatomic) NSObject<TUAudioFrequencyControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) AVCAudioPowerSpectrumMeter *powerSpectrumMeter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (float)normalizedPowerLevelForPowerSpectrum:(id)spectrum;
+ (float)rawPowerLevelForPowerSpectrum:(id)spectrum;

/* instance methods */
- (id)initWithDelegate:(id)delegate queue:(id)queue;
- (void)registerParticipantPowerSpectrum:(long long)spectrum;
- (void)unregisterParticipantPowerSpectrum:(long long)spectrum;
- (void)registerCellularPowerSpectrum:(long long)spectrum;
- (void)unregisterCellularPowerSpectrum:(long long)spectrum;
- (unsigned int)_avcTapTypeForTUTapType:(long long)type;
- (void)audioPowerSpectrumMeter:(id)meter didUpdateAudioPowerSpectrums:(id)spectrums;
- (void)meterServerDidDisconnect:(id)disconnect;
@end

#endif /* TUAudioFrequencyController_h */