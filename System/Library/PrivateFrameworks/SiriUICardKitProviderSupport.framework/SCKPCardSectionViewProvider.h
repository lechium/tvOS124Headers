/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard;
@class NSArray, NSString;

@interface SCKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	id<CRCard> _card;
	NSArray* _viewConfigurations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card;                                 //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                    //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(id)initWithCard:(id)arg1 ;
-(id<CRCard>)card;
-(NSArray *)viewConfigurations;
-(NSString *)providerIdentifier;
@end
