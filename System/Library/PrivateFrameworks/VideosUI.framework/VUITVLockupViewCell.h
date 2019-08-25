/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class _TVStackingPosterView, UIImage, NSString;

@interface VUITVLockupViewCell : TVContainerCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	_TVStackingPosterView* _stackingPosterView;
	UIImage* _placeholderImage;
	NSString* _placeholderImageString;

}

@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;              //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) NSString * placeholderImageString;                       //@synthesize placeholderImageString=_placeholderImageString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 artworkDictionary:(id)arg4 forMetrics:(BOOL)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(id)_placeholderImageWithLayout:(id)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(_TVStackingPosterView *)stackingPosterView;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(id)selectingView;
-(NSString *)placeholderImageString;
-(void)setPlaceholderImageString:(NSString *)arg1 ;
@end

