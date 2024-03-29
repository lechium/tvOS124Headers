/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneManagerInternalObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@protocol FBSceneMonitorDelegate;
@class FBScene, NSString, NSMutableSet, NSMutableDictionary, FBSSceneClientSettingsDiffInspector, FBSMutableSceneSettings, FBSceneMonitorBehaviors, FBSSceneSettings;

@interface FBSceneMonitor : NSObject <FBSceneManagerInternalObserver, FBSceneLayerManagerObserver, FBSceneMonitorDelegate> {

	FBScene* _scene;
	NSString* _sceneID;
	NSMutableSet* _externalSceneIDs;
	NSMutableSet* _pairedExternalSceneIDs;
	NSMutableDictionary* _monitorsBySceneID;
	FBSSceneClientSettingsDiffInspector* _diffInspector;
	FBSMutableSceneSettings* _sceneSettings;
	FBSMutableSceneSettings* _effectiveSettings;
	FBSceneMonitorBehaviors* _givenMonitorBehaviors;
	FBSceneMonitorBehaviors* _delegateMonitorBehaviors;
	FBSceneMonitorBehaviors* _effectiveMonitorBehaviors;
	BOOL _invalidated;
	BOOL _isSynchronizing;
	BOOL _updateSettingsAfterSync;
	BOOL _updateExternalScenesAfterSync;
	id<FBSceneMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) FBScene * scene;                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                                //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic,__weak) id<FBSceneMonitorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSceneMonitorBehaviors * behaviors;                        //@synthesize givenMonitorBehaviors=_givenMonitorBehaviors - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * sceneSettings;                       //@synthesize sceneSettings=_sceneSettings - In the implementation block
@property (nonatomic,readonly) FBSSceneSettings * effectiveSceneSettings;              //@synthesize effectiveSettings=_effectiveSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sceneID;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)_updateScenePairingState:(BOOL)arg1 ;
-(void)_evaluateEffectiveMonitorBehaviors;
-(id)initWithSceneID:(id)arg1 ;
-(id)_initWithSceneManager:(id)arg1 sceneID:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)_updateAllSceneStateIgnoringDelegate;
-(void)_setEffectiveMonitorBehaviors:(id)arg1 ;
-(void)_updateSceneSettings:(BOOL)arg1 ;
-(void)_updateExternalScenes:(BOOL)arg1 ;
-(void)_updateEffectiveSceneSettings:(BOOL)arg1 ;
-(FBSSceneSettings *)effectiveSceneSettings;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 updateForScene:(id)arg2 appliedWithContext:(id)arg3 ;
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1 ;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1 ;
-(BOOL)isPairedWithExternalSceneID:(id)arg1 ;
-(id)_effectiveBehaviors;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(FBSSceneSettings *)sceneSettings;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<FBSceneMonitorDelegate>)arg1 ;
-(id<FBSceneMonitorDelegate>)delegate;
-(void)invalidate;
-(FBScene *)scene;
-(id)initWithScene:(id)arg1 ;
-(FBSceneMonitorBehaviors *)behaviors;
-(void)setBehaviors:(FBSceneMonitorBehaviors *)arg1 ;
@end

