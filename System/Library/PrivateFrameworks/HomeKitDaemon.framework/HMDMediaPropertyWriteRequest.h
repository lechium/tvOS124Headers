/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaPropertyRequest.h>

@class NSUUID;

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest {

	id _value;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(id)serializeWriteRequests:(id)arg1 ;
+(id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
-(NSUUID *)identifier;
-(id)description;
-(id)value;
@end

