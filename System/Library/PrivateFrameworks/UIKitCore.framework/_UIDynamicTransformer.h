/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSString, UIBezierPath;

@interface _UIDynamicTransformer : NSObject <UIDynamicItem> {

	CGPoint _center;
	/*^block*/id _action;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(id)initWithActionBlock:(/*^block*/id)arg1 ;
@end
