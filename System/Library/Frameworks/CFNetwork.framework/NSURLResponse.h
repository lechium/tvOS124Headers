/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:35 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(id)_peerCertificateChain;
-(long long)expectedContentLength;
-(double)_calculatedExpiration;
-(NSString *)textEncodingName;
-(NSString *)suggestedFilename;
-(CFURLResponseRef)_CFURLResponse;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
@end

