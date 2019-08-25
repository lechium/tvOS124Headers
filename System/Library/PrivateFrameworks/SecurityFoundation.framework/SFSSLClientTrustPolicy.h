/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslClientTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * clientName; 
+(BOOL)supportsSecureCoding;
-(id)initWithClientName:(id)arg1 ;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

