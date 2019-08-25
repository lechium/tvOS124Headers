/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject {

	long long _service;
	STContactAddress* _initiatorAddress;
	STContactAddress* _recipientAddress;

}
+(BOOL)supportsSecureCoding;
-(long long)service;
-(void)setService:(long long)arg1 ;
-(id)_aceContextObjectValue;
-(id)initiatorAddress;
-(void)setInitiatorAddress:(id)arg1 ;
-(void)setRecipientAddress:(id)arg1 ;
-(id)recipientAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
