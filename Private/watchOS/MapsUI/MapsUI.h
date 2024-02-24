//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MapsUI_h
#define MapsUI_h

#import "MUAMSResultCache.h"
#import "MUAMSResultProvider.h"
#import "MUAMSResultProviderFetchOptions.h"
#import "MUBlurView.h"
#import "MUCoordinateStringFormatter.h"
#import "MUCoordinateViewModel.h"
#import "MUETAHelper.h"
#import "MUFactoidViewModel.h"
#import "MULRUCache.h"
#import "MULabeledTokenViewModel.h"
#import "MUNanoPlaceViewController.h"
#import "MUNanoPlaceViewControllerConfiguration.h"
#import "MUPagingScrollContainerView.h"
#import "MUPagingScrollControlsView.h"
#import "MUPassthroughView.h"
#import "MUPhotoSliderTileProvider.h"
#import "MUPhotoTileOverlay.h"
#import "MUPlaceCardAnalyticsController.h"
#import "MUPlaceDataAvailability.h"
#import "MUPlaceHeaderETAFormatter.h"
#import "MUPlaceHeaderViewModel.h"
#import "MUPlaceHoursFormatter.h"
#import "MUPlaceItemHeaderViewModel.h"
#import "MUPlaceRibbonHelper.h"
#import "MUTextFactoidViewModel.h"
#import "MUTimeExpirableLRUCache.h"
#import "MUTrailSelectionInfo.h"
#import "MUTransitDeparturesDataSource.h"
#import "MUTransitLineItemHeaderViewModel.h"
#import "MUTransitSystemDeparturesListViewController.h"
#import "MUTransitSystemDeparturesListViewControllerConfiguration.h"
#import "MUVendorLinkSortParameters.h"
#import "MUVendorLinkSorter.h"
#import "MUVendorLinkViewModel.h"
#import "MUWatchForegroundVisibilityMonitor.h"
#import "MUWatchPlaceContentDataSource.h"
#import "MapsUILayout.h"
#import "MapsUILocalizationBridge.h"
#import "MapsUIUtilities.h"
#import "_$s6MapsUI19MarqueeControlModelCN.h"
#import "_$s6MapsUI19WatchDynamicMetricsCN.h"
#import "_$s6MapsUI31NanoPlaceViewControllerInternalCN.h"
#import "_$s6MapsUI32PlaceFactoidMeasurementFormatterCN.h"
#import "_$s6MapsUI33WatchPlaceSummaryPlatterViewModelCN.h"
#import "_$s6MapsUI44NanoPlaceViewControllerInternalConfigurationCN.h"
#import "_$s6MapsUI49TransitSystemDeparturesListViewControllerInternalCN.h"
#import "_$s6MapsUI62TransitSystemDeparturesListViewControllerInternalConfigurationCN.h"
#import "_MUBundleIdentifier.h"
#import "_MUEmptyUnit.h"
#import "_MUVariableBlurView.h"
#import "_TtC6MapsUI17MapItemAnnotation.h"
#import "_TtC6MapsUI21WatchPlaceETAProvider.h"
#import "_TtC6MapsUI25WatchPhotoSliderViewModel.h"
#import "_TtC6MapsUI26WatchMapItemPhotoViewModel.h"
#import "_TtC6MapsUI26WatchPlaceListItemSpacings.h"
#import "_TtC6MapsUI26WatchPlacePhotosDataSource.h"
#import "_TtC6MapsUI26WatchPlaceRibbonDataSource.h"
#import "_TtC6MapsUI27WatchPlaceRatingsDataSource.h"
#import "_TtC6MapsUI27WatchPlaceSectionDataSource.h"
#import "_TtC6MapsUI28WatchPlaceInlineMapViewModel.h"
#import "_TtC6MapsUI29WatchPlaceAmenitiesDataSource.h"
#import "_TtC6MapsUI29WatchPlaceRibbonItemViewModel.h"
#import "_TtC6MapsUI29WatchPlaceSnapshotCoordinator.h"
#import "_TtC6MapsUI30WatchPlaceHikingTrailViewModel.h"
#import "_TtC6MapsUI30WatchPlaceNavAndPhoneViewModel.h"
#import "_TtC6MapsUI31WatchMockedPlaceHeaderViewModel.h"
#import "_TtC6MapsUI31WatchPlaceDescriptionDataSource.h"
#import "_TtC6MapsUI32WatchPlaceHikingTrailsDataSource.h"
#import "_TtC6MapsUI32WatchPlaceLocationInfoDataSource.h"
#import "_TtC6MapsUI33WatchExpandableTextBlockViewModel.h"
#import "_TtC6MapsUI33WatchPlaceHeaderSectionDataSource.h"
#import "_TtC6MapsUI33WatchPrimaryHeaderButtonViewModel.h"
#import "_TtC6MapsUI34WatchPlaceTransitSectionDataSource.h"
#import "_TtC6MapsUI35WatchSecondaryHeaderButtonViewModel.h"
#import "_TtC6MapsUI37WatchPlaceTransitSystemListDataSource.h"
#import "_TtC6MapsUI43WatchPlaceHeaderButtonsRowSectionDataSource.h"
#import "_TtC6MapsUI43WatchPlaceTransitSystemDeparturesDataSource.h"
#import "_TtC6MapsUIP33_13D0097828F88D80788CAEDD3C40005E24_MUSwiftBundleIdentifier.h"
#import "_TtC6MapsUIP33_3F251D105B92876B84BB242220BBCBBB12LowPowerMode.h"
#import "_TtC6MapsUIP33_4244788D746692A2798F8026DC35838B21HostedScenePhaseModel.h"
#import "_TtC6MapsUIP33_50B2DAB7D8669F2F3C8B343CCC6E1CAE11BundleClass.h"
#import "_TtC6MapsUIP33_DE8380D891BE73C161514166A6CABDA619ResourceBundleClass.h"
#import "GEOFactoid-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "GEOTransitConnectionInfo-Protocol.h"
#import "GEOTransitDeparture-Protocol.h"
#import "GEOTransitDepartureSequence-Protocol.h"
#import "GEOTransitIncident-Protocol.h"
#import "GEOTransitLabelItem-Protocol.h"
#import "GEOTransitLine-Protocol.h"
#import "GEOTransitSystem-Protocol.h"
#import "GEOTransitTimeRange-Protocol.h"
#import "MKAnnotation-Protocol.h"
#import "MKETAProviderDelegate-Protocol.h"
#import "MKETAProviderObserver-Protocol.h"
#import "MKInactiveTransitLine-Protocol.h"
#import "MKTransitDeparturesDataProviderDelegate-Protocol.h"
#import "MUFactoidViewModel-Protocol.h"
#import "MUInfoCardAnalyticsDelegate-Protocol.h"
#import "MULRUCacheDelegate-Protocol.h"
#import "MULayoutItem-Protocol.h"
#import "MUPlaceCardAnalyticsProvider-Protocol.h"
#import "MUPlaceHeaderViewModel-Protocol.h"
#import "MUPlaceModuleAnalyticsLogging-Protocol.h"
#import "MUTransitDeparturesDataSourceDelegate-Protocol.h"
#import "MUTransitSystemDeparturesListViewControllerActionDelegate-Protocol.h"
#import "MUTransitSystemDeparturesListViewControllerActionDelegate-Protocol.h"
#import "MUWatchForegroundVisibilityMonitorDelegate-Protocol.h"
#import "MUWatchPlaceContentActionDelegate-Protocol.h"
#import "MUWatchPlaceContentActionDelegate-Protocol.h"
#import "MUWatchPlaceContentDataProvidingDelegate-Protocol.h"
#import "MUWidthMeasurable-Protocol.h"
#import "NSObject-Protocol.h"
#import "_MKInfoCardAnalyticsDelegate-Protocol.h"
#import "_MKPlaceItem-Protocol.h"
#import "_MKStaticMapViewDelegate-Protocol.h"
#import "GEOTrail+MUExtras.h"
#import "MKMapItem+MUExtras.h"
#import "UILayoutGuide+MULayoutItem.h"
#import "UIStackView+MUXCrossPlatformOperations.h"
#import "UILabel+MUXCrossPlatformOperations.h"
#import "UIView+MUXCrossPlatformOperations.h"
#import "UIButton+MUXCrossPlatformOperations.h"
#import "UITextView+MUXCrossPlatformOperations.h"
#import "UIImage+MUXCrossPlatformOperations.h"
#import "UIColor+MUXCrossPlatformOperations.h"
#import "UIScrollView+MUXCrossPlatformOperations.h"
#import "MUNanoPlaceViewControllerInternal+MapsUI.h"
#import "_TtC6MapsUI37WatchPlaceTransitSystemListDataSource+MapsUI.h"
#import "MUWatchPlaceContentDataSource+MapsUI.h"
#import "MUTransitDeparturesDataSource+MapsUI.h"
#import "PUICDisplay+MapsUI.h"
#import "NSString+MapsUIExtras.h"
#import "NSBundle+MapsUIExtras.h"
#import "NSMutableArray+MapsUIExtras.h"
#import "NSCollectionLayoutSize+MapsUILayout.h"
#import "UIViewController+MapsUILayoutMargins.h"

#endif /* MapsUI_h */