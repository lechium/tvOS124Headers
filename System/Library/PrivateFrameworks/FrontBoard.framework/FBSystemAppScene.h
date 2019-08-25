/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSScene.h>
#import <libobjc.A.dylib/FBSSceneDelegate.h>

@protocol FBSSceneDelegate;
@class FBSSceneImpl, NSString;

@interface FBSystemAppScene : FBSScene <FBSSceneDelegate> {

	FBSSceneImpl* _scene;
	id<FBSSceneDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithSceneImpl:(id)arg1 ;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(id)snapshotRequest;
-(id)identifier;
-(NSString *)description;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)detachContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(id)settings;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)clientSettings;
-(id)layers;
-(void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)scene:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(void)sendActions:(id)arg1 ;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
@end

