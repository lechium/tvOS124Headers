/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>

@class NSArray;

@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView {

	CGSize m_preferredSize;
	NSArray* _items;
	/*^block*/id _finishSplitTransitionBlock;

}

@property (nonatomic,copy) id finishSplitTransitionBlock;              //@synthesize finishSplitTransitionBlock=_finishSplitTransitionBlock - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)numberOfItems;
-(unsigned long long)defaultSelectedIndex;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(CGSize)preferredSize;
-(id)titleForItemAtIndex:(unsigned long long)arg1 ;
-(int)visibleItemForIndex:(unsigned long long)arg1 ;
-(void)setFinishSplitTransitionBlock:(id)arg1 ;
-(id)finishSplitTransitionBlock;
-(void)actionForItem:(id)arg1 ;
-(void)setSplitAndUndocked:(BOOL)arg1 ;
-(void)didFinishSplitTransition;
@end

