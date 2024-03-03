//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAnalyticsSyndicationLibraryCounters_h
#define PLAnalyticsSyndicationLibraryCounters_h
@import Foundation;

@interface PLAnalyticsSyndicationLibraryCounters : NSObject {
  /* instance variables */
  atomic unsigned long long assetInConversationCount;
  atomic unsigned long long assetNotInConversationCount;
  atomic unsigned long long guestAssetCount;
  atomic unsigned long long nonGuestAssetCount;
  atomic unsigned long long conversationCount;
  atomic unsigned long long savedToLibraryCount;
  atomic unsigned long long messagesAssetCount;
  atomic unsigned long long notesAssetCount;
  atomic unsigned long long filesAssetCount;
}

@end

#endif /* PLAnalyticsSyndicationLibraryCounters_h */