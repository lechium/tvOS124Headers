/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapPipelineComponentProvider.h>

@protocol PXPlacesMapLayout, PXPlacesMapUpdatePlan, PXPlacesMapRenderer, PXPlacesMapSelectionHandler;
@class PXPlacesImageCache, NSString;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider> {

	id<PXPlacesMapLayout> _layout;
	id<PXPlacesMapUpdatePlan> _updatePlan;
	id<PXPlacesMapRenderer> _renderer;
	id<PXPlacesMapSelectionHandler> _selectionHandler;
	PXPlacesImageCache* _imageCache;

}

@property (nonatomic,readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<PXPlacesMapLayout> layout;                                          //@synthesize layout=_layout - In the implementation block
@property (readonly) id<PXPlacesMapUpdatePlan> updatePlan;                                  //@synthesize updatePlan=_updatePlan - In the implementation block
@property (readonly) id<PXPlacesMapRenderer> renderer;                                      //@synthesize renderer=_renderer - In the implementation block
@property (readonly) id<PXPlacesMapSelectionHandler> selectionHandler;                      //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (retain) PXPlacesImageCache * imageCache;                                         //@synthesize imageCache=_imageCache - In the implementation block
-(PXPlacesImageCache *)imageCache;
-(void)setImageCache:(PXPlacesImageCache *)arg1 ;
-(id<PXPlacesMapRenderer>)renderer;
-(id<PXPlacesMapUpdatePlan>)updatePlan;
-(id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4 ;
-(id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2 ;
-(id)executeRemoval;
-(id<PXPlacesMapSelectionHandler>)selectionHandler;
-(id<PXPlacesMapLayout>)layout;
-(void)cancel;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
@end

