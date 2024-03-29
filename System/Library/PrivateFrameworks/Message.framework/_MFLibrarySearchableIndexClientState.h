/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface _MFLibrarySearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientStateFromData:(id)arg1 ;
+(id)clientState;
-(long long)transaction;
-(void)setTransaction:(long long)arg1 ;
-(id)archiveRepresentation;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSNumber *)transactionValue;
-(NSString *)systemBuildVersion;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

