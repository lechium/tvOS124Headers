/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKLayoutCardViewController.h>
#import <libobjc.A.dylib/_MKInfoCardController.h>

@protocol _MKPlaceItem, _MKPlaceViewControllerDelegate, CNContactViewControllerPrivateDelegate, _MKPlaceViewControllerFeedbackDelegate, UIScrollViewDelegate;
@class GEOAutomobileOptions, GEOTransitOptions, NSString, CNContactNavigationController, _MKPlaceActionButtonController, CLLocation, CNContact, MKMapItem;

@interface _MKPlaceViewController : MKLayoutCardViewController <_MKInfoCardController> {

	BOOL _showShareActionsButton;
	BOOL _showEditButton;
	BOOL _showTitleBar;
	BOOL _hideDirectionsButtons;
	BOOL _hideInlineMap;
	BOOL _showInlineMapInHeader;
	BOOL _showNearbyApps;
	BOOL _showReportAProblem;
	BOOL _disableReportAProblem;
	BOOL _showContactActions;
	BOOL _showSimulateLocation;
	BOOL _showOpenInSkyline;
	BOOL _showOpenInPinpoint;
	BOOL _placeInBookmarks;
	id<_MKPlaceItem> _placeItem;
	NSString* _headerTitle;
	id<_MKPlaceViewControllerDelegate> _placeViewControllerDelegate;
	CNContactNavigationController*<CNContactViewControllerPrivateDelegate> _contactsNavigationController;
	unsigned long long _options;
	id<_MKPlaceViewControllerFeedbackDelegate> _placeViewFeedbackDelegate;
	/*^block*/id _placeViewFeedbackAppLaunchHandler;
	double headerHeight;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	double _contentAlpha;
	_MKPlaceActionButtonController* _headerSecondaryButtonController;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	double _headerSecondaryNameLabelPadding;
	_MKPlaceActionButtonController* _headerTertiaryButtonController;
	CLLocation* _location;

}

