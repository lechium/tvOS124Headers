/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBUISceneWorkspace.h>

@protocol FBUISceneWorkspace <NSObject>
@required
-(id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2;
-(id)identifier;

@end


@class NSString, NSMutableDictionary, NSSet;

@interface FBUISceneWorkspace : NSObject <BSDescriptionProviding, FBUISceneWorkspace> {

	BOOL _valid;
	NSString* _identifier;
	NSMutableDictionary* _scenesByName;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)scenes;
-(void)activateScene:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)deactivateScene:(id)arg1 ;
-(void)destroyScene:(id)arg1 ;
-(id)sceneWithName:(id)arg1 ;
-(id)createSceneWithName:(id)arg1 specification:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)callOutQueue;
-(id)sceneManager:(id)arg1 surrogateForSceneWithIdentifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)description;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
@end
