/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceServiceHoursViewControllerProtocol;
@class MKPlaceSectionHeaderView, UIScrollView, UIStackView, MKMapItem, NSString;

@interface MKPlaceServiceHoursViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isExpanded;
	MKPlaceSectionHeaderView* _headerView;
	long long _type;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	id<MKPlaceServiceHoursViewControllerProtocol> _placeServiceDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceServiceHoursViewControllerProtocol> placeServiceDelegate;              //@synthesize placeServiceDelegate=_placeServiceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)titleString;
+(id)placeServiceHoursWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)infoCardChildPossibleActions;
-(void)_contentSizeDidChange;
-(id)initWithMapItem:(id)arg1 type:(long long)arg2 ;
-(void)_showAllHeaderButtonTapped;
-(void)_updateServiceHourRows;
-(void)captureCloseAnalytics;
-(id<MKPlaceServiceHoursViewControllerProtocol>)placeServiceDelegate;
-(void)setPlaceServiceDelegate:(id<MKPlaceServiceHoursViewControllerProtocol>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
@end

