//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFPlayPodcastAction_h
#define WFPlayPodcastAction_h
@import Foundation;

#include "WFAction.h"
#include "WFActionSupportsContextualMediaPlayback-Protocol.h"

@class WFIntentExecutor;

@interface WFPlayPodcastAction : WFAction<WFActionSupportsContextualMediaPlayback>

@property (retain, nonatomic) WFIntentExecutor *executor;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (void)playQueue:(struct _MRSystemAppPlaybackQueue *)queue onPlayerPath:(void *)path completion:(id /* block */)completion;
- (id)getPlaybackURLForContentItem:(id)item;
- (id)contentNotFoundError;
- (id)genericPlayPodcastFailedError;
- (id)errorPlayingPodcast:(unsigned int)podcast;
- (id)localizedKeyParameterDisplayName;
- (id)serializedParametersForDonatedIntent:(id)intent allowDroppingUnconfigurableValues:(BOOL)values;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)key;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)key;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)key completionHandler:(id /* block */)handler;
- (id)serializedParametersForContextualActionMediaIntent:(id)intent;
- (BOOL)attemptContextualPlayback;
- (void)executePlayMediaIntent:(id)intent;
@end

#endif /* WFPlayPodcastAction_h */