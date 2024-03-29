/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSString, ACAccount, NSDictionary, NSError;

@interface ACRemoteDeviceMessage : NSObject {

	NSMutableDictionary* _payload;
	NSData* _data;
	BOOL _needsReply;
	BOOL _isReply;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * command; 
@property (nonatomic,readonly) ACAccount * account; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSString * sentMessageIdentifier; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> result; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL needsReply;                                 //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                    //@synthesize isReply=_isReply - In the implementation block
+(id)_whitelistedClasses;
+(id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3 ;
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4 ;
+(id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)_invalidateCachedData;
-(NSString *)sentMessageIdentifier;
-(BOOL)needsReply;
-(void)_setPayloadObject:(id)arg1 forKey:(id)arg2 ;
-(id)_payloadObjectForKey:(id)arg1 ;
-(void)setNeedsReply:(BOOL)arg1 ;
-(void)setIsReply:(BOOL)arg1 ;
-(BOOL)isReply;
-(BOOL)success;
-(ACAccount *)account;
-(NSString *)command;
-(id)init;
-(NSString *)identifier;
-(id)description;
-(NSDictionary *)options;
-(NSObject*<NSSecureCoding>)result;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSError *)error;
@end

