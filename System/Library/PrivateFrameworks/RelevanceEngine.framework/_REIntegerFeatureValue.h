/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureValue.h>

@interface _REIntegerFeatureValue : REFeatureValue {

	unsigned long long _value;

}
+(id)featureValueWithInt64:(long long)arg1 ;
-(id)initWithValue:(long long)arg1 ;
-(unsigned long long)int64Value;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
@end

