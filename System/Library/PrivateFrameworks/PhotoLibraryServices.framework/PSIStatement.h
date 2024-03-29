/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIStatement : NSObject {

	sqlite3_stmtRef _stmt;

}

@property (readonly) sqlite3_stmtRef stmt;              //@synthesize stmt=_stmt - In the implementation block
-(id)initWithSQLite3Stmt:(sqlite3_stmtRef)arg1 ;
-(void)finalizze;
-(void)bindText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2 ;
-(void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)textAtColumn:(unsigned long long)arg1 ;
-(double)doubleAtColumn:(unsigned long long)arg1 ;
-(long long)int64AtColumn:(unsigned long long)arg1 ;
-(sqlite3_stmtRef)stmt;
-(void)dealloc;
@end

