/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition {

	BOOL _contains;
	REFeature* _feature;

}

@property (nonatomic,readonly) REFeature * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) BOOL contains;                    //@synthesize contains=_contains - In the implementation block
-(REFeature *)feature;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)_dependentFeatures;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(id)initWithFeature:(id)arg1 contains:(BOOL)arg2 ;
-(BOOL)contains;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

