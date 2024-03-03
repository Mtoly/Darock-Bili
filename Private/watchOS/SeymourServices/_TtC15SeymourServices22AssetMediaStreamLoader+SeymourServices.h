//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef _TtC15SeymourServices22AssetMediaStreamLoader_SeymourServices_h
#define _TtC15SeymourServices22AssetMediaStreamLoader_SeymourServices_h
@import Foundation;

@interface SeymourServices.AssetMediaStreamLoader (SeymourServices) <AVAssetDownloadDelegate>
/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession aggregateAssetDownloadTask:(id)task willDownloadToURL:(id)url;
- (void)URLSession:(id)urlsession aggregateAssetDownloadTask:(id)task didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range totalTimeRangesLoaded:(id)loaded timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })load forMediaSelection:(id)selection;
@end

#endif /* _TtC15SeymourServices22AssetMediaStreamLoader_SeymourServices_h */