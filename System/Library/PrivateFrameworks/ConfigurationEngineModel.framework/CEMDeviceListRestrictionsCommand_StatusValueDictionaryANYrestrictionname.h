/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber;

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionaryANYrestrictionname : CEMPayloadBase {

	NSNumber* _statusValue;

}

@property (nonatomic,copy) NSNumber * statusValue;              //@synthesize statusValue=_statusValue - In the implementation block
+(id)allowedStatusKeys;
+(id)buildWithValue:(id)arg1 ;
+(id)buildRequiredOnlyWithValue:(id)arg1 ;
-(NSNumber *)statusValue;
-(void)setStatusValue:(NSNumber *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

