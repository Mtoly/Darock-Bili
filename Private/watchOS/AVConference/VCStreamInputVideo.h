//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCStreamInputVideo_h
#define VCStreamInputVideo_h
@import Foundation;

#include "VCStreamInput.h"
#include "VCVideoCapture.h"

@interface VCStreamInputVideo : VCStreamInput {
  /* instance variables */
  VCVideoCapture *_videoCapture;
}

/* instance methods */
- (id)initWithStreamInputID:(id)id format:(struct opaqueCMFormatDescription *)format delegate:(id)delegate delegateQueue:(id)queue remoteQueue:(id)queue;
- (void)dealloc;
- (void)invalidate;
- (unsigned int)addSink:(id)sink;
- (unsigned int)removeSink:(id)sink;
@end

#endif /* VCStreamInputVideo_h */