/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSTransactionLogMessage : NSObject {

	NSString* _fromID;
	NSString* _loginID;
	NSString* _accountUniqueID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * fromID;                       //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,readonly) NSString * loginID;                      //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * accountUniqueID;              //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)fromID;
-(id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(NSString *)accountUniqueID;
-(NSString *)loginID;
-(NSString *)serviceName;
-(id)dictionaryRepresentation;
@end

