/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {

	BOOL _invalidateLayout;
	BOOL _invalidateVerticalBumps;
	NSIndexPath* _focusedItemIndexPath;

}

@property (assign,nonatomic) BOOL invalidateLayout;                           //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL invalidateVerticalBumps;                    //@synthesize invalidateVerticalBumps=_invalidateVerticalBumps - In the implementation block
@property (nonatomic,retain) NSIndexPath * focusedItemIndexPath;              //@synthesize focusedItemIndexPath=_focusedItemIndexPath - In the implementation block
-(void)setInvalidateVerticalBumps:(BOOL)arg1 ;
-(void)setFocusedItemIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)invalidateVerticalBumps;
-(NSIndexPath *)focusedItemIndexPath;
-(BOOL)invalidateLayout;
-(void)setInvalidateLayout:(BOOL)arg1 ;
@end

