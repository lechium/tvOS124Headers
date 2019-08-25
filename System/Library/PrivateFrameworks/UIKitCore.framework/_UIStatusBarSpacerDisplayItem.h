/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDisplayItem.h>

@class UILayoutGuide, NSArray;

@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem {

	UILayoutGuide* _layoutGuide;
	NSArray* _constraints;
	CGSize _size;

}

@property (nonatomic,retain) UILayoutGuide * layoutGuide;              //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                    //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(NSArray *)constraints;
-(void)setContainerView:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)applyUpdate:(id)arg1 ;
-(void)_applyConstraintsIfNeeded;
-(UILayoutGuide *)layoutGuide;
@end

