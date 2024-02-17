//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceEditView_h
#define NTKFaceEditView_h
@import Foundation;

#include "UIView.h"
#include "NTKClockHardwareInput-Protocol.h"
#include "NTKColorSlider.h"
#include "NTKColorSliderDelegate-Protocol.h"
#include "NTKFace.h"
#include "NTKFaceEditPageView.h"
#include "NTKFaceEditPageViewDelegate-Protocol.h"
#include "NTKFaceEditViewDelegate-Protocol.h"
#include "NTKFaceEditingTabsView.h"
#include "NTKFaceObserver-Protocol.h"
#include "NTKPigmentEditOptionArray.h"
#include "NTKScrollingColorPickerView.h"
#include "NTKScrollingColorPickerViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class CLKDevice, NSCache, NSMutableArray, NSString, PUICClientSideAnimation, PUICNavigationBar, PUICNotchProvider, UIButton, UIScrollView, UITapGestureRecognizer, UIView;
@protocol UIView<NTKKeylineView, UIViewController<NTKFaceViewCustomEditing;

@interface NTKFaceEditView : UIView<UIScrollViewDelegate, NTKFaceEditPageViewDelegate, NTKScrollingColorPickerViewDelegate, NTKColorSliderDelegate, NTKFaceObserver, NTKClockHardwareInput> {
  /* instance variables */
  CLKDevice *_device;
  UIScrollView *_pageScrollView;
  NSMutableArray *_pageViews;
  unsigned long long _currentPageIndex;
  UIScrollView *_crownInputScrollView;
  PUICClientSideAnimation *_crownIndicatorAnimation;
  BOOL _ignoringCrownInputScrolling;
  BOOL _shouldIdle;
  BOOL _canHandleHardwareEvents;
  long long _editModeForContentViewController;
  BOOL _inModalCustomEditing;
  UIButton *_customEditingCancelButton;
  UIView<NTKKeylineView> *_customEditingKeyline;
  UIView *_backgroundFillView;
  UIView *_addColorBackgroundFillView;
  PUICNotchProvider *_notchProvider;
  PUICClientSideAnimation *_fixupEditOptionScrollAnimation;
  NTKFaceEditPageView *_currentPageAnimating;
  BOOL _stopingBreathingAnimationInProgress;
  id /* block */ _pendingScheduledBreathingAnimationTask;
  NTKFace *_face;
  NTKFaceEditingTabsView *_tabsView;
  NTKScrollingColorPickerView *_colorPickerView;
  NTKPigmentEditOptionArray *_editingModifiedColors;
  NTKColorSlider *_colorSlider;
  PUICNavigationBar *_colorSliderBack;
  BOOL _colorSliderActive;
  UITapGestureRecognizer *_colorSliderDismissGesture;
  BOOL _ignoringFaceConfigChanged;
  BOOL _didCrownScrollForPageView;
  BOOL _isActive;
  NSCache *_screenBottomAlignedKeylineLabelFrameCache;
  NSCache *_colorSwatchImageCache;
}

@property (readonly, nonatomic) UIButton *customEditingConfirmButton;
@property (readonly, nonatomic) UIViewController<NTKFaceViewCustomEditing> *editingContentViewController;
@property (weak, nonatomic) NSObject<NTKFaceEditViewDelegate> *delegate;
@property (nonatomic) long long editMode;
@property (nonatomic) BOOL disableBreathingAnimationForComplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenBottomAlignedKeylineLabelFrameForText:(id)text;

