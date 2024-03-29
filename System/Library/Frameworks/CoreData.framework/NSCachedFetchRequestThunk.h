/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {

	NSSQLiteStatement* _limitedStatement;
	NSSQLiteStatement* _unlimitedStatement;
	id _connection;

}

@property (nonatomic,retain) NSSQLiteStatement * limitedStatement;                //@synthesize limitedStatement=_limitedStatement - In the implementation block
@property (nonatomic,retain) NSSQLiteStatement * unlimitedStatement;              //@synthesize unlimitedStatement=_unlimitedStatement - In the implementation block
-(id)initForConnection:(id)arg1 ;
-(NSSQLiteStatement *)limitedStatement;
-(NSSQLiteStatement *)unlimitedStatement;
-(void)setLimitedStatement:(NSSQLiteStatement *)arg1 ;
-(void)setUnlimitedStatement:(NSSQLiteStatement *)arg1 ;
-(void)clearCaches;
-(void)dealloc;
@end

