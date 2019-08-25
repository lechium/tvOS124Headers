/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKTransitAttributionViewController : _MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _isAttributionURLAvailable;
	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKTransitAttributionViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                             //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitAttributionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(id)_attribution;
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)initWithTransitLineItem:(id)arg1 ;
-(void)_transitInfoUpdated;
-(BOOL)_hasAttribution;
-(id)_attributionCell;
-(void)_presentTransitAttributionDetails;
-(id<GEOTransitLineItem>)lineItem;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MKTransitAttributionViewControllerDelegate>)arg1 ;
-(id<MKTransitAttributionViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)_commonInit;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

