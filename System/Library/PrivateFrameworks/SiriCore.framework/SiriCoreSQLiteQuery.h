/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreSQLiteRecordBuilder;
@class NSString, SiriCoreSQLiteStatement, NSArray;

@interface SiriCoreSQLiteQuery : NSObject {

	NSString* _string;
	SiriCoreSQLiteStatement* _statement;
	NSArray* _parameters;
	id<SiriCoreSQLiteRecordBuilder> _recordBuilder;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * string;                                     //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) SiriCoreSQLiteStatement * statement;                        //@synthesize statement=_statement - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parameters;                                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) id<SiriCoreSQLiteRecordBuilder> recordBuilder;              //@synthesize recordBuilder=_recordBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                 //@synthesize options=_options - In the implementation block
-(SiriCoreSQLiteStatement *)statement;
-(id<SiriCoreSQLiteRecordBuilder>)recordBuilder;
-(id)initWithString:(id)arg1 statement:(id)arg2 parameters:(id)arg3 recordBuilder:(id)arg4 options:(unsigned long long)arg5 ;
-(NSString *)string;
-(id)description;
-(unsigned long long)options;
-(NSArray *)parameters;
@end

