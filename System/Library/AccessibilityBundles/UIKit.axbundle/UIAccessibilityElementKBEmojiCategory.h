/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface UIAccessibilityElementKBEmojiCategory : UIAccessibilityElement {

	id _category;
	id _categoryView;
	unsigned long long _categoryIndex;

}

@property (nonatomic,retain) id category;                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) id categoryView;                               //@synthesize categoryView=_categoryView - In the implementation block
@property (assign,nonatomic) unsigned long long categoryIndex;              //@synthesize categoryIndex=_categoryIndex - In the implementation block
-(unsigned long long)categoryIndex;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(id)categoryView;
-(void)setCategoryView:(id)arg1 ;
@end
