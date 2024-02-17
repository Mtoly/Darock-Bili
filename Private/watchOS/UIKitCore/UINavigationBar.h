//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UINavigationBar_h
#define UINavigationBar_h
@import Foundation;

#include "UIView.h"
#include "NSCoding-Protocol.h"
#include "UIAccessibilityHUDGestureDelegate-Protocol.h"
#include "UIAccessibilityHUDGestureManager.h"
#include "UIBarButtonItem.h"
#include "UIBarPositioning-Protocol.h"
#include "UIColor.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIImage.h"
#include "UILayoutGuide.h"
#include "UINavigationBarAppearance.h"
#include "UINavigationBarDelegate-Protocol.h"
#include "UINavigationItem.h"
#include "UIView.h"
#include "_UIBarPositioningInternal-Protocol.h"
#include "_UINavigationBarAppearanceStorage.h"
#include "_UINavigationBarDelegatePrivate-Protocol.h"
#include "_UINavigationBarItemStack.h"
#include "_UINavigationBarVisualProvider.h"
#include "_UINavigationBarVisualStyle.h"
#include "_UIViewControllerTransitionContext.h"

@class BOOL *, NSArray, NSDictionary, NSString;

@interface UINavigationBar : UIView<UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, NSCoding, UIBarPositioning> {
  /* instance variables */
  _UINavigationBarItemStack *_stack;
  _UINavigationBarAppearanceStorage *_appearanceStorage;
  long long _animationDisabledCount;
  long long _barTranslucence;
  _UIViewControllerTransitionContext *_navControllerAnimatingContext;
  _UINavigationBarVisualProvider *_visualProvider;
  _UINavigationBarVisualStyle *_visualStyle;
  UIAccessibilityHUDGestureManager *_axHUDGestureManager;
  struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _resolvedLayoutMargins;
  int _currentPushTransition;
  struct { unsigned int x :1 forceFullHeightInLandscape; unsigned int x :1 isLocked; unsigned int x :1 isIgnoringLock; unsigned int x :1 layoutInProgress; unsigned int x :1 delegateRespondsToFreezeLayoutForDismissalSelector; unsigned int x :1 delegateRespondsToInterfaceOrientationWindowSelector; unsigned int x :1 delegateSupportsScrollEdgeTransitionProgress; unsigned int x :1 decodedUnlockedWithNavigationControllerDelegate; unsigned int x :1 lostNavigationControllerDelegate; unsigned int x :1 didSetAppearanceProperty; } _navbarFlags;
  double _requestedMaxBackButtonWidth;
  UIColor *_accessibilityButtonBackgroundTintColor;
}