/* instance methods */
- (id)initWithFace:(id)face;
- (void)didMoveToSuperview;
- (void)reloadColorPicker;
- (void)_reloadColorPickerForMode:(long long)mode;
- (void)_updateColorPickerForPresentationProgress:(double)progress;
- (id)editingColorForColor:(id)color;
- (void)updateSelectionForKeylineAtSlot:(id)slot selected:(BOOL)selected;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameAtSlot:(id)slot;
- (void)dealloc;
- (void)_scheduleBreathingAnimationForPage:(id)page;
- (void)_stopBreathingAnimationWithCrownInteraction:(BOOL)interaction;
- (void)restartBreathing;
- (void)setEditingContentViewController:(id)controller forEditMode:(long long)mode;
- (void)_enterModalCustomEditing;
- (void)_exitModalCustomEditing;
- (void)_confirmCustomEditing;
- (void)_cancelCustomEditing;
- (id)configurationForScrollingPickerView:(id)view;
- (id)scrollingPickerView:(id)view swatchForColor:(id)color;
- (void)scrollingPickerViewDidTap:(id)tap;
- (void)colorSlider:(id)slider valueChanged:(double)changed phase:(long long)phase;
- (void)_dismissColorSlider;
- (void)_applyLayout;
- (struct CGPoint { double x0; double x1; })pageOffsetFromCenter:(long long)center;
- (void)willActivate;
- (void)activate;
- (void)willDeactivate;
- (void)deactivateWithCompletion:(id /* block */)completion;
- (void)setBackgroundFillAlpha:(double)alpha;
- (void)setInfoText:(id)text forEditMode:(long long)mode;
- (void)addKeyline:(id)keyline forKey:(id)key tappable:(BOOL)tappable editMode:(long long)mode;
- (void)setSelectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forKey:(id)key editMode:(long long)mode;
- (void)setDeselectedKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forKey:(id)key editMode:(long long)mode;
- (void)setLabelText:(id)text forKey:(id)key editMode:(long long)mode;
- (void)setLabelAlignment:(unsigned long long)alignment forKey:(id)key editMode:(long long)mode;
- (void)setLabelActiveAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets forKey:(id)key editMode:(long long)mode;
- (void)selectKeylineForKey:(id)key editMode:(long long)mode;
- (void)removeAllKeylinesForEditMode:(long long)mode;
- (void)setForEditMode:(long long)mode numberOfLisaValues:(unsigned long long)values currentValue:(unsigned long long)value valueHeight:(double)height;
- (void)setForEditMode:(long long)mode numberOfLisaValues:(unsigned long long)values currentValue:(unsigned long long)value valueHeight:(double)height animated:(BOOL)animated detentType:(unsigned long long)type;
- (void)setForEditMode:(long long)mode gestureDidStopHandler:(id /* block */)handler;
- (void)setForEditMode:(long long)mode gestureDidScrollHandler:(id /* block */)handler;
- (void)setForEditMode:(long long)mode gestureDiscreteScrollHandler:(id /* block */)handler;
- (void)faceConfigurationDidChange:(id)change;
- (void)face:(id)face didChangeOptionsForEditMode:(long long)mode;
- (void)_updateScrollingOffsetForFaceUpdateForFace:(id)face editMode:(long long)mode;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)_updateColorPickerOffsetForEditMode:(long long)mode;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)_scrollViewDidStop:(id)stop;
- (void)_clampLisaValueForPageView:(id)view;
- (void)_reachedFraction:(double)fraction fromPageIndex:(unsigned long long)index toPageIndex:(unsigned long long)index;
- (void)applyTransformForCurrentPageView:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })view;
- (void)applyTransitionFraction:(double)fraction fromEditMode:(long long)mode toEditMode:(long long)mode;
- (BOOL)_shouldHideCrownIndicatorForEditMode:(long long)mode;
- (void)applyEditorPresentationProgress:(double)progress toEditMode:(long long)mode scaled:(BOOL)scaled;
- (void)applyEditorPresentationProgress:(double)progress fromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toEditMode:(long long)mode scaled:(BOOL)scaled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cachedScreenBottomAlignedKeylineLabelFrameForText:(id)text;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabsViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })colorPickerFrame;
- (void)_enterColorSliderEditingAnimated:(BOOL)animated;
- (void)_exitColorSliderEditingAnimated:(BOOL)animated;
- (void)_enableCrownInput;
- (void)_disableCrownInput;
- (void)_disableCrownInputAnimated:(BOOL)animated;
- (BOOL)_isInEditModeForEditingContentViewController;
- (void)_notifyPageViewDidStop:(id)stop;
- (BOOL)_wheelChangedWithEvent:(id)event;
- (BOOL)_handlePhysicalButton:(unsigned long long)button event:(unsigned long long)event;
- (BOOL)isTransitioningBetweenEditPages;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageView:(id)view cachedScreenBottomKeylineLabelFrameForText:(id)text;
- (void)pageView:(id)view keylineDidBreathe:(double)breathe forKey:(id)key;
- (void)pageView:(id)view keylineDidRubberBand:(double)band forKey:(id)key;
- (void)pageView:(id)view didTapKeylineForKey:(id)key;
- (void)pageViewDidTapAddColors:(id)colors;
- (void)_setCurrentPageIndex:(unsigned long long)index;
- (BOOL)_usesColorPickerForEditMode:(long long)mode;
- (id)_pageViewForEditMode:(long long)mode;
- (id)_currentPage;
- (double)_sequencerEndForPage:(id)page;
- (double)_sequencerOffsetForPage:(id)page;
- (double)_sequencerScrollViewHeightForPage:(id)page;
- (double)_currentSequencerValue;
- (void)_updateSequencerForEditMode:(long long)mode;
- (double)_crownScreenSpaceMultiplierForEditMode:(long long)mode;
- (void)_performIgnoringCrownInputScrolling:(id /* block */)scrolling;
- (void)_createAddColorFillBackgroundIfNecessary;
@end

#endif /* NTKFaceEditView_h */