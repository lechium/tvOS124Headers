/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	long long _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
@property (assign,nonatomic) long long format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL isTall; 
+(BOOL)supportsSecureCoding;
-(void)setFormat:(long long)arg1 ;
-(NSData *)messageData;
-(NSString *)altText;
-(void)setMessageData:(NSData *)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(id)initWithPassDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isTall;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(long long)format;
@end

