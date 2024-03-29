/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class NSString, NSNumber, HAPAccessory, NSArray, CBService;

@interface HAPService : HMFObject <HMFMerging> {

	NSString* _type;
	NSNumber* _instanceID;
	HAPAccessory* _accessory;
	NSArray* _characteristics;
	NSArray* _linkedServices;
	unsigned long long _serviceProperties;

}

@property (setter=setCBService:,nonatomic,retain) CBService * cbService; 
@property (nonatomic,retain) NSArray * linkedServices;                                //@synthesize linkedServices=_linkedServices - In the implementation block
@property (assign,nonatomic) unsigned long long serviceProperties;                    //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,copy) NSString * type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                     //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSArray * characteristics;                               //@synthesize characteristics=_characteristics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
-(id)propertiesDescription;
-(void)setServiceProperties:(unsigned long long)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 ;
-(BOOL)_updateAndValidateCharacteristics;
-(BOOL)_validateServiceCharacteristics;
-(BOOL)_updateCharacteristic:(id)arg1 ;
-(BOOL)_validateMandatoryCharacteristics;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 ;
-(id)characteristicsOfType:(id)arg1 ;
-(CBService *)cbService;
-(void)setCBService:(id)arg1 ;
-(HAPAccessory *)accessory;
-(NSNumber *)instanceID;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(NSArray *)linkedServices;
-(void)setLinkedServices:(NSArray *)arg1 ;
-(unsigned long long)serviceProperties;
-(void)setAccessory:(HAPAccessory *)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
@end

