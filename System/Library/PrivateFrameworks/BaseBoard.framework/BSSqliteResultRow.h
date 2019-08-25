/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface BSSqliteResultRow : NSObject <BSInvalidatable, NSCopying> {

	sqlite3_stmtRef _statement;
	NSArray* _columnNames;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultRowWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)_initWithStatement:(sqlite3_stmtRef)arg1 ;
-(unsigned long long)_indexForKey:(id)arg1 ;
-(id)_columnNames;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
@end

