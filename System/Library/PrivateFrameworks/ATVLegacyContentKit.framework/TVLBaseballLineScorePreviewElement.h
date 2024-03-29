/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, NSString, TVLTableElement;

@interface TVLBaseballLineScorePreviewElement : TVLElement {

	NSArray* _banners;
	NSString* _leftLabel;
	NSString* _rightLabel;
	TVLTableElement* _teamsTable;
	TVLTableElement* _inningsTable;
	TVLTableElement* _summaryTable;

}

@property (nonatomic,copy) NSArray * banners;                             //@synthesize banners=_banners - In the implementation block
@property (nonatomic,copy) NSString * leftLabel;                          //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,copy) NSString * rightLabel;                         //@synthesize rightLabel=_rightLabel - In the implementation block
@property (nonatomic,retain) TVLTableElement * teamsTable;                //@synthesize teamsTable=_teamsTable - In the implementation block
@property (nonatomic,retain) TVLTableElement * inningsTable;              //@synthesize inningsTable=_inningsTable - In the implementation block
@property (nonatomic,retain) TVLTableElement * summaryTable;              //@synthesize summaryTable=_summaryTable - In the implementation block
-(NSString *)leftLabel;
-(NSString *)rightLabel;
-(void)setLeftLabel:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setRightLabel:(NSString *)arg1 ;
-(void)setTeamsTable:(TVLTableElement *)arg1 ;
-(void)setInningsTable:(TVLTableElement *)arg1 ;
-(void)setSummaryTable:(TVLTableElement *)arg1 ;
-(TVLTableElement *)teamsTable;
-(TVLTableElement *)inningsTable;
-(TVLTableElement *)summaryTable;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)banners;
-(void)setBanners:(NSArray *)arg1 ;
@end

