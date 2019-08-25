/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable>
@property (nonatomic,readonly) id<HFCharacteristicOperationContextProviding> contextProvider; 
@optional
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(id)cachedErrorForExecutionOfActionSet:(id)arg1;
-(id)cachedErrorForWriteToCharacteristic:(id)arg1;

@required
-(id)readValuesForCharacteristics:(id)arg1;
-(id)writeValuesForCharacteristics:(id)arg1;
-(id)cachedValueForCharacteristic:(id)arg1;
-(id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;

@end

