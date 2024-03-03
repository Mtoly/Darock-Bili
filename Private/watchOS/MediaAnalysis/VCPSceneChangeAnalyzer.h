//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPSceneChangeAnalyzer_h
#define VCPSceneChangeAnalyzer_h
@import Foundation;

#include "VCPVideoAnalyzer.h"
#include "VCPSceneChangeSegment.h"

@class NSMutableArray;
@protocol {FrameBuffer="frame_count_"i"buffer_"[35{Frame="frame_idx_"i"timestamp_"{?="value"q"timescale"i"flags"I"epoch"q}"duration_"{?="value"q"timescale"i"flags"I"epoch"q}"ave_motion_"{Translation="x_"f"y_"f"z_"f}"org_motion_"{Translation="x_"f"y_"f"z_"f}"quality_score_"f"distortion_"Q"distortion_norm_"f"motion_change_"{Translation="x_"f"y_"f"z_"f}"compressed_bytes_"I"blur_"B"acc_var_"{Translation="x_"f"y_"f"z_"f}"texture_"f"motion_result_"{MotionResult="significant_values_"[6f]"confidence_"[6f]"fine_action_score_"f"action_score_"f"track_score_"f"rotation_angle_"f"subtle_motion_score_"f"is_stable_"B"action_blocks_"i"action_motion_"f"valid_mb_"B"valid_submb_"B"support_size_"i"residual_var_"f"gmv_"[2f]"motion_param_"{array<float, 6UL>="__elems_"[6f]}"motion_param_diff_"{array<float, 6UL>="__elems_"[6f]}"duration_"{?="value"q"timescale"i"flags"I"epoch"q}"scene_delta_"f"scene_delta_ratio_"f"objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}"detect_objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}"imported_objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}}"flow_"^f"interestingness_"f"obstruction_"f"colorfulness_score_"f"histogram_"{Histogram="extremities_"f"overexposes_"f"histogram_"[3^i]"moments_hist_"[2^i]}}]};

@interface VCPSceneChangeAnalyzer : VCPVideoAnalyzer {
  /* instance variables */
  float _sceneDeltaBuffer[10];
  struct FrameBuffer { int frame_count_; i]}} * x[35{Frame="frame_idx_"i"timestamp_"{?="value"q"timescale"i"flags"I"epoch"q}"duration_"{?="value"q"timescale"i"flags"I"epoch"q}"ave_motion_"{Translation="x_"f"y_"f"z_"f}"org_motion_"{Translation="x_"f"y_"f"z_"f}"quality_score_"f"distortion_"Q"distortion_norm_"f"motion_change_"{Translation="x_"f"y_"f"z_"f}"compressed_bytes_"I"blur_"B"acc_var_"{Translation="x_"f"y_"f"z_"f}"texture_"f"motion_result_"{MotionResult="significant_values_"[6f]"confidence_"[6f]"fine_action_score_"f"action_score_"f"track_score_"f"rotation_angle_"f"subtle_motion_score_"f"is_stable_"B"action_blocks_"i"action_motion_"f"valid_mb_"B"valid_submb_"B"support_size_"i"residual_var_"f"gmv_"[2f]"motion_param_"{array<float, 6UL>="__elems_"[6f]}"motion_param_diff_"{array<float, 6UL>="__elems_"[6f]}"duration_"{?="value"q"timescale"i"flags"I"epoch"q}"scene_delta_"f"scene_delta_ratio_"f"objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}"detect_objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}"imported_objects_"{Vector<ma::Object *>="vector_"^{__CFArray}}}"flow_"^f"interestingness_"f"obstruction_"f"colorfulness_score_"f"histogram_"{Histogram="extremities_"f"overexposes_"f"histogram_"[3^i]"moments_hist_"[2] buffer_; } _frameBuffer;
  VCPSceneChangeSegment *_activeSegment;
  NSMutableArray *_sceneSegments;
  BOOL _verbose;
  BOOL _firstFrame;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _frameTimeRange;
  BOOL _currentStatus;
  BOOL _isSegmentPoint;
}

/* instance methods */
- (id)init;
- (void)ComputeSceneDelta:(void *)delta;
- (int)analyzeFrame:(struct __CVBuffer *)frame withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration flags:(unsigned long long *)flags;
- (void)PrintSegments;
- (BOOL)decideLensSwitchPoint:(void *)point;
- (int)finalizeAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pass;
- (id)results;
- (BOOL)isSegmentPoint;
@end

#endif /* VCPSceneChangeAnalyzer_h */