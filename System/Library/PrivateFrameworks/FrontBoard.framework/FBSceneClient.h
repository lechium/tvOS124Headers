/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneClient <NSObject>
@required
-(void)host:(id)arg1 configureWithDefinition:(id)arg2 parameters:(id)arg3;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)host:(id)arg1 didReceiveActions:(id)arg2;

@end

