/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMapTable;


@protocol _UIOLAPropertySource <_UILAPropertySource>
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,nonatomic) long long distribution; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged; 
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged; 
@property (nonatomic,readonly) NSMapTable * customSpacings; 
@required
-(void)setDistribution:(long long)arg1;
-(long long)distribution;
-(void)setSpacing:(double)arg1;
-(void)setBaselineRelativeArrangement:(BOOL)arg1;
-(void)_setItemOrderingChanged:(BOOL)arg1;
-(void)_setItemFittingSizeChanged:(BOOL)arg1;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
-(double)customSpacingAfterItem:(id)arg1;
-(double)spacing;
-(BOOL)isBaselineRelativeArrangement;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(NSMapTable *)customSpacings;

@end

