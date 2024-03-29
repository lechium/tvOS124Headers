/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface WBSFetchedCloudTabDeviceOrCloseRequest : NSObject <NSSecureCoding> {

	NSString* _uuidString;
	NSDictionary* _deviceOrCloseRequestDictionary;

}

@property (nonatomic,copy,readonly) NSString * uuidString;                                      //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * deviceOrCloseRequestDictionary;              //@synthesize deviceOrCloseRequestDictionary=_deviceOrCloseRequestDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithUUIDString:(id)arg1 deviceOrCloseRequestDictionary:(id)arg2 ;
-(NSDictionary *)deviceOrCloseRequestDictionary;
-(NSString *)uuidString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

