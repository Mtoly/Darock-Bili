//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResourceManifestServerProxy_Protocol_h
#define GEOResourceManifestServerProxy_Protocol_h
@import Foundation;

@protocol GEOResourceManifestServerProxy <NSObject>

@property (weak, nonatomic) NSObject<GEOResourceManifestServerProxyDelegate> *delegate;
@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;

/* instance methods */
- (id)initWithDelegate:(id)delegate configuration:(id)configuration;
- (id)serverQueue;
- (void)openConnection;
- (void)closeConnection;
- (id)authToken;
- (id)configuration;
- (void)setManifestToken:(id)token completionHandler:(id /* block */)handler;
- (void)updateIfNecessary:(id /* block */)necessary;
- (void)forceUpdate:(long long)update completionHandler:(id /* block */)handler;
- (void)cancelCurrentManifestUpdate;
- (void)performOpportunisticResourceLoading;
- (void)activateResourceScale:(int)scale;
- (void)deactivateResourceScale:(int)scale;
- (void)activateResourceScenario:(int)scenario;
- (void)deactivateResourceScenario:(int)scenario;
- (id)updateProgress;
- (unsigned int)maximumZoomLevelForStyle:(int)style scale:(int)scale outSize:(int *)size;
- (void)setActiveTileGroupIdentifier:(id)identifier;
- (void)setActiveTileGroupIdentifier:(id)identifier updateType:(long long)type completionHandler:(id /* block */)handler;
- (void)resetActiveTileGroup;
- (void)getResourceManifestWithHandler:(id /* block */)handler;
@end

#endif /* GEOResourceManifestServerProxy_Protocol_h */