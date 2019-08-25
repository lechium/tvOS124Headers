/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLHeaderElement.h>

@class NSArray;

@interface TVLHeaderWithCountAndButtonsElement : TVLHeaderElement {

	unsigned long long _count;
	NSArray* _buttons;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                     //@synthesize buttons=_buttons - In the implementation block
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
@end

