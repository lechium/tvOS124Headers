/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSDictionary, UIColor;

@interface TVLTableColumnDefinitionElement : TVLElement {

	int _width;
	NSString* _title;
	NSString* _alignment;
	NSDictionary* _styleKeyValues;

}

@property (nonatomic,retain) NSDictionary * styleKeyValues;              //@synthesize styleKeyValues=_styleKeyValues - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * alignment;                         //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) int width;                                  //@synthesize width=_width - In the implementation block
@property (nonatomic,retain,readonly) UIColor * titleColor; 
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSDictionary *)styleKeyValues;
-(void)setStyleKeyValues:(NSDictionary *)arg1 ;
-(NSString *)alignment;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setAlignment:(NSString *)arg1 ;
-(int)width;
-(void)setWidth:(int)arg1 ;
-(UIColor *)titleColor;
@end

