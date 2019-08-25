/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSAppInstallationInfoCenter;

@interface VSSubscriptionPredicateFactory : NSObject {

	VSAppInstallationInfoCenter* _appInstallationInfoCenter;

}

@property (nonatomic,retain) VSAppInstallationInfoCenter * appInstallationInfoCenter;              //@synthesize appInstallationInfoCenter=_appInstallationInfoCenter - In the implementation block
+(id)_subscriptionSourcePredicateTemplateValues;
+(id)_subscriptionSourceKindPredicateTemplateValues;
+(id)_subscriptionPredicateTemplateValues;
-(id)_predicateTemplateForSourceKind:(long long)arg1 ;
-(id)_predicateTemplateForSourceIdentifier:(id)arg1 ;
-(id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)_predicateTemplateForSourceOfTask:(id)arg1 ;
-(id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2 ;
-(id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(VSAppInstallationInfoCenter *)appInstallationInfoCenter;
-(id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2 ;
-(id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2 ;
-(id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2 ;
-(id)allowedSubscriptionsPredicateForTask:(id)arg1 ;
-(id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2 ;
-(void)setAppInstallationInfoCenter:(VSAppInstallationInfoCenter *)arg1 ;
@end

