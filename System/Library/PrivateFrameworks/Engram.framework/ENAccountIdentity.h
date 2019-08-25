/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountKey, ENDeviceKey;
@interface ENAccountIdentity : NSObject <NSSecureCoding> {

	id<ENAccountKey> _accountKey;
	id<ENDeviceKey> _deviceKey;

}

@property (nonatomic,retain) id<ENAccountKey> accountKey;              //@synthesize accountKey=_accountKey - In the implementation block
@property (nonatomic,retain) id<ENDeviceKey> deviceKey;                //@synthesize deviceKey=_deviceKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDeviceKey:(id<ENDeviceKey>)arg1 ;
-(void)setAccountKey:(id<ENAccountKey>)arg1 ;
-(id<ENAccountKey>)accountKey;
-(id<ENDeviceKey>)deviceKey;
-(id)initWithAccountKey:(id)arg1 deviceKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