@property (assign,nonatomic) unsigned long long options;                                                                                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id placeViewFeedbackAppLaunchHandler;                                                                                      //@synthesize placeViewFeedbackAppLaunchHandler=_placeViewFeedbackAppLaunchHandler - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerFeedbackDelegate> placeViewFeedbackDelegate;                                             //@synthesize placeViewFeedbackDelegate=_placeViewFeedbackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKPlaceViewControllerDelegate> placeViewControllerDelegate;                                                   //@synthesize placeViewControllerDelegate=_placeViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
@property (assign,nonatomic) BOOL showContactActions;                                                                                                 //@synthesize showContactActions=_showContactActions - In the implementation block
@property (nonatomic,readonly) id<_MKPlaceItem> placeItem;                                                                                            //@synthesize placeItem=_placeItem - In the implementation block
@property (assign,nonatomic) BOOL placeInBookmarks;                                                                                                   //@synthesize placeInBookmarks=_placeInBookmarks - In the implementation block
@property (assign,nonatomic,__weak) CNContactNavigationController*<CNContactViewControllerPrivateDelegate> contactsNavigationController;              //@synthesize contactsNavigationController=_contactsNavigationController - In the implementation block
@property (assign,nonatomic) double headerHeight; 
@property (nonatomic,retain) _MKPlaceActionButtonController * headerSecondaryButtonController;                                                        //@synthesize headerSecondaryButtonController=_headerSecondaryButtonController - In the implementation block
@property (nonatomic,retain) _MKPlaceActionButtonController * headerTertiaryButtonController;                                                         //@synthesize headerTertiaryButtonController=_headerTertiaryButtonController - In the implementation block
@property (assign,nonatomic) BOOL showTitleBar;                                                                                                       //@synthesize showTitleBar=_showTitleBar - In the implementation block
@property (assign,nonatomic) BOOL hideDirectionsButtons;                                                                                              //@synthesize hideDirectionsButtons=_hideDirectionsButtons - In the implementation block
@property (assign,nonatomic) BOOL showEditButton;                                                                                                     //@synthesize showEditButton=_showEditButton - In the implementation block
@property (assign,nonatomic) BOOL hideInlineMap;                                                                                                      //@synthesize hideInlineMap=_hideInlineMap - In the implementation block
@property (assign,nonatomic) BOOL showInlineMapInHeader;                                                                                              //@synthesize showInlineMapInHeader=_showInlineMapInHeader - In the implementation block
@property (assign,nonatomic) BOOL showNearbyApps;                                                                                                     //@synthesize showNearbyApps=_showNearbyApps - In the implementation block
@property (assign,nonatomic) BOOL showReportAProblem;                                                                                                 //@synthesize showReportAProblem=_showReportAProblem - In the implementation block
@property (assign,nonatomic) BOOL disableReportAProblem;                                                                                              //@synthesize disableReportAProblem=_disableReportAProblem - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                                                                                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL showSimulateLocation;                                                                                               //@synthesize showSimulateLocation=_showSimulateLocation - In the implementation block
@property (assign,nonatomic) BOOL showOpenInSkyline;                                                                                                  //@synthesize showOpenInSkyline=_showOpenInSkyline - In the implementation block
@property (assign,nonatomic) BOOL showOpenInPinpoint;                                                                                                 //@synthesize showOpenInPinpoint=_showOpenInPinpoint - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,copy) NSString * headerTitle;                                                                                                    //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,readonly) double headerSecondaryNameLabelPadding;                                                                                //@synthesize headerSecondaryNameLabelPadding=_headerSecondaryNameLabelPadding - In the implementation block
@property (assign,nonatomic) BOOL showShareActionsButton;                                                                                             //@synthesize showShareActionsButton=_showShareActionsButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                                                                //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                                                                      //@synthesize transitOptions=_transitOptions - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                                                                      //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) double contentAlpha;                                                                                                     //@synthesize contentAlpha=_contentAlpha - In the implementation block
+(double)headerHeightInMinimalMode;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(id)initWithMapItem:(id)arg1 ;
-(id<_MKPlaceItem>)placeItem;
-(double)contentAlpha;
-(BOOL)_showReportAProblem;
-(void)hideTitle:(BOOL)arg1 ;
-(id)additionalViewControllersAtPosition:(long long)arg1 ;
-(void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2 ;
-(void)removeAdditionalViewController:(id)arg1 ;
-(id)initWithPlaceItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 mapItem:(id)arg2 options:(unsigned long long)arg3 ;
-(void)setPlaceItem:(id<_MKPlaceItem>)arg1 ;
-(void)setPlaceItem:(id)arg1 updateOriginalContact:(BOOL)arg2 ;
-(void)updateHeaderTitle;
-(void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(BOOL)arg3 ;
-(void)displayTransitSystemWithMUID:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)mapItemWillUpdate;
-(void)errorLoadingMapItemUpdate:(id)arg1 ;
-(void)placeCardWillCloseFromClientType:(unsigned long long)arg1 ;
-(BOOL)showShareActionsButton;
-(void)setShowShareActionsButton:(BOOL)arg1 ;
-(BOOL)showEditButton;
-(void)setShowEditButton:(BOOL)arg1 ;
-(BOOL)showTitleBar;
-(void)setShowTitleBar:(BOOL)arg1 ;
-(BOOL)hideDirectionsButtons;
-(void)setHideDirectionsButtons:(BOOL)arg1 ;
-(BOOL)hideInlineMap;
-(void)setHideInlineMap:(BOOL)arg1 ;
-(BOOL)showInlineMapInHeader;
-(void)setShowInlineMapInHeader:(BOOL)arg1 ;
-(BOOL)showNearbyApps;
-(void)setShowNearbyApps:(BOOL)arg1 ;
-(BOOL)showReportAProblem;
-(void)setShowReportAProblem:(BOOL)arg1 ;
-(BOOL)disableReportAProblem;
-(void)setDisableReportAProblem:(BOOL)arg1 ;
-(BOOL)showContactActions;
-(void)setShowContactActions:(BOOL)arg1 ;
-(BOOL)showSimulateLocation;
-(void)setShowSimulateLocation:(BOOL)arg1 ;
-(BOOL)showOpenInSkyline;
-(void)setShowOpenInSkyline:(BOOL)arg1 ;
-(BOOL)showOpenInPinpoint;
-(void)setShowOpenInPinpoint:(BOOL)arg1 ;
-(id<_MKPlaceViewControllerDelegate>)placeViewControllerDelegate;
-(void)setPlaceViewControllerDelegate:(id<_MKPlaceViewControllerDelegate>)arg1 ;
-(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)contactsNavigationController;
-(void)setContactsNavigationController:(CNContactNavigationController*<CNContactViewControllerPrivateDelegate>)arg1 ;
-(id<_MKPlaceViewControllerFeedbackDelegate>)placeViewFeedbackDelegate;
-(void)setPlaceViewFeedbackDelegate:(id<_MKPlaceViewControllerFeedbackDelegate>)arg1 ;
-(id)placeViewFeedbackAppLaunchHandler;
-(void)setPlaceViewFeedbackAppLaunchHandler:(id)arg1 ;
-(BOOL)placeInBookmarks;
-(void)setPlaceInBookmarks:(BOOL)arg1 ;
-(_MKPlaceActionButtonController *)headerSecondaryButtonController;
-(void)setHeaderSecondaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(double)headerSecondaryNameLabelPadding;
-(_MKPlaceActionButtonController *)headerTertiaryButtonController;
-(void)setHeaderTertiaryButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(CNContact *)contact;
-(unsigned long long)options;
-(void)setContentAlpha:(double)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(CLLocation *)location;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(double)headerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

