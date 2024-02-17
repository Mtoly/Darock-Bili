//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTServerSpeechSession_h
#define _LTServerSpeechSession_h
@import Foundation;

#include "_LTDSELFLoggingManager.h"
#include "_LTHybridEndpointer.h"
#include "_LTLanguageDetector.h"
#include "_LTSpeechActivityDetector.h"
#include "_LTSpeechDataQueue.h"
#include "_LTSpeechTranslationDelegate-Protocol.h"
#include "_LTTranslationEngine-Protocol.h"

@class NSError, NSString, NSUUID, _LTTranslationContext;
@protocol OS_dispatch_queue, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}};

@interface _LTServerSpeechSession : NSObject<_LTSpeechTranslationDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _expectFinalLidResult;
  BOOL _sentFinalLidResult;
  BOOL _translationFinished;
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _speechActivityDetected;
  NSError *_translationError;
  _LTTranslationContext *_context;
  _LTSpeechDataQueue *_cache;
  _LTSpeechActivityDetector *_speechDetector;
}

@property (retain, nonatomic) NSObject<_LTTranslationEngine> *engine;
@property (retain, nonatomic) NSObject<_LTSpeechTranslationDelegate> *delegate;
@property (retain, nonatomic) _LTDSELFLoggingManager *selfLoggingManager;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) _LTLanguageDetector *languageDetector;
@property (readonly, nonatomic) _LTHybridEndpointer *endpointer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEngine:(id)engine delegate:(id)delegate selfLoggingManager:(id)manager;
- (void)startSpeechTranslationWithContext:(id)context;
- (void)_startSpeechTranslationWithContext:(id)context;
- (void)startTextToSpeechTranslationWithContext:(id)context text:(id)text;
- (void)addSpeechAudioData:(id)data;
- (void)_translateSpeechAudioData:(id)data;
- (void)endAudio;
- (void)cancel;
- (void)delegateTranslationDidFinishWithError:(id)error;
- (void)speechActivityDetected;
- (void)languageDetectionResult:(id)result;
- (void)languageDetectionCompleted;
- (void)hybridEndpointerFoundEndpoint;
- (void)serverEndpointerFeatures:(id)features locale:(id)locale;
- (void)speechRecognitionResult:(id)result;
- (void)translatorDidTranslate:(id)translate;
- (void)translationDidFinishWithError:(id)error;
@end

#endif /* _LTServerSpeechSession_h */