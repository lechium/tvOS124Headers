/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class _MKUILabel, UIImageView, NSLayoutConstraint, NSDate, NSString, UIImage;

@interface MKTransitIncidentSummaryCell : MKTableViewCell {

	_MKUILabel* _titleLabel;
	_MKUILabel* _summaryLabel;
	_MKUILabel* _startedLabel;
	UIImageView* _iconImageView;
	NSLayoutConstraint* _titleToTopConstraint;
	NSLayoutConstraint* _summaryToTitleConstraint;
	NSLayoutConstraint* _startedToSummaryConstraint;
	NSDate* _startDate;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) UIImage * icon; 
-(NSDate *)startDate;
-(NSString *)summary;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setConstraints;
-(void)setSummary:(NSString *)arg1 ;
-(void)_updateStartLabel;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)didMoveToWindow;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

