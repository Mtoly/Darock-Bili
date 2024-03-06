//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.0, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 57.0.0.0.0
//
#ifndef SCTimeReference_h
#define SCTimeReference_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source, {TimeReference="rtp_tick_duration"{variant<std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>>="__impl_"{__impl<std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>>="__data"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>>="__dummy"c"__head"{__alt<0UL, std::chrono::duration<long long, std::ratio<1, 24000000>>>="__value"{duration<long long, std::ratio<1, 24000000>>="__rep_"q}}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, std::chrono::duration<long long, std::ratio<1, 32768>>>="__dummy"c"__head"{__alt<1UL, std::chrono::duration<long long, std::ratio<1, 32768>>>="__value"{duration<long long, std::ratio<1, 32768>>="__rep_"q}}"__tail"(__union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL>=)))"__index"I}}"continuous_time_point"{time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>="__d_"{duration<long long, std::ratio<1, 1000000000>>="__rep_"q}}"time_since_reference_date"{duration<double, std::ratio<1>>="__rep_"d}};

@interface SCTimeReference : NSObject {
  /* instance variables */
  struct TimeReference { struct variant<std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>> { struct __impl<std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, std::chrono::duration<long long, std::ratio<1, 24000000>>, std::chrono::duration<long long, std::ratio<1, 32768>>> { char __dummy; struct __alt<0UL, std::chrono::duration<long long, std::ratio<1, 24000000>>> { struct duration<long long, std::ratio<1, 24000000>> { long long __rep_; } __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, std::chrono::duration<long long, std::ratio<1, 32768>>> { char __dummy; struct __alt<1UL, std::chrono::duration<long long, std::ratio<1, 32768>>> { struct duration<long long, std::ratio<1, 32768>> { long long __rep_; } __value; } __head; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> __tail; } __tail; } __data; unsigned int __index; } __impl_; } rtp_tick_duration; struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } continuous_time_point; struct duration<double, std::ratio<1>> { double __rep_; } time_since_reference_date; } _timeReference;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_timer;
  int _significantTimeChangeNotificationToken;
}

@property (readonly, nonatomic) unsigned int rtpTicksPerSecond;

/* instance methods */
- (id)initWithRTPTicksPerSecond:(unsigned int)second onQueue:(id)queue;
- (void)dealloc;
- (double)timeIntervalSinceReferenceDateForRTPTimestamp:(unsigned long long)rtptimestamp;
- (id)dateForRTPTimestamp:(unsigned long long)rtptimestamp;
- (unsigned long long)currentRTPTimestamp;
- (void)update;
@end

#endif /* SCTimeReference_h */