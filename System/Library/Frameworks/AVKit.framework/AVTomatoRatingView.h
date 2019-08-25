/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AVTomatoRatingView : UIView {

	UIImageView* _tomatoRatingIcon;
	UILabel* _tomatoRatingLabel;
	float _tomatoRating;
	unsigned long long _tomatoFreshness;

}

@property (assign,nonatomic) float tomatoRating;                              //@synthesize tomatoRating=_tomatoRating - In the implementation block
@property (assign,nonatomic) unsigned long long tomatoFreshness;              //@synthesize tomatoFreshness=_tomatoFreshness - In the implementation block
-(void)setTomatoFreshness:(unsigned long long)arg1 ;
-(void)setTomatoRating:(float)arg1 ;
-(float)tomatoRating;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)tomatoFreshness;
@end

