//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QAnnotationContainerViewDelegate-Protocol.h"
#import "QConfigManagerDelegate-Protocol.h"
#import "QIndoorManagerDelegate-Protocol.h"
#import "QTileOverlayManagerDelegate-Protocol.h"
#import "QUserLocationManagerDelegate-Protocol.h"
#import "TBRegionChangeDistributorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, QAnnotationContainerView, QAppKeyCheck, QBasicMapView, QBasicMapViewLayer, QConfigManager, QConfigPreference, QCustomLayerManager, QDataChecker, QEngineResourceManager, QHandDrawTileOverlay, QIndoorBuilding, QIndoorLevel, QIndoorManager, QLocalStateCollector, QMapContentView, QMapDataManager, QMediator, QOverlayContainer, QScaleView, QStatisticer, QStyleManager, QTileOverlayManager, QTrafficManager, QUniversalMapCounter, QUserLocation, QUserLocationAccessibilityElement, QUserLocationManager, QWorldTileOverlay, TBRegionChangeDistributor, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;
@protocol QMapViewDelegate;

@interface QMapView : UIView <UIGestureRecognizerDelegate, QAnnotationContainerViewDelegate, TBRegionChangeDistributorDelegate, QUserLocationManagerDelegate, QIndoorManagerDelegate, QConfigManagerDelegate, QTileOverlayManagerDelegate>
{
    _Bool _showsScale;
    _Bool _showsBuildings;
    _Bool _showsCompass;
    _Bool _zoomEnabled;
    _Bool _scrollEnabled;
    _Bool _overlookingEnabled;
    _Bool _rotateEnabled;
    _Bool _isDealloc;
    _Bool _internalShowsScale;
    _Bool _internalShowsUserLocation;
    _Bool _internalShowsPoi;
    _Bool _hasMapLoaded;
    _Bool _userLocationElementEnabled;
    _Bool _elementDirty;
    _Bool _internalAnnotationAccessibilityFrameClipToBounds;
    int _configUpdateIdentifier;
    id <QMapViewDelegate> _delegate;
    unsigned long long _mapType;
    QMapContentView *_contentView;
    QBasicMapView *_baseMapView;
    QAnnotationContainerView *_annotationContainerView;
    QOverlayContainer *_overlayContainer;
    QMediator *_mediator;
    TBRegionChangeDistributor *_regionChangeDistributor;
    UIView *_logoView;
    double _logoSizeScale;
    unsigned long long _logoAnchor;
    QScaleView *_scaleView;
    double _previousZoomLevel;
    QUserLocationManager *_userLocationManager;
    long long _internalUserTrackingMode;
    QUserLocation *_internalUserLocation;
    UITapGestureRecognizer *_zoomInGestureRecognizer;
    UITapGestureRecognizer *_zoomOutGestureRecognizer;
    UIPinchGestureRecognizer *_zoomPinchGestureRecognizer;
    UILongPressGestureRecognizer *_oneFingerZoomGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPanGestureRecognizer *_pullGestureRecognizer;
    UIRotationGestureRecognizer *_rotateGestureRecognizer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    QTileOverlayManager *_tileOverlayManager;
    QHandDrawTileOverlay *_handDrawTileOverlay;
    QWorldTileOverlay *_worldTileOverlay;
    unsigned long long _language;
    QUniversalMapCounter *_worldMapCounter;
    QUniversalMapCounter *_customLayerCounter;
    QCustomLayerManager *_customLayerManager;
    QTrafficManager *_trafficManager;
    QConfigPreference *_configPreference;
    QEngineResourceManager *_resourceManager;
    QConfigManager *_configManager;
    QStyleManager *_styleManager;
    QAppKeyCheck *_appKeyChecker;
    QDataChecker *_dataChecker;
    NSMutableSet *_snapshotTimerSet;
    QMapDataManager *_dataManager;
    QIndoorManager *_indoorManager;
    QStatisticer *_statisticer;
    QLocalStateCollector *_logCollector;
    NSMutableArray *_totalElements;
    NSMutableArray *_poiElements;
    NSMutableArray *_annotationElements;
    QUserLocationAccessibilityElement *_userLocationElement;
    struct CGPoint _logoMargin;
    struct CLLocationCoordinate2D _userLocationElementCoordinate;
}

