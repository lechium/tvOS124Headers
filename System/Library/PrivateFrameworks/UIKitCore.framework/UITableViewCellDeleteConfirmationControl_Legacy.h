/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl {

	BOOL _visible;
	UITableViewCellDeleteConfirmationGestureRecognizer* _deleteConfirmationGesture;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible; 
+(CGSize)defaultSizeForTitle:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isVisible;
-(id)initWithTitle:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)defaultSize;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_confirmationAnimationDidEnd;
-(void)touchUpInside:(id)arg1 ;
-(void)touchUpOutside:(id)arg1 ;
-(void)cancelDeleteConfirmationWithGesture:(id)arg1 ;
@end

