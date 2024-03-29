/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	BOOL _unreleasedHighlight;
	UILabel* _unreleasedBanner;
	UIKeyboardEmoji* _emoji;

}

@property (nonatomic,retain) UILabel * unreleasedBanner;              //@synthesize unreleasedBanner=_unreleasedBanner - In the implementation block
@property (nonatomic,copy) UIKeyboardEmoji * emoji;                   //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
@property (assign,nonatomic) BOOL unreleasedHighlight;                //@synthesize unreleasedHighlight=_unreleasedHighlight - In the implementation block
-(id)debugDescription;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(void)setUnreleasedHighlight:(BOOL)arg1 ;
-(UILabel *)unreleasedBanner;
-(long long)emojiFontSize;
-(void)setUnreleasedBanner:(UILabel *)arg1 ;
-(BOOL)unreleasedHighlight;
@end

