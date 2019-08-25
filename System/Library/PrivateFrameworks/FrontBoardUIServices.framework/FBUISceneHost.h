/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBUISceneHost.h>

@protocol FBUISceneHost <FBUISceneHostProxy>
@required
-(id)sceneClient;
-(void)registerSceneClient:(id)arg1;
-(void)invalidateSceneClient;

@end

#import <libobjc.A.dylib/FBUISceneUpdater.h>

@protocol FBUISceneClientProxy;
@class NSString, FBSSceneSpecification;

@interface FBUISceneHost : NSObject <FBUISceneHost, FBUISceneUpdater> {

	NSString* _identifier;
	FBSSceneSpecification* _specification;
	id<FBUISceneClientProxy> _sceneClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sceneIdentifier;
-(id)initWithIdentifier:(id)arg1 specification:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)sceneClient;
-(id)sceneSpecification;
-(void)sceneClient:(id)arg1 didAttachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didDetachLayer:(id)arg2 ;
-(void)sceneClient:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneClient:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)didInvalidateSceneClient:(id)arg1 ;
-(void)registerSceneClient:(id)arg1 ;
-(void)invalidateSceneClient;
-(void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)description;
-(id)contentView;
-(void)sendActions:(id)arg1 ;
@end

