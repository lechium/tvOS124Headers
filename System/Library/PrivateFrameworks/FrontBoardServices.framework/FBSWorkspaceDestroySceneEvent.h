/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneTransitionContext;

@interface FBSWorkspaceDestroySceneEvent : FBSWorkspaceSceneEvent {

	FBSSceneTransitionContext* _transitionContext;

}

@property (nonatomic,retain) FBSSceneTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
-(FBSSceneTransitionContext *)transitionContext;
-(void)setTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

