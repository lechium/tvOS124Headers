/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {

	STCall* _call;

}
+(BOOL)supportsSecureCoding;
-(id)call;
-(id)createResponse;
-(id)_initWithCall:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