@property (nonatomic) double _backIndicatorLeftMargin;
@property (readonly, nonatomic) long long _barTranslucence;
@property (nonatomic) double _overrideBackgroundExtension;
@property (readonly, nonatomic) double _heightForRestoringFromCancelledTransition;
@property (nonatomic) BOOL _deferShadowToSearchBar;
@property (readonly, nonatomic) NSArray *_animationIds;
@property (readonly, nonatomic) BOOL _startedAnimationTracking;
@property (readonly, nonatomic) _UINavigationBarItemStack *_stack;
@property (readonly, nonatomic) double _heightIncludingBackground;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic) BOOL _forceScrollEdgeAppearance;
@property (readonly, nonatomic) BOOL _hasVariableHeight;
@property (readonly, nonatomic) BOOL _hasFixedMaximumHeight;
@property (readonly, nonatomic) BOOL _scrollEdgeAppearanceHasChromelessBehavior;
@property (retain, nonatomic) UIBarButtonItem *_staticNavBarButtonItem;
@property (readonly, nonatomic) BOOL _contentViewHidden;
@property (nonatomic) BOOL _shouldFadeStaticNavBarButton;
@property (nonatomic) BOOL _staticNavBarButtonLingers;
@property (readonly, nonatomic) BOOL _animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
@property (readonly, nonatomic) double _navItemContentLayoutGuideAnimationDistance;
@property (nonatomic) BOOL _decodedUnlockedWithNavigationControllerDelegate;
@property (readonly, nonatomic) BOOL _lostNavigationControllerDelegate;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (nonatomic) long long requestedContentSize;
@property (readonly, nonatomic) long long currentContentSize;
@property (readonly, nonatomic) UILayoutGuide *_userContentGuide;
@property (readonly, nonatomic) int state;
@property (nonatomic) BOOL locked;
@property (readonly, nonatomic) _UINavigationItemButtonView *currentBackButton;
@property (readonly, nonatomic) UIView *currentLeftView;
@property (readonly, nonatomic) UIView *currentRightView;
@property (readonly, nonatomic) BOOL isMinibar;
@property (nonatomic) BOOL forceFullHeightInLandscape;
@property (nonatomic) BOOL _useInlineBackgroundHeightWhenLarge;
@property (nonatomic) double _backgroundOpacity;
@property (nonatomic) double _titleOpacity;
@property (nonatomic) BOOL alwaysUseDefaultMetrics;
@property (nonatomic) BOOL _hidesShadow;
@property (retain, nonatomic) UIView *_backgroundView;
@property (nonatomic) double _shadowAlpha;
@property (nonatomic) BOOL _disableBlurTinting;
@property (readonly, retain, nonatomic) NSString *_backdropViewLayerGroupName;
@property (nonatomic) double _requestedMaxBackButtonWidth;
@property (retain, nonatomic) UIColor *_accessibilityButtonBackgroundTintColor;
@property (nonatomic) long long barStyle;
@property (weak, nonatomic) NSObject<UINavigationBarDelegate> *delegate;
@property (nonatomic) BOOL translucent;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL prefersLargeTitles;
@property (readonly, nonatomic) long long currentNSToolbarSection;
@property (readonly, nonatomic) unsigned long long behavioralStyle;
@property (nonatomic) unsigned long long preferredBehavioralStyle;
@property (retain, @dynamic, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) UIImage *shadowImage;
@property (copy, nonatomic) NSDictionary *titleTextAttributes;
@property (copy, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (retain, nonatomic) UIImage *backIndicatorImage;
@property (retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property (copy, nonatomic) UINavigationBarAppearance *standardAppearance;
@property (copy, nonatomic) UINavigationBarAppearance *compactAppearance;
@property (copy, nonatomic) UINavigationBarAppearance *scrollEdgeAppearance;
@property (copy, nonatomic) UINavigationBarAppearance *compactScrollEdgeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long barPosition;

/* class methods */
+ (BOOL)_forceLegacyVisualProvider;
+ (id)_statusBarBaseTintColorForStyle:(long long)style translucent:(BOOL)translucent tintColor:(id)color backgroundImage:(id)image viewSize:(struct CGSize { double x0; double x1; })size;
+ (id)_statusBarBaseTintColorForStyle:(long long)style translucent:(BOOL)translucent tintColor:(id)color;
+ (id)_defaultVisualStyleForOrientation:(long long)orientation;
+ (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)orientation;
+ (struct CGSize { double x0; double x1; })defaultSizeWithPromptForOrientation:(long long)orientation;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGSize { double x0; double x1; })defaultSizeWithPrompt;
+ (id)defaultPromptFont;
+ (double)defaultAnimationDuration;
+ (void)_initializeForIdiom:(long long)idiom;
+ (BOOL)_supportsCanvasView;
+ (BOOL)_requiresModernVisualProvider;
+ (Class)_visualProviderClassForNavigationBar:(id)bar;
+ (id)_visualProviderForNavigationBar:(id)bar;
+ (void)_setUseCustomBackButtonAction:(BOOL)action;
+ (BOOL)_useCustomBackButtonAction;

/* instance methods */
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)attribute;
- (double)_autolayoutSpacingAtEdge:(int)edge forAttribute:(long long)attribute inContainer:(id)container isGuide:(BOOL)guide;
- (double)_defaultAutolayoutSpacing;
- (void)_uikit_applyValueFromTraitStorage:(id)storage forKeyPath:(id)path;
- (id)backButtonViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)_setDecodedUnlockedWithNavigationControllerDelegate:(BOOL)delegate;
- (BOOL)_wasDecodedUnlockedWithNavigationControllerDelegate;
- (void)_performUpdatesIgnoringLock:(id /* block */)lock;
- (void)_setUseInlineBackgroundHeightWhenLarge:(BOOL)large;
- (void)_setBackgroundOpacity:(double)opacity;
- (void)_setBackgroundView:(id)view;
- (void)_setShadowAlpha:(double)alpha;
- (void)_setTitleOpacity:(double)opacity;
- (void)_setDisableBlurTinting:(BOOL)tinting;
- (void)_applySPIAppearanceToButtons;
- (void)_setBackgroundImage:(id)image mini:(id)mini;
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned long long)states;
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned long long)states;
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color forState:(unsigned long long)state;
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color;
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color;
- (void)_setButtonTextShadowOffset:(struct CGSize { double x0; double x1; })offset;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;
- (id)_backgroundViewForPalette:(id)palette;
- (void)_palette:(id)_palette isAttaching:(BOOL)attaching didComplete:(BOOL)complete;
- (BOOL)_isAlwaysHidden;
- (id)_effectiveDelegate;
- (BOOL)_effectiveDelegateSupportsScrollEdgeTransitionProgress;
- (void)tintColorDidChange;
- (void)_setBackdropViewLayerGroupName:(id)name;
- (void)_setBackIndicatorLeftMargin:(double)margin;
- (double)_effectiveBackIndicatorLeftMargin;
- (long long)_itemStackCount;
- (void)setSemanticContentAttribute:(long long)attribute;
- (void)_setAccessibilityButtonBackgroundTintColor:(id)color;
- (void)_configurePaletteConstraintsIfNecessary;
- (void)_updatePaletteBackgroundIfNecessary;
- (void)_installDefaultAppearance;
- (void)_upgradeAppearanceAPI;
- (void)_updateAppearancesForNewVisualProvider;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)color;
- (void)setBackgroundImage:(id)image forBarMetrics:(long long)metrics;
- (id)backgroundImageForBarMetrics:(long long)metrics;
- (void)_sendNavigationBarDidChangeStyle;
- (void)setBackgroundImage:(id)image forBarPosition:(long long)position barMetrics:(long long)metrics;
- (id)backgroundImageForBarPosition:(long long)position barMetrics:(long long)metrics;
- (void)traitCollectionDidChange:(id)change;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; id x2; BOOL x3; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; } x4; } *)internal;
- (id)_traitCollectionForChildEnvironment:(id)environment;
- (void)setTitleVerticalPositionAdjustment:(double)adjustment forBarMetrics:(long long)metrics;
- (double)titleVerticalPositionAdjustmentForBarMetrics:(long long)metrics;
- (void)_setHidesShadow:(BOOL)shadow;
- (void)_setDeferShadowToSearchBar:(BOOL)bar;
- (long long)_activeBarMetrics;
- (void)_setAlwaysUseDefaultMetrics:(BOOL)metrics;
- (id)_appearanceStorage;
- (id)_currentVisualStyle;
- (double)defaultBackButtonAlignmentHeight;
- (double)defaultHeightForMetrics:(long long)metrics;
- (double)defaultHeight;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)orientation;
- (void)_updateOpacity;
- (BOOL)_subclassImplementsDrawRect;
- (void)_commonNavBarInit;
- (BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_setDecodedItems:(id)items;
- (void)_populateArchivedSubviews:(id)subviews;
- (BOOL)_shouldDecodeSubviews;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (BOOL)isLocked;
- (id)_defaultTitleFontFittingHeight:(double)height withScaleAdjustment:(double)adjustment;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontWithScaleAdjustment:(double)adjustment;
- (void)_customViewChangedForButtonItem:(id)item;
- (void)_pushNavigationItemUsingCurrentTransition:(id)transition;
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;
- (void)_pushNavigationItem:(id)item transition:(int)transition;
- (void)_beginInteractiveTransition;
- (void)_updateInteractiveTransition:(double)transition;
- (void)_finishInteractiveTransition:(double)transition completionSpeed:(double)speed completionCurve:(long long)curve;
- (void)_cancelInteractiveTransition:(double)transition completionSpeed:(double)speed completionCurve:(long long)curve;
- (long long)_currentBarStyle;
- (void)pushNavigationItem:(id)item;
- (void)_completePushOperationAnimated:(BOOL)animated transitionAssistant:(id)assistant;
- (void)_pushNavigationItem:(id)item transitionAssistant:(id)assistant;
- (id)popNavigationItemAnimated:(BOOL)animated;
- (void)_popNestedNavigationItem;
- (void)_pushNestedNavigationItem:(id)item;
- (id)_popNavigationItemWithTransition:(int)transition;
- (void)popNavigationItem;
- (void)_completePopOperationAnimated:(BOOL)animated transitionAssistant:(id)assistant;
- (void)_popNavigationItemWithTransitionAssistant:(id)assistant;
- (id)navigationItems;
- (void)setNavigationItems:(id)items;
- (int)_transitionForOldItems:(id)items newItems:(id)items;
- (void)setItems:(id)items animated:(BOOL)animated;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)items oldItems:(id)items;
- (void)_redisplayItems;
- (void)_displayItemsKeepingOwningNavigationBar:(id)bar;
- (void)_setItems:(id)items transition:(int)transition reset:(BOOL)reset resetOwningRelationship:(BOOL)relationship;
- (void)_setItems:(id)items transition:(int)transition;
- (void)_setItems:(id)items transition:(int)transition reset:(BOOL)reset;
- (void)_setItemsUpToItem:(id)item transition:(int)transition;
- (void)_addItem:(id)item withEffectiveDelegate:(id)delegate transition:(int)transition;
- (void)_addItems:(id)items withEffectiveDelegate:(id)delegate transition:(int)transition;
- (long long)_effectiveMetricsForMetrics:(long long)metrics;
- (long long)effectiveInterfaceOrientation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct { double x0; double x1; double x2; })_layoutHeightsForNavigationItem:(id)item fittingWidth:(double)width;
- (id)_restingHeights;
- (BOOL)_heightDependentOnOrientation;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_resolvedLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_resolvedLargeTitleMargins;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_resolvedSearchBarMargins;
- (void)layoutMarginsDidChange;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (void)_cancelInProgressPushOrPop;
- (void)_cancelInteractiveTransition;
- (id)navigationItemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_reenableUserInteraction;
- (void)_reenableUserInteractionWhenReadyWithContext:(id)context;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test forEvent:(struct __GSEvent *)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_evaluateBackIndicatorForHilightedState:(BOOL)state ofBarButtonItem:(id)item inNavigationItem:(id)item;
- (void)_setBackIndicatorPressed:(BOOL)pressed initialPress:(BOOL)press;
- (BOOL)_allowInteractionDuringTransition;
- (void)popForCarplayPressAtFakePoint:(struct CGPoint { double x0; double x1; })point;
- (id)animationFactory;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (BOOL)_shouldShowBackButtonForScreen:(id)screen;
- (void)_willMoveToWindow:(id)window;
- (void)_didMoveFromWindow:(id)window toWindow:(id)window;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;
- (void)addConstraint:(id)constraint;
- (void)removeConstraint:(id)constraint;
- (void)_updateNavigationBarItem:(id)item forStyle:(long long)style previousTintColor:(id)color;
- (void)didAddSubview:(id)subview;
- (void)didMoveToWindow;
- (void)_updateNavigationBarItemsForStyle:(long long)style previousTintColor:(id)color;
- (void)_updateNavigationBarItemsForStyle:(long long)style;
- (void)_setBarStyle:(long long)style;
- (long long)_statusBarStyle;
- (BOOL)isTranslucent;
- (id)buttonItemShadowColor;
- (id)buttonItemTextColor;
- (id)_titleTextColor;
- (void)_propagateEffectiveBarTintColorWithPreviousColor:(id)color;
- (id)_effectiveBarTintColor;
- (void)setRightMargin:(double)margin;
- (void)setTitleAutoresizesToFit:(BOOL)fit;
- (BOOL)titleAutoresizesToFit;
- (BOOL)_titleAutoresizesToFit;
- (void)_updateTitleViewIfTop:(id)top;
- (void)setTitleView:(id)view;
- (id)_currentLeftViews;
- (id)_currentRightViews;
- (id)_contentView;
- (BOOL)supportsRefreshControlHosting;
- (void)_setForceScrollEdgeAppearance:(BOOL)appearance;
- (void)_animateForSearchPresentation:(BOOL)presentation;
- (void)_presentHostedSearchWithTransitionCoordinator:(id)coordinator;
- (void)_dismissHostedSearchWithTransitionCoordinator:(id)coordinator;
- (void)_updateSearchBarForPlacementChangeIfApplicable;
- (void)_refreshSearchSuggestionsMenuAfterGeometryChange;
- (void)_deferSearchSuggestionsMenuRefreshForGeometryChange;
- (void)_searchScopeBarWillManuallyShowOrHideForNavigationItem:(id)item;
- (BOOL)_hasLegacyProvider;
- (BOOL)_hasBackButton;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)item;
- (id)_backButtonForBackItem:(id)item topItem:(id)item;
- (void)updatePrompt;
- (BOOL)_delegateWantsNavigationBarHidden;
- (void)_sendResizeForPromptChange;
- (void)_sendNavigationBarResize;
- (void)_prepareToAnimateTransition;
- (void)_sendNavigationBarAnimateTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_incomingNavigationBarFrame;
- (void)setPrompt:(id)prompt;
- (void)_setPrompt:(id)prompt;
- (id)prompt;
- (id)promptView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })promptBounds;
- (void)disableAnimation;
- (void)_disableAnimation;
- (void)enableAnimation;
- (void)_enableAnimation;
- (BOOL)isAnimationEnabled;
- (BOOL)_isAnimationEnabled;
- (long long)animationDisabledCount;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withStyle:(long long)style;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withStyle:(long long)style pressed:(BOOL)pressed;
- (void)showButtonsWithLeftTitle:(id)title rightTitle:(id)title;
- (void)showButtonsWithLeftTitle:(id)title rightTitle:(id)title leftBack:(BOOL)back;
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button withStyle:(int)style;
- (void)_updateContentIfTopItem:(id)item animated:(BOOL)animated;
- (void)_updateBackButtonVisibilityIfTop:(id)top animated:(BOOL)animated;
- (void)setButton:(int)button enabled:(BOOL)enabled;
- (id)createButtonWithContents:(id)contents width:(double)width barStyle:(long long)style buttonStyle:(int)style isRight:(BOOL)right;
- (void)hideButtons;
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;
- (void)_getBackgroundImage:(id *)image shouldRespectOversizedBackgroundImage:(BOOL *)image actualBarMetrics:(long long *)metrics actualBarPosition:(long long *)position;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_updatePalette:(id)palette;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)notification;
- (void)_didChangeFromIdiom:(long long)idiom onScreen:(id)screen traverseHierarchy:(BOOL)hierarchy;
- (BOOL)_suppressBackIndicator;
- (void)_updateBackIndicatorImage;
- (void)_setBarPosition:(long long)position;
- (long long)_barPosition;
- (void)_barSizeDidChange:(struct CGSize { double x0; double x1; })change;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setCenter:(struct CGPoint { double x0; double x1; })center;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })availableTitleArea;
- (id)_allViews;
- (void)_fadeAllViewsOut;
- (void)_fadeAllViewsIn;
- (void)setNeedsLayout;
- (void)layoutSublayersOfLayer:(id)layer;
- (void)updateConstraints;
- (void)_updateActiveBarMetrics;
- (void)layoutSubviews;
- (long long)_barStyle;
- (void)_setAutoAdjustTitle:(BOOL)title;
- (long long)_backgroundBackdropStyle;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)view;
- (void)_sendNavigationPopForBackBarButtonItem:(id)item;
- (void)_setStaticNavBarButtonItem:(id)item;
- (BOOL)_isContentViewHidden;
- (void)_setNeedsStaticNavBarButtonUpdate;
- (void)_setShouldFadeStaticNavBarButton:(BOOL)button;
- (void)_setStaticNavBarButtonLingers:(BOOL)lingers;
- (void)_beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (BOOL)_isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (BOOL)_updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)constant;
- (void)_endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
- (void)_removeContentClippingView;
- (void)_installContentClippingView:(id)view;
- (void)_refreshBackButtonMenu;
- (void)_beginRenamingIfPossible;
- (void)_beginRenaming;
- (void)_endRenaming;
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
- (void)rename:(id)rename;
- (id)_accessibility_navigationController;
- (void)_accessibility_navigationBarContentsDidChange;
- (id)_accessibility_contentsOfNavigationBar;
- (void)_accessibility_triggerBackButton;
- (void)_accessibility_triggerBarButtonItem:(id)item;
- (void)_setupAXHUDGestureIfNecessary;
- (BOOL)_accessibilityHUDGestureManager:(id)manager shouldBeginAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)_accessibilityHUDGestureManager:(id)manager HUDItemForPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)_accessibilityHUDGestureManager:(id)manager shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_accessibilityHUDGestureManager:(id)manager gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (id)_systemDefaultFocusGroupIdentifier;
- (id)preferredFocusedView;
- (BOOL)isTransparentFocusItem;
- (long long)_sceneDraggingBehaviorOnPan;
- (void)_setRequestedMaxBackButtonWidth:(double)width;
- (void)_setOverrideBackgroundExtension:(double)extension;
@end

#endif /* UINavigationBar_h */