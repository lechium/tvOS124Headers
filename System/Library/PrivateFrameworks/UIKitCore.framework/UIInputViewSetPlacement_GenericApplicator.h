/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInputViewSetPlacementApplicator.h>

@protocol UIInputViewSetPlacementOwner;
@class NSArray, UIView, NSLayoutConstraint, NSString;

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {

	NSLayoutConstraint* _horizontalConstraint;
	NSLayoutConstraint* _verticalConstraint;
	NSLayoutConstraint* _widthConstraint;
	id<UIInputViewSetPlacementOwner> _owner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CGPoint origin; 
@property (retain,readonly) NSArray * constraints; 
@property (retain,readonly) UIView * draggableView; 
@property (readonly) UIEdgeInsets contentInsets; 
+(id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSArray *)constraints;
-(void)invalidate;
-(void)prepare;
-(CGPoint)origin;
-(UIEdgeInsets)contentInsets;
-(CGRect)targetRect;
-(id)initForOwner:(id)arg1 withPlacement:(id)arg2 ;
-(UIView *)draggableView;
-(void)checkVerticalConstraint;
-(BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2 ;
-(BOOL)isGesture:(id)arg1 inDraggableView:(CGPoint)arg2 ;
-(BOOL)allConstraintsActive;
-(void)applyChanges:(id)arg1 ;
@end
