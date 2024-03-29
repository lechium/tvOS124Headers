/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedVector3 : MDLAnimatedValue
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(2)float3AtTime:(double)arg1 ;
-(2)double3AtTime:(double)arg1 ;
-(VtValue=aligned_storage_imp<8, 8>=(data_t=[8c]a8)}TfPointerAndBits<const VtValue::_TypeInfo>=_TypeInfo}}}Ref)defaultVtValue;
-(unsigned long long)getDouble3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloat3:(double)arg1 ;
-(void)setDouble3:(double)arg1 ;
-(void)resetWithFloat3Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDouble3Array:(const 1*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)getFloat3Array:(1*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)precision;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

