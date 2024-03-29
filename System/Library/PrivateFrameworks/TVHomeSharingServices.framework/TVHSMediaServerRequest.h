/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSData, NSMutableDictionary, NSDictionary;

@interface TVHSMediaServerRequest : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _action;
	unsigned long long _requestType;
	unsigned long long _protocol;
	NSString* _method;
	NSData* _body;
	double _timeoutInterval;
	NSMutableDictionary* _mutableArguments;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * action;                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long requestType;                      //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) unsigned long long protocol;                         //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableArguments;              //@synthesize mutableArguments=_mutableArguments - In the implementation block
@property (nonatomic,copy) NSString * method;                                     //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSData * body;                                         //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * arguments; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)requestType;
-(void)setRequestType:(unsigned long long)arg1 ;
-(double)timeoutInterval;
-(void)setMethod:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setProtocol:(unsigned long long)arg1 ;
-(void)setValue:(id)arg1 forArgument:(id)arg2 ;
-(NSDictionary *)arguments;
-(id)initWithAction:(id)arg1 requestType:(unsigned long long)arg2 protocol:(unsigned long long)arg3 ;
-(NSMutableDictionary *)mutableArguments;
-(id)argumentValueForName:(id)arg1 ;
-(void)setMutableArguments:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)action;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSString *)method;
-(unsigned long long)protocol;
@end

