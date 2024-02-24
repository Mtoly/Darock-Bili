//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef SDPMini_h
#define SDPMini_h
@import Foundation;

@class BOOL *, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface SDPMini : NSObject {
  /* instance variables */
  NSString *_sdpUsername;
  NSMutableDictionary *_audioParameters;
  NSNumber *videoRTPID;
  NSString *basebandCodecType;
  NSNumber *basebandCodecSampleRate;
  NSMutableDictionary *_mediaLines;
}

@property (retain, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSMutableArray *audioPayloads;
@property (readonly, nonatomic) NSMutableArray *secondaryAudioPayloads;
@property (retain, nonatomic) NSString *sessionIP;
@property (retain, nonatomic) NSNumber *audioRTPPort;
@property (retain, nonatomic) NSNumber *audioRTCPPort;
@property (retain, nonatomic) NSNumber *audioRTPID;
@property (nonatomic) BOOL allowRTCPFB;
@property (retain, nonatomic) NSNumber *answerBandwidth;
@property (retain, nonatomic) NSNumber *maxBandwidth;
@property (nonatomic) BOOL allowsDynamicMaxBitrate;
@property (retain, nonatomic) NSDictionary *featureListDict;
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation;
@property (retain, nonatomic) NSNumber *aacBlockSize;
@property (retain, nonatomic) NSNumber *audioUnitModel;
@property (nonatomic) BOOL allowAudioRecording;

/* class methods */
+ (BOOL)setPayload:(int)payload mediaLine:(id)line;

/* instance methods */
- (int)rulesFramerate:(int)framerate;
- (void)rulesImageSizeForExternalPayload:(int)payload pWidth:(int *)width pHeight:(int *)height;
- (void)setUseSbr:(BOOL)sbr blockSize:(int)size forAACFormat:(int)aacformat;
- (BOOL)getUseSbr:(BOOL *)sbr blockSize:(int *)size forAACFormat:(int)aacformat;
- (void)setVideoRTCPFB:(BOOL)rtcpfb useNACK:(BOOL)nack;
- (id)parseIP:(id)ip;
- (void)parseBandwidth:(id)bandwidth;
- (void)parseMediaLine:(id)line;
- (void)parseSDPFromString:(id)string;
- (id)parseRTPID:(id)rtpid;
- (id)parseRTCPPort:(id)rtcpport;
- (void)parseSessionAttributes:(id)attributes;
- (void)parseAudioFormatAttribute:(id)attribute;
- (void)parseAudioMediaAttributes:(id)attributes;
- (id)composeBandwidthString;
- (id)composeSessionString;
- (id)composeFLSString;
- (id)composeAudioFMTPForPayload:(id)payload;
- (id)composeAudioString;
- (id)SDPUsername;
- (id)init;
- (id)initWithString:(id)string;
- (void)dealloc;
- (id)getMediaLineForType:(int)type;
- (void)addMediaLine:(id)line mediaType:(int)type;
- (id)mediaTypeToString:(int)string;
- (BOOL)setVideoPayloads:(int *)payloads count:(int)count;
- (id)toStringWithVideoEnabled:(BOOL)enabled;
- (void)setBasebandCodecType:(id)type sampleRate:(id)rate;
- (BOOL)getBasebandCodecType:(id *)type sampleRate:(id *)rate;
- (void)createVideoImageAttr:(int)attr direction:(int)direction dimensions:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)dimensions count:(int)count;
- (void)getNegotiatedResolutionForPayload:(int)payload forInterface:(int)interface withRule:(id)rule direction:(int)direction result:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)result remoteSupportsHD:(BOOL)hd screenSharing:(BOOL)sharing;
@end

#endif /* SDPMini_h */