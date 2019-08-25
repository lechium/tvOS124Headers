/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSEncryptedMessageSizeMetric : NSObject <CUTRTCMetric> {

	long long _unencryptedPayloadMessageSize;
	long long _encryptedPayloadMessageSize;
	long long _maxMessageSize;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned short rtcType; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) long long unencryptedPayloadMessageSize;              //@synthesize unencryptedPayloadMessageSize=_unencryptedPayloadMessageSize - In the implementation block
@property (nonatomic,readonly) long long encryptedPayloadMessageSize;                //@synthesize encryptedPayloadMessageSize=_encryptedPayloadMessageSize - In the implementation block
@property (nonatomic,readonly) long long maxMessageSize;                             //@synthesize maxMessageSize=_maxMessageSize - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)rtcType;
-(long long)unencryptedPayloadMessageSize;
-(long long)encryptedPayloadMessageSize;
-(long long)maxMessageSize;
-(id)initWithUnencryptedPayloadMessageSize:(long long)arg1 encryptedPayloadMessageSize:(long long)arg2 maxMessageSize:(long long)arg3 serviceName:(id)arg4 ;
-(NSString *)name;
-(NSString *)serviceName;
-(NSDictionary *)dictionaryRepresentation;
@end

