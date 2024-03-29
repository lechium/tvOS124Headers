/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class HMFUnfairLock, NSDate, NSNumber, NSString, HAPService, HAPCharacteristicMetadata, CBCharacteristic;

@interface HAPCharacteristic : HMFObject <HMFMerging> {

	HMFUnfairLock* _lock;
	BOOL _eventNotificationsEnabled;
	BOOL _shouldValidateValueAfterReading;
	NSDate* _valueUpdatedTime;
	id _value;
	NSNumber* _stateNumber;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned long long _properties;
	HAPCharacteristicMetadata* _metadata;
	HAPCharacteristicMetadata* _accessoryMetadata;

}

@property (setter=setCBCharacteristic:,nonatomic,retain) CBCharacteristic * cbCharacteristic; 
@property (nonatomic,copy) NSString * type;                                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                                          //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                                                  //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                                                //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL eventNotificationsEnabled;                                               //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,copy) HAPCharacteristicMetadata * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) HAPCharacteristicMetadata * accessoryMetadata;                              //@synthesize accessoryMetadata=_accessoryMetadata - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                                                    //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (assign,nonatomic) BOOL shouldValidateValueAfterReading;                                         //@synthesize shouldValidateValueAfterReading=_shouldValidateValueAfterReading - In the implementation block
@property (setter=setValue:,nonatomic,copy) id value;                                                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                                                     //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) BOOL supportsAdditionalAuthorizationData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HAPCharacteristicMetadata *)metadata;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(HAPService *)service;
-(void)setService:(HAPService *)arg1 ;
-(id)propertiesDescription;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(void)setEventNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldValidateValueAfterReading;
-(BOOL)eventNotificationsEnabled;
-(BOOL)isEqualToCharacteristic:(id)arg1 ;
-(void)setShouldValidateValueAfterReading:(BOOL)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(BOOL)arg6 metadata:(id)arg7 ;
-(HAPCharacteristicMetadata *)accessoryMetadata;
-(CBCharacteristic *)cbCharacteristic;
-(void)setCBCharacteristic:(id)arg1 ;
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData;
-(NSNumber *)instanceID;
-(NSNumber *)stateNumber;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(void)setStateNumber:(NSNumber *)arg1 ;
-(NSDate *)valueUpdatedTime;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(unsigned long long)properties;
@end

