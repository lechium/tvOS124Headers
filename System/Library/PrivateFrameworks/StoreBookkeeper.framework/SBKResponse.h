/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSError, NSString, SBKResponseStatus;

@interface SBKResponse : NSObject {

	NSDictionary* _responseDictionary;
	unsigned long long _responseCode;
	NSDictionary* _responseHeaderFields;
	NSError* _error;
	double _retrySeconds;
	NSString* _MIMEType;
	SBKResponseStatus* _responseStatus;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) SBKResponseStatus * responseStatus;               //@synthesize responseStatus=_responseStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long responseCode;                  //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary;                //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (readonly) long long statusCode; 
@property (copy,readonly) NSString * consoleDescription; 
@property (readonly) NSError * requestError; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isRecoverable; 
@property (readonly) BOOL isError; 
@property (readonly) BOOL shouldFileRadar; 
@property (readonly) BOOL isGenericError; 
@property (readonly) BOOL isUnsupportedClient; 
@property (readonly) BOOL isAuthenticationError; 
@property (readonly) BOOL isValidationError; 
@property (readonly) BOOL isPuntedError; 
@property (readonly) double retrySeconds;                                        //@synthesize retrySeconds=_retrySeconds - In the implementation block
+(id)responseWithResponse:(id)arg1 ;
+(id)responseWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
+(id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(BOOL)isSuccess;
-(NSDictionary *)responseDictionary;
-(BOOL)isRecoverable;
-(BOOL)isError;
-(NSDictionary *)responseHeaderFields;
-(NSError *)requestError;
-(unsigned long long)responseCode;
-(NSString *)consoleDescription;
-(BOOL)isAuthenticationError;
-(double)retrySeconds;
-(BOOL)isUnsupportedClient;
-(BOOL)isGenericError;
-(BOOL)isValidationError;
-(id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 responseDictionary:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(BOOL)isPuntedError;
-(id)initWithURLResponse:(id)arg1 responseDictionary:(id)arg2 ;
-(BOOL)shouldFileRadar;
-(SBKResponseStatus *)responseStatus;
-(id)description;
-(NSError *)error;
-(long long)statusCode;
-(NSString *)MIMEType;
@end

