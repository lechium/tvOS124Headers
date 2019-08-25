/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, TVLXMLElement;

@interface TVLInterstitialGroupElement : TVLRootElement {

	NSArray* _interstitials;
	TVLXMLElement* _xml;

}

@property (nonatomic,retain) NSArray * interstitials;                   //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain,readonly) TVLXMLElement * xml;              //@synthesize xml=_xml - In the implementation block
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLXMLElement *)xml;
-(BOOL)isEqual:(id)arg1 ;
@end
