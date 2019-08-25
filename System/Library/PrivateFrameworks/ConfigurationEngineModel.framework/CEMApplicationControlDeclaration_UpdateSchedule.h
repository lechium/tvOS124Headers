/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMApplicationControlDeclaration_UpdateSchedule : CEMPayloadBase {

	NSString* _payloadMode;
	NSNumber* _payloadDuration;
	NSString* _payloadStartTime;
	NSString* _payloadEndTime;

}

@property (nonatomic,copy) NSString * payloadMode;                   //@synthesize payloadMode=_payloadMode - In the implementation block
@property (nonatomic,copy) NSNumber * payloadDuration;               //@synthesize payloadDuration=_payloadDuration - In the implementation block
@property (nonatomic,copy) NSString * payloadStartTime;              //@synthesize payloadStartTime=_payloadStartTime - In the implementation block
@property (nonatomic,copy) NSString * payloadEndTime;                //@synthesize payloadEndTime=_payloadEndTime - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4 ;
+(id)buildRequiredOnlyWithMode:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadMode:(NSString *)arg1 ;
-(void)setPayloadDuration:(NSNumber *)arg1 ;
-(void)setPayloadStartTime:(NSString *)arg1 ;
-(void)setPayloadEndTime:(NSString *)arg1 ;
-(NSString *)payloadMode;
-(NSNumber *)payloadDuration;
-(NSString *)payloadStartTime;
-(NSString *)payloadEndTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

