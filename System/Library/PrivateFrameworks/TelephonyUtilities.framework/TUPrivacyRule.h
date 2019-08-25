/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {

	int _type;
	TUPhoneNumber* _phoneNumber;
	NSString* _email;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TUPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * email;                         //@synthesize email=_email - In the implementation block
+(id)ruleForPhoneNumber:(id)arg1 ;
+(id)ruleForEmail:(id)arg1 ;
-(TUPhoneNumber *)phoneNumber;
-(NSString *)email;
-(id)initForPhoneNumber:(id)arg1 ;
-(id)initForEmail:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
@end

