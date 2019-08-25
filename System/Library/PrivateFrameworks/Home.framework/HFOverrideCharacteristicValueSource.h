/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFCharacteristicValueSource.h>

@protocol HFCharacteristicValueSource, HFOverrideCharacteristicValueProvider;
@class NSString;

@interface HFOverrideCharacteristicValueSource : NSObject <HFCharacteristicValueSource> {

	id<HFCharacteristicValueSource> _originalValueSource;
	id<HFOverrideCharacteristicValueProvider> _overrideValueProvider;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> originalValueSource;                               //@synthesize originalValueSource=_originalValueSource - In the implementation block
@property (assign,nonatomic,__weak) id<HFOverrideCharacteristicValueProvider> overrideValueProvider;              //@synthesize overrideValueProvider=_overrideValueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
+(id)na_identity;
-(id)readValuesForCharacteristics:(id)arg1 ;
-(id)writeValuesForCharacteristics:(id)arg1 ;
-(void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3 ;
-(void)commitTransactionWithReason:(id)arg1 ;
-(id)cachedValueForCharacteristic:(id)arg1 ;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2 ;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1 ;
-(id<HFOverrideCharacteristicValueProvider>)overrideValueProvider;
-(id<HFCharacteristicValueSource>)originalValueSource;
-(id)initWithOriginalValueSource:(id)arg1 overrideValueProvider:(id)arg2 ;
-(void)setOverrideValueProvider:(id<HFOverrideCharacteristicValueProvider>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
