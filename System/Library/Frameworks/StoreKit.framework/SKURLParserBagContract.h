/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSURLParserBagContract.h>

@class AMSBagValue, SSURLBag, NSString;

@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract> {

	SSURLBag* _bag;

}

@property (nonatomic,retain) SSURLBag * bag;                                     //@synthesize bag=_bag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AMSBagValue * commerceUIURLPatterns; 
+(id)sharedContract;
-(SSURLBag *)bag;
-(void)setBag:(SSURLBag *)arg1 ;
-(AMSBagValue *)commerceUIURLPatterns;
-(id)init;
@end

