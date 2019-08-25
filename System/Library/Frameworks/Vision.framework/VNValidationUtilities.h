/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VNValidationUtilities : NSObject
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)getArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 requiredMinimumCount:(unsigned long long)arg5 allowedMaximumCount:(unsigned long long)arg6 error:(id*)arg7 ;
+(BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(id)requiredFaceObservationInOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateFaceprintedFaceObservation:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateArray:(id)arg1 named:(id)arg2 hasElementsOfClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)validateOptionalFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateRequiredFaceObservations:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateFaceObservations:(id)arg1 withMinimumCount:(unsigned long long)arg2 forOptionalRequest:(id)arg3 error:(id*)arg4 ;
+(BOOL)getNSUIntegerValue:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)validateClassArray:(id)arg1 named:(id)arg2 hasElementsAncestoredFromClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)validateRequiredFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateOptionalFaceObservations:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateRequiredClusterIDs:(id)arg1 error:(id*)arg2 ;
+(id)requiredArrayForKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(id*)arg4 ;
+(id)requiredInputFacesArrayInOptions:(id)arg1 error:(id*)arg2 ;
@end
