//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVAdminService_Protocol_h
#define CKVAdminService_Protocol_h
@import Foundation;

@protocol CKVAdminService 
/* instance methods */
- (void)startEventSimulation:(BOOL)simulation completion:(id /* block */)completion;
- (void)handleTask:(unsigned short)task reason:(unsigned short)reason completion:(id /* block */)completion;
- (void)finishEventSimulation:(id /* block */)simulation;
- (void)triggerMigration:(BOOL)migration completeAfterTrigger:(BOOL)trigger completion:(id /* block */)completion;
- (void)triggerMaintenance:(id /* block */)maintenance;
- (void)fetchLocalItemsBatchWithSize:(unsigned long long)size offset:(unsigned long long)offset usingBlock:(id /* block */)block;
- (void)captureVocabularySnapshot:(id)snapshot completion:(id /* block */)completion;
- (void)findProfileSnapshotsNearDate:(id)date completion:(id /* block */)completion;
- (void)rebuildSpeechProfileForUserId:(id)id completion:(id /* block */)completion;
- (void)deleteAllItemsWithUserId:(id)id completion:(id /* block */)completion;
- (void)deleteAllItemsWithUserId:(id)id deviceId:(id)id completion:(id /* block */)completion;
- (void)beginEvaluation:(id)evaluation clean:(BOOL)clean completion:(id /* block */)completion;
- (void)endEvaluation:(id /* block */)evaluation;
@end

#endif /* CKVAdminService_Protocol_h */