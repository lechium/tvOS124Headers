/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneClient.h>
#import <libobjc.A.dylib/FBSceneHost.h>

@protocol FBUISceneHostProxy, FBSceneClient, FBUISceneClientDelegate;
@class NSString, FBSSceneSpecification;

@interface FBUISceneClientBridge : NSObject <FBUISceneClient, FBSceneHost> {

	NSString* _identifier;
	FBSSceneSpecification* _specification;
	id<FBUISceneHostProxy> _sceneHost;
	id<FBSceneClient> _legacyClient;
	id<FBUISceneClientDelegate> _delegate;

}

@property (__weak) id<FBUISceneHostProxy> sceneHost;                                         //@synthesize sceneHost=_sceneHost - In the implementation block
@property (retain) id<FBSceneClient> legacyClient;                                           //@synthesize legacyClient=_legacyClient - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneIdentifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * sceneSpecification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification; 
-(NSString *)sceneIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)client:(id)arg1 attachLayer:(id)arg2 ;
-(void)client:(id)arg1 updateLayer:(id)arg2 ;
-(void)client:(id)arg1 detachLayer:(id)arg2 ;
-(void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)client:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneHost:(id)arg1 ;
-(void)sceneHost:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sceneHost:(id)arg1 destroySceneWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sceneHost:(id)arg1 didReceiveActions:(id)arg2 ;
-(FBSSceneSpecification *)sceneSpecification;
-(void)setSceneHost:(id<FBUISceneHostProxy>)arg1 ;
-(id<FBSceneClient>)legacyClient;
-(void)setLegacyClient:(id<FBSceneClient>)arg1 ;
-(id<FBUISceneHostProxy>)sceneHost;
-(void)registerWithDelegate:(id)arg1 ;
-(void)sceneHost:(id)arg1 registerWithInitialParameters:(id)arg2 ;
-(void)clientWillInvalidate:(id)arg1 ;
-(id)initWithSceneIdentifier:(id)arg1 specification:(id)arg2 legacyClient:(id)arg3 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)description;
@end

