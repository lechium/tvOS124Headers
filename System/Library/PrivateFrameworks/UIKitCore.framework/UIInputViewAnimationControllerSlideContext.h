/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, UIInputViewSetPlacement;

@interface UIInputViewAnimationControllerSlideContext : NSObject {

	UIView* _snapshot;
	UIInputViewSetPlacement* _endPlacement;
	CGRect _snapshotEndFrame;

}

@property (nonatomic,retain) UIView * snapshot;                                   //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) CGRect snapshotEndFrame;                             //@synthesize snapshotEndFrame=_snapshotEndFrame - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * endPlacement;              //@synthesize endPlacement=_endPlacement - In the implementation block
-(void)dealloc;
-(UIView *)snapshot;
-(void)setSnapshot:(UIView *)arg1 ;
-(void)setSnapshotEndFrame:(CGRect)arg1 ;
-(void)setEndPlacement:(UIInputViewSetPlacement *)arg1 ;
-(CGRect)snapshotEndFrame;
-(UIInputViewSetPlacement *)endPlacement;
@end
