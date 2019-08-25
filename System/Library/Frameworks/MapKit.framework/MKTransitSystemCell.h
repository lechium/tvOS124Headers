/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UIImageView, _MKUILabel, NSLayoutConstraint, NSString, UIImage;

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {

	UIImageView* _shieldImageView;
	_MKUILabel* _systemLabel;
	NSLayoutConstraint* _imageToLabelConstraint;
	NSLayoutConstraint* _systemLabelToTopConstraint;

}

@property (nonatomic,copy) NSString * systemName; 
@property (nonatomic,retain) UIImage * systemArtwork; 
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(UIImage *)systemArtwork;
-(void)setSystemArtwork:(UIImage *)arg1 ;
-(void)setSystemName:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)systemName;
@end

