/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSArray, NSString;

@interface TVLShelfElement : TVLElement {

	BOOL _center;
	int _columnCount;
	NSArray* _sections;
	NSString* _onItemFocused;

}

@property (assign,nonatomic) int columnCount;                     //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) BOOL center;                         //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * onItemFocused;              //@synthesize onItemFocused=_onItemFocused - In the implementation block
-(void)setColumnCount:(int)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSString *)onItemFocused;
-(void)setOnItemFocused:(NSString *)arg1 ;
-(int)columnCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setCenter:(BOOL)arg1 ;
-(BOOL)center;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
@end