+ (void)loadPrefferedResourceFilesFromDirectory:(id)arg1;
+ (struct CLLocationCoordinate2D)correct84CoordinateTo02:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)shouldCorrect84CoordinateTo02:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) _Bool internalAnnotationAccessibilityFrameClipToBounds; // @synthesize internalAnnotationAccessibilityFrameClipToBounds=_internalAnnotationAccessibilityFrameClipToBounds;
@property(nonatomic) _Bool elementDirty; // @synthesize elementDirty=_elementDirty;
@property(nonatomic) struct CLLocationCoordinate2D userLocationElementCoordinate; // @synthesize userLocationElementCoordinate=_userLocationElementCoordinate;
@property(nonatomic) _Bool userLocationElementEnabled; // @synthesize userLocationElementEnabled=_userLocationElementEnabled;
@property(retain, nonatomic) QUserLocationAccessibilityElement *userLocationElement; // @synthesize userLocationElement=_userLocationElement;
@property(retain, nonatomic) NSMutableArray *annotationElements; // @synthesize annotationElements=_annotationElements;
@property(retain, nonatomic) NSMutableArray *poiElements; // @synthesize poiElements=_poiElements;
@property(retain, nonatomic) NSMutableArray *totalElements; // @synthesize totalElements=_totalElements;
@property(retain, nonatomic) QLocalStateCollector *logCollector; // @synthesize logCollector=_logCollector;
@property(retain, nonatomic) QStatisticer *statisticer; // @synthesize statisticer=_statisticer;
@property(retain, nonatomic) QIndoorManager *indoorManager; // @synthesize indoorManager=_indoorManager;
@property(retain, nonatomic) QMapDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSMutableSet *snapshotTimerSet; // @synthesize snapshotTimerSet=_snapshotTimerSet;
@property(retain, nonatomic) QDataChecker *dataChecker; // @synthesize dataChecker=_dataChecker;
@property(retain, nonatomic) QAppKeyCheck *appKeyChecker; // @synthesize appKeyChecker=_appKeyChecker;
@property(retain, nonatomic) QStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(nonatomic) int configUpdateIdentifier; // @synthesize configUpdateIdentifier=_configUpdateIdentifier;
@property(nonatomic) _Bool hasMapLoaded; // @synthesize hasMapLoaded=_hasMapLoaded;
@property(retain, nonatomic) QConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain, nonatomic) QEngineResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) QConfigPreference *configPreference; // @synthesize configPreference=_configPreference;
@property(retain, nonatomic) QTrafficManager *trafficManager; // @synthesize trafficManager=_trafficManager;
@property(nonatomic) _Bool internalShowsPoi; // @synthesize internalShowsPoi=_internalShowsPoi;
@property(retain, nonatomic) QCustomLayerManager *customLayerManager; // @synthesize customLayerManager=_customLayerManager;
@property(retain, nonatomic) QUniversalMapCounter *customLayerCounter; // @synthesize customLayerCounter=_customLayerCounter;
@property(retain, nonatomic) QUniversalMapCounter *worldMapCounter; // @synthesize worldMapCounter=_worldMapCounter;
@property(nonatomic) unsigned long long language; // @synthesize language=_language;
@property(retain, nonatomic) QWorldTileOverlay *worldTileOverlay; // @synthesize worldTileOverlay=_worldTileOverlay;
@property(retain, nonatomic) QHandDrawTileOverlay *handDrawTileOverlay; // @synthesize handDrawTileOverlay=_handDrawTileOverlay;
@property(retain, nonatomic) QTileOverlayManager *tileOverlayManager; // @synthesize tileOverlayManager=_tileOverlayManager;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotateGestureRecognizer; // @synthesize rotateGestureRecognizer=_rotateGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pullGestureRecognizer; // @synthesize pullGestureRecognizer=_pullGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *oneFingerZoomGestureRecognizer; // @synthesize oneFingerZoomGestureRecognizer=_oneFingerZoomGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *zoomPinchGestureRecognizer; // @synthesize zoomPinchGestureRecognizer=_zoomPinchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *zoomOutGestureRecognizer; // @synthesize zoomOutGestureRecognizer=_zoomOutGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *zoomInGestureRecognizer; // @synthesize zoomInGestureRecognizer=_zoomInGestureRecognizer;
@property(retain, nonatomic) QUserLocation *internalUserLocation; // @synthesize internalUserLocation=_internalUserLocation;
@property(nonatomic) long long internalUserTrackingMode; // @synthesize internalUserTrackingMode=_internalUserTrackingMode;
@property(nonatomic) _Bool internalShowsUserLocation; // @synthesize internalShowsUserLocation=_internalShowsUserLocation;
@property(retain, nonatomic) QUserLocationManager *userLocationManager; // @synthesize userLocationManager=_userLocationManager;
@property(nonatomic) double previousZoomLevel; // @synthesize previousZoomLevel=_previousZoomLevel;
@property(nonatomic) _Bool internalShowsScale; // @synthesize internalShowsScale=_internalShowsScale;
@property(retain, nonatomic) QScaleView *scaleView; // @synthesize scaleView=_scaleView;
@property(nonatomic) unsigned long long logoAnchor; // @synthesize logoAnchor=_logoAnchor;
@property(nonatomic) double logoSizeScale; // @synthesize logoSizeScale=_logoSizeScale;
@property(nonatomic) struct CGPoint logoMargin; // @synthesize logoMargin=_logoMargin;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) TBRegionChangeDistributor *regionChangeDistributor; // @synthesize regionChangeDistributor=_regionChangeDistributor;
@property(retain, nonatomic) QMediator *mediator; // @synthesize mediator=_mediator;
@property(retain, nonatomic) QOverlayContainer *overlayContainer; // @synthesize overlayContainer=_overlayContainer;
@property(retain, nonatomic) QAnnotationContainerView *annotationContainerView; // @synthesize annotationContainerView=_annotationContainerView;
@property(retain, nonatomic) QBasicMapView *baseMapView; // @synthesize baseMapView=_baseMapView;
@property(retain, nonatomic) QMapContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isDealloc; // @synthesize isDealloc=_isDealloc;
@property(nonatomic, getter=isRotateEnabled) _Bool rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic, getter=isOverlookingEnabled) _Bool overlookingEnabled; // @synthesize overlookingEnabled=_overlookingEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) _Bool showsCompass; // @synthesize showsCompass=_showsCompass;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) _Bool showsScale; // @synthesize showsScale=_showsScale;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) __weak id <QMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHidden:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (void)recordStatistics;
- (void)debugReport:(id)arg1;
- (void)commonInitWithConfig:(id)arg1;
- (void)setupSnapshotEnvironment;
- (void)setupStatisticsSystem;
- (void)checkDataVersion;
- (void)checkConfigUpdate;
- (void)displayFailedLabel;
- (void)checkAppKey;
- (void)setupDefaultProperty;
- (void)setupScaleView:(id)arg1;
- (void)setupLogoView;
- (void)setupLocalLogger;
- (void)setupConfigManager;
- (void)setupTrafficSystem;
- (void)setupRoadEventSystem;
- (void)setupCustomLayerManager;
- (void)setupTileOverlayManager;
- (void)setupUserLocationSystem;
- (void)setupAnnotationSystem;
- (void)setupOverlaySystem;
- (void)setupMediator;
- (void)setupStyleManager;
- (void)setupIndoorSystem:(id)arg1;
- (void)setupMapContext;
- (void)setupDataSystem;
- (void)setupMapRenderSystem:(id)arg1;
- (void)setupContentView;
- (void)setupRegionChangeDistributor;
- (void)setupSelfWithConfig:(id)arg1;
- (id)tileOverlayManager:(id)arg1 viewForTileOverlay:(id)arg2;
- (void)configUpdateNotRequire:(id)arg1;
- (void)notifyConfigUpdateProcessed;
- (void)configManagerDidFinish:(id)arg1;
- (void)mapDataFailLoading:(id)arg1 withError:(id)arg2;
- (void)mapContext:(id)arg1 mapStatusChange:(int)arg2;
- (void)mapContextMapLoadFinish:(id)arg1;
- (void)mapContextDidMapStatusChangedAfterDraw:(id)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(id)arg1;
- (void)mapContext:(id)arg1 saveTileData:(id)arg2 withUrl:(id)arg3;
- (void)mapContext:(id)arg1 cancelDownloadTile:(id)arg2;
- (void)mapContext:(id)arg1 downloadTile:(id)arg2;
- (void)update:(double)arg1;
- (void)didAddToWindow;
- (void)distributor:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)distributor:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)notifyMapViewRegionChange;
- (CDStruct_b7cb895d)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(CDStruct_b7cb895d)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (id)overlays;
- (id)viewForOverlay:(id)arg1;
- (void)doRemoveOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (id)doAddOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (double)zoomLevelThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 outCenterCoordinate:(struct CLLocationCoordinate2D *)arg3;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 containsCalloutView:(_Bool)arg2 annotations:(id)arg3 edgePadding:(struct UIEdgeInsets)arg4;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (void)setRegion:(CDStruct_b7cb895d)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_b7cb895d region;
- (void)setLimitMapRect:(CDStruct_02837cd9)arg1 mode:(long long)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 animated:(_Bool)arg2;
@property(nonatomic) CDStruct_02837cd9 visibleMapRect;
- (void)setCenterOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setCenterOffset:(struct CGPoint)arg1;
- (void)setCenterOffsetY:(float)arg1;
- (void)setOverlooking:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double overlooking;
- (void)setRotation:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double rotation;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double zoomLevel;
- (int)scaleLevel;
- (void)setMinZoomLevel:(double)arg1 maxZoomLevel:(double)arg2;
@property(readonly, nonatomic) double maxZoomLevel;
@property(readonly, nonatomic) double minZoomLevel;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (void)setCompassOffset:(struct CGPoint)arg1;
- (void)setScaleViewOffset:(struct CGPoint)arg1;
- (void)setLogoScale:(double)arg1;
- (void)setLogoMargin:(struct CGPoint)arg1 anchor:(unsigned long long)arg2;
- (void)setLogoOffset:(struct CGPoint)arg1;
- (void)setRoadEventVisible:(_Bool)arg1;
- (void)setForeignLanguage:(unsigned long long)arg1;
@property(nonatomic) _Bool showsPoi;
@property(nonatomic) _Bool shows3DBuildings;
- (void)setInternalShowsScale:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateScaleViewAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)refreshWorldMap:(id)arg1;
- (void)refreshLogo:(id)arg1;
- (void)validateWorldmap;
- (void)validateLogo;
- (void)validateDarkMode:(_Bool)arg1;
- (void)reloadMapStyle;
- (void)setMapStyleInternal:(int)arg1 isCustomStyle:(_Bool)arg2;
- (void)setMapStyle:(int)arg1;
- (void)setStyleType:(int)arg1;
@property(readonly, nonatomic) QBasicMapViewLayer *animationLayer;
- (_Bool)compareModificationDate:(id)arg1;
- (void)checkTileOverlayCache;
@property(nonatomic) _Bool showsTraffic;
@property(nonatomic, getter=isHandDrawMapEnabled) _Bool handDrawMapEnabled;
@property(readonly, nonatomic) NSString *businessKey;
@property(readonly, nonatomic) NSString *miniProgramID;
- (void)fixDataSource;
- (id)getDebugError;
- (void)setOverlooking:(double)arg1 option:(id)arg2;
- (void)setRotation:(double)arg1 option:(id)arg2;
- (void)setZoomLevel:(double)arg1 option:(id)arg2;
- (void)setCenterOffset:(struct CGPoint)arg1 option:(id)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 option:(id)arg2;
- (void)decreaseUserTrackingMode;
- (void)removeCustomLayer:(id)arg1;
- (void)addCustomLayer:(id)arg1;
- (id)createViewForCustomLayerTileOverlay:(id)arg1;
- (id)createViewForWorldTileOverlay;
@property(nonatomic) _Bool worldTileOverlayEnabled;
- (void)refreshWorldMapScene;
- (void)setupGestureRecognizers;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)singleTapGesture:(id)arg1;
- (void)rotateGesture:(id)arg1;
- (void)pullGesture:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)oneFingerZoomGesture:(id)arg1;
- (void)pinchGesture:(id)arg1;
- (void)zoomOutGesture:(id)arg1;
- (void)zoomInGesture:(id)arg1;
- (struct CGSize)offsetRangeForVelocity:(struct CGPoint)arg1;
- (double)animationDurationForVelocity:(struct CGPoint)arg1;
- (void)callDelegateDidTapOverlay:(int)arg1;
- (void)callDelegateDidTapPoi:(id)arg1;
- (void)callDelegateDidTapAtCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)bringAnnotationToFront:(id)arg1;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
@property(readonly, nonatomic) NSArray *selectedAnnotations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)containerView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)containerView:(id)arg1 didTapCallout:(id)arg2;
- (void)containerView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(int)arg3 fromOldState:(int)arg4;
- (void)containerView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)containerView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)containerView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)containerView:(id)arg1 customCalloutForAnnotationView:(id)arg2;
- (id)containerView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setUserLocationHidden:(_Bool)arg1;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;
- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long userTrackingMode;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) double headingFilter;
@property(nonatomic) double distanceFilter;
@property(nonatomic) double desiredAccuracy;
@property(readonly, nonatomic) QUserLocation *userLocation;
@property(nonatomic) _Bool showsUserLocation;
- (void)configureUserLocationPresentation:(id)arg1;
- (void)manager:(id)arg1 didFailWithError:(id)arg2;
- (void)manager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)manager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)callDelegateDidChangeUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
- (void)callDelegateDidFailToLocateUserWithError:(id)arg1;
- (void)callDelegateDidUpdateUserLocation:(id)arg1 fromHeading:(_Bool)arg2;
- (void)callDelegateDidStopLocating;
- (void)callDelegateWillStartLocating;
- (void)resetMapAnimated:(_Bool)arg1;
- (void)takeSnapshotInRect:(struct CGRect)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)takeSnapshotInRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)snapshotIsReady;
- (id)executeSnapshotWithClipRect:(struct CGRect)arg1;
- (id)pasteLogoToImage:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)clipImage:(id)arg1 withRect:(struct CGRect)arg2;
- (id)takeSnapshot;
- (id)snapshot;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (id)accessibleElements;
- (id)constructUserLocationElement;
- (id)constructAnnotationElements;
- (id)elementForAnnotationView:(id)arg1;
- (id)constructPoiElements;
- (id)elementForPoi:(id)arg1;
- (void)updateUserLocationAccessibilityWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)enableUserLocationAccessibility:(_Bool)arg1;
- (void)judgeUserLocation;
@property(nonatomic) _Bool annotationAccessibilityFrameClipToBounds;
@property(copy, nonatomic) NSString *userLocationAccessibilityLabel; // @dynamic userLocationAccessibilityLabel;
- (void)makeAnnotationInvalid;
- (void)makeAllInvalid;
- (void)triggerLayoutByAnnotationChangeWithDelayInSecond:(double)arg1;
- (void)triggerLayoutByRegionDidChangeWithDelayInSecond:(double)arg1;
- (void)setupAccessibility;
- (void)receiveVoiceOverStatusChanged:(id)arg1;
- (struct CGRect)universalRectWithCenter:(struct CGPoint)arg1;
- (double)getIndoorOutlineZoom:(id)arg1;
- (void)setActiveIndoorInfo:(id)arg1;
@property(retain, nonatomic) QIndoorLevel *activeLevel;
@property(readonly, nonatomic) QIndoorBuilding *activeBuilding;
@property(nonatomic) struct CGPoint indoorPickerOffset;
@property(nonatomic) _Bool indoorPicker;
- (_Bool)isIndoorEnabled;
- (void)setIndoorEnabled:(_Bool)arg1;
- (void)indoorManager:(id)arg1 didChangeActiveLevel:(id)arg2;
- (void)indoorManager:(id)arg1 didChangeActiveBuilding:(id)arg2;
- (id)createViewForHandDrawTileOverlay;
@property(nonatomic) _Bool handDrawTileOverlayEnabled;
- (void)setDisplayLanguage:(unsigned long long)arg1;
- (void)setCountryCode:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
@property(nonatomic) _Bool automaticChangeDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

