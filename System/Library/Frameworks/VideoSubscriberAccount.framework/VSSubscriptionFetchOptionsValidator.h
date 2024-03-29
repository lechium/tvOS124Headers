/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject {

	VSSubscriptionPredicateFactory* _predicateFactory;

}

@property (nonatomic,retain) VSSubscriptionPredicateFactory * predicateFactory;              //@synthesize predicateFactory=_predicateFactory - In the implementation block
-(VSSubscriptionPredicateFactory *)predicateFactory;
-(id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1 ;
-(id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2 ;
-(void)setPredicateFactory:(VSSubscriptionPredicateFactory *)arg1 ;
@end

