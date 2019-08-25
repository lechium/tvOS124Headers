/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class REFeature, REFeatureValue;

@interface REFeatureValuePair : NSObject <NSCopying> {

	REFeature* _feature;
	REFeatureValue* _value;

}

@property (nonatomic,readonly) REFeature * feature;                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) REFeatureValue * value;              //@synthesize value=_value - In the implementation block
-(REFeature *)feature;
-(id)initWithFeature:(id)arg1 value:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeatureValue *)value;
@end
