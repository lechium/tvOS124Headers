/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {

	 deviceName;
	 ownerFirstName;
	 ownerLastName;

}

@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * ownerFirstName; 
@property (readonly,nonatomic) NSString * ownerLastName; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(NSString *)ownerFirstName;
-(NSString *)ownerLastName;
-(id)initWithDeviceName:(id)arg1 ownerFirstName:(id)arg2 ownerLastName:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
@end

