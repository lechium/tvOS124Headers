/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol HMRemoteLoginMessageProtocol <NSObject,NSSecureCoding>
@property (nonatomic,readonly) NSDictionary * messagePayload; 
@required
+(id)messageName;
+(id)objWithDict:(id)arg1;
+(id)objWithMessage:(id)arg1;
+(id)xpcMessageName;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;

@end

