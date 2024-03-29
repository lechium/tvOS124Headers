/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>

@protocol FBSceneLayerHostContainerViewDataSource;
@class FBScene, NSMutableArray, NSArray, NSString;

@interface FBSceneLayerHostContainerView : UIView <FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {

	FBScene* _scene;
	id<FBSceneLayerHostContainerViewDataSource> _dataSource;
	NSMutableArray* _hostViews;
	NSMutableArray* _hostedLayers;
	BOOL _clippingDisabled;

}

@property (nonatomic,readonly) FBScene * scene;                                                          //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) NSArray * hostedLayers;                                                   //@synthesize hostedLayers=_hostedLayers - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneLayerHostContainerViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                            //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isHosting;
-(void)_rebuildLayers;
-(void)_updateRenderingMode;
-(id)_createHostViewForLayer:(id)arg1 ;
-(void)_adjustHostViewFrame:(id)arg1 ;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)rebuildLayers;
-(void)updateRenderingMode;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(NSArray *)hostedLayers;
-(BOOL)isClippingDisabled;
-(id)init;
-(void)dealloc;
-(id)window;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(id<FBSceneLayerHostContainerViewDataSource>)dataSource;
-(void)setDataSource:(id<FBSceneLayerHostContainerViewDataSource>)arg1 ;
-(BOOL)hasContent;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
@end

