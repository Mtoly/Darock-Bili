//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaControlInfo_h
#define VCMediaControlInfo_h
@import Foundation;

@interface VCMediaControlInfo : NSObject {
  /* instance variables */
  unsigned short _bitmap;
  id _delegate;
  struct tagVCMediaControlInfoRealtimeDelegateProtocolVTable { undefined *disposeControlInfo; } _delegateVTable;
  struct tagVCMediaControlVTableC { undefined *serializedSize; undefined *serialize; } _vtableC;
  atomic unsigned int _controlInfoInUseCounter;
}

@property (readonly) unsigned long long serializedSize;
@property unsigned char version;
@property unsigned char fecFeedbackVersion;

/* instance methods */
- (id)init;
- (id)initWithBuffer:(const char *)buffer length:(unsigned long long)length optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; unsigned char x10; } *)info version:(unsigned char)version;
- (int)configureWithBuffer:(const char *)buffer length:(unsigned long long)length optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; unsigned char x10; } *)info;
- (int)setInfo:(void *)info size:(unsigned long long)size type:(unsigned int)type;
- (int)setInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned short x12; unsigned short x13; } *)unserialized type:(unsigned int)type;
- (BOOL)hasInfoType:(unsigned int)type;
- (int)getInfo:(void *)info bufferLength:(unsigned long long)length infoSize:(unsigned long long *)size type:(unsigned int)type;
- (int)getInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned short x12; unsigned short x13; } *)unserialized type:(unsigned int)type;
- (int)serializeToBuffer:(char *)buffer bufferLength:(unsigned long long)length blobLength:(unsigned long long *)length;
@end

#endif /* VCMediaControlInfo_h */