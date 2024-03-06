//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACAudioRoute_h
#define NACAudioRoute_h
@import Foundation;

@class NSString;

@interface NACAudioRoute : NSObject

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *routeName;
@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic) BOOL picked;

/* class methods */
+ (id)audioRouteWithMPAVRoute:(id)mpavroute;
+ (id)audioRouteFromBuffer:(id)buffer;
+ (id)audioRoutesFromBuffers:(id)buffers;
+ (id)buffersFromAudioRoutes:(id)routes;
+ (long long)_routeTypeFromMPAVRoute:(id)mpavroute;
+ (int)_routeBufferTypeFromRouteType:(long long)type;
+ (long long)_routeTypeFromRouteBufferType:(int)type;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAudioRoute:(id)route;
- (id)description;
- (id)initWithMPAVRoute:(id)mpavroute;
- (id)buffer;
- (BOOL)isPicked;
@end

#endif /* NACAudioRoute_h */