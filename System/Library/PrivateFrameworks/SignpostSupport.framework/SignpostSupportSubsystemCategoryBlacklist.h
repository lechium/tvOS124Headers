/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostSupportSubsystemCategoryFilter.h>

@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter
-(id)initWithEntries:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
@end
