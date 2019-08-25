/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UIDynamicItem.h>

@protocol OKDynamicItemProxiedObject;
@class UIBezierPath, UIDynamicItemBehavior, NSArray, NSString;

@interface OKDynamicItemProxy : NSObject <UIDynamicItem> {

	BOOL _enabled;
	BOOL _gravityDisabled;
	id<OKDynamicItemProxiedObject> _proxiedObject;
	UIDynamicItemBehavior* _bodyBehavior;
	NSArray* _collisionGroups;
	NSArray* _attachmentBehaviors;
	NSArray* _pushGroups;
	CGPoint _center;
	CGRect _bounds;
	CGAffineTransform _transform;

}

@property (readonly) id<OKDynamicItemProxiedObject> proxiedObject;                  //@synthesize proxiedObject=_proxiedObject - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL gravityDisabled;                                  //@synthesize gravityDisabled=_gravityDisabled - In the implementation block
@property (readonly) UIDynamicItemBehavior * bodyBehavior;                          //@synthesize bodyBehavior=_bodyBehavior - In the implementation block
@property (nonatomic,retain) NSArray * collisionGroups;                             //@synthesize collisionGroups=_collisionGroups - In the implementation block
@property (nonatomic,retain) NSArray * attachmentBehaviors;                         //@synthesize attachmentBehaviors=_attachmentBehaviors - In the implementation block
@property (nonatomic,retain) NSArray * pushGroups;                                  //@synthesize pushGroups=_pushGroups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center;                                        //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                       //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(void)resetInitialValues;
-(BOOL)gravityDisabled;
-(UIDynamicItemBehavior *)bodyBehavior;
-(NSArray *)attachmentBehaviors;
-(NSArray *)collisionGroups;
-(NSArray *)pushGroups;
-(id<OKDynamicItemProxiedObject>)proxiedObject;
-(id)initWithProxiedObject:(id)arg1 ;
-(void)enforceInitialCenter:(CGPoint)arg1 size:(CGSize)arg2 andTransform:(CGAffineTransform)arg3 ;
-(void)setProxiedObject:(id<OKDynamicItemProxiedObject>)arg1 ;
-(void)setGravityDisabled:(BOOL)arg1 ;
-(void)setCollisionGroups:(NSArray *)arg1 ;
-(void)setAttachmentBehaviors:(NSArray *)arg1 ;
-(void)setPushGroups:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)bounds;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(BOOL)enabled;
@end

