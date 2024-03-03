//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSBehaviorRuleRankingUtilities_h
#define _PSBehaviorRuleRankingUtilities_h
@import Foundation;

@interface _PSBehaviorRuleRankingUtilities : NSObject
/* class methods */
+ (id)getTrialCompiledMLModelPath;
+ (id)getTrialCompiledMLModelPathForContactRanker;
+ (id)getTrialCompiledAdaptableMLModelPath;
+ (id)getAdaptedCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPathForContactRanker;
+ (id)getDeployedAdaptableCompiledMLModelPath;
+ (id)getIntermediateAdaptableCompiledMLModel;
+ (id)getAdaptedModelRecipeVersionFilePath;
+ (id)getArchivedDefaultAdaptableModelPath;
+ (id)getZippedDefaultAdaptableModelPath;
+ (id)loadAdaptableModelConfig:(id)config;
+ (id)loadMLModelConfigurationWithConfigDict:(id)dict;
+ (id)loadMLModel:(id)mlmodel modelConfig:(id)config;
+ (id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)array;
+ (id)reformatFeaturesInFeatureDictArray:(id)array;
+ (id)predictWithMLModel:(id)mlmodel featureDictArray:(id)array;
+ (id)batchPredictWithMLModel:(id)mlmodel featureArrayDict:(id)dict;
+ (id)batchPredictWithAdaptedMLModel:(id)mlmodel psConfigForAdaptableModel:(id)model featurizedRules:(id)rules;
+ (id)batchPredictWithAdaptedMLModel:(id)mlmodel psConfigForAdaptableModel:(id)model featureDictArray:(id)array;
+ (BOOL)removeFolderAtPath:(id)path;
+ (BOOL)copyFileFromURL:(id)url toURL:(id)url;
+ (id)compileMLModelAtPath:(id)path;
+ (id)unzipFileWithPath:(id)path toFileName:(id)name toFolderPath:(id)path;
+ (BOOL)copyZippedAdaptableModel:(id)model;
+ (BOOL)loadDeployedAdaptableModelUnderDirectory:(id)directory;
@end

#endif /* _PSBehaviorRuleRankingUtilities_h */