//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCCoreAudio_AudioUnitMockCallbacks_Protocol_h
#define VCCoreAudio_AudioUnitMockCallbacks_Protocol_h
@import Foundation;

@protocol VCCoreAudio_AudioUnitMockCallbacks 
/* instance methods */
- (BOOL)setProperty:(struct OpaqueAudioComponentInstance *)property inID:(unsigned int)id inScope:(unsigned int)scope inElement:(unsigned int)element inData:(const void *)data inDataSize:(unsigned int)size outStatus:(int *)status;
- (BOOL)getProperty:(struct OpaqueAudioComponentInstance *)property inID:(unsigned int)id inScope:(unsigned int)scope inElement:(unsigned int)element outData:(void *)data ioDataSize:(unsigned int *)size outStatus:(int *)status;
- (BOOL)render:(struct OpaqueAudioComponentInstance *)render ioActionFlags:(unsigned int *)flags inTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)stamp inOutputBusNumber:(unsigned int)number inNumberFrames:(unsigned int)frames ioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)data outStatus:(int *)status;
- (BOOL)complexRender:(struct OpaqueAudioComponentInstance *)render ioActionFlags:(unsigned int *)flags inTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)stamp inOutputBusNumber:(unsigned int)number inNumberOfPackets:(unsigned int)packets outNumberOfPackets:(unsigned int *)packets outPacketDescriptions:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)descriptions ioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void * x2; } x[1] } *)data outMetadata:(void *)metadata outMetadataByteSize:(unsigned int *)size outStatus:(int *)status;
- (BOOL)initialize:(struct OpaqueAudioComponentInstance *)initialize outStatus:(int *)status;
- (BOOL)uninitialize:(struct OpaqueAudioComponentInstance *)uninitialize outStatus:(int *)status;
- (BOOL)outputUnitStart:(struct OpaqueAudioComponentInstance *)start outStatus:(int *)status;
- (BOOL)outputUnitStop:(struct OpaqueAudioComponentInstance *)stop outStatus:(int *)status;
@end

#endif /* VCCoreAudio_AudioUnitMockCallbacks_Protocol_h */