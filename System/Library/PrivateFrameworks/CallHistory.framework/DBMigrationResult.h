/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DBMigrationResult : NSObject {

	long long _errorCode;
	long long _dbVersion;

}

@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) long long dbVersion;              //@synthesize dbVersion=_dbVersion - In the implementation block
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(id)initWithErrorCode:(long long)arg1 andDBVersion:(long long)arg2 ;
-(long long)dbVersion;
-(void)setDbVersion:(long long)arg1 ;
@end

