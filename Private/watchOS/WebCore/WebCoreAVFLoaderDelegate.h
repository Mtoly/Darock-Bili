//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebCoreAVFLoaderDelegate_h
#define WebCoreAVFLoaderDelegate_h
@import Foundation;

#include "AVAssetResourceLoaderDelegate-Protocol.h"

@class NSString;
@protocol {WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl>="m_impl"{RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>>="m_ptr"^{DefaultWeakPtrImpl}}};

@interface WebCoreAVFLoaderDelegate : NSObject<AVAssetResourceLoaderDelegate> {
  /* instance variables */
  struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPlayer:(void *)player;
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (BOOL)resourceLoader:(id)loader shouldWaitForResponseToAuthenticationChallenge:(id)challenge;
- (void)resourceLoader:(id)loader didCancelLoadingRequest:(id)request;
@end

#endif /* WebCoreAVFLoaderDelegate_h */