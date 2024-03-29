/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse {

	NSArray* _artworkOptions;
	NSArray* _nameOptions;
	NSArray* _priceOptions;

}

@property (nonatomic,copy,readonly) NSArray * artworkOptions;              //@synthesize artworkOptions=_artworkOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * nameOptions;                 //@synthesize nameOptions=_nameOptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * priceOptions;                //@synthesize priceOptions=_priceOptions - In the implementation block
-(NSArray *)artworkOptions;
-(NSArray *)nameOptions;
-(NSArray *)priceOptions;
-(id)initWithData:(id)arg1 ;
@end

