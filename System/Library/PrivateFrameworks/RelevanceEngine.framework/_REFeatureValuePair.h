/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REFeature, REFeatureValue, NSArray;

@interface _REFeatureValuePair : NSObject {

	REFeature* _feature;
	REFeatureValue* _value;
	unsigned long long _index;
	NSArray* _rootFeatures;

}

@property (nonatomic,readonly) REFeature * feature;                   //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSArray * rootFeatures;                //@synthesize rootFeatures=_rootFeatures - In the implementation block
-(REFeature *)feature;
-(NSArray *)rootFeatures;
-(id)initWithFeature:(id)arg1 value:(id)arg2 index:(unsigned long long)arg3 rootFeatures:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(REFeatureValue *)value;
-(unsigned long long)index;
@end
