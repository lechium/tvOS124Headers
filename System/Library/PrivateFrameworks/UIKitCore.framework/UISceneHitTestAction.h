/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <BaseBoard/BSAction.h>

@interface UISceneHitTestAction : BSAction

@property (nonatomic,readonly) CGPoint touchLocation; 
-(long long)UIActionType;
-(void)sendResponse:(id)arg1 ;
-(id)initWithTouchLocation:(CGPoint)arg1 responseHandler:(/*^block*/id)arg2 ;
-(CGPoint)touchLocation;
@end

