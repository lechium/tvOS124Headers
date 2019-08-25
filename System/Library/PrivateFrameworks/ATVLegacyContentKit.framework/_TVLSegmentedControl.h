/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface _TVLSegmentedControl : UIView {

	NSArray* _items;
	long long _selectedIndex;

}

@property (nonatomic,retain) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(void)enumerateLabelFramesWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
@end
