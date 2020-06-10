//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CKKSSQLDatabaseObject : NSObject <NSCopying>
{
    NSDictionary *_originalSelfWhereClause;	// 8 = 0x8
}

+ (id)sqlColumns;	// IMP=0x000000010001d22c
+ (id)sqlTable;	// IMP=0x000000010001d188
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x000000010001d0d8
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 orderBy:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001cf24
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001cf10
+ (id)fetch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000010001cef8
+ (id)allWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001cd68
+ (id)all:(id *)arg1;	// IMP=0x000000010001cd54
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001cbe4
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001ca84
+ (_Bool)deleteAll:(id *)arg1;	// IMP=0x000000010001ca14
+ (_Bool)queryMaxValueForField:(id)arg1 inTable:(id)arg2 where:(id)arg3 columns:(id)arg4 processRow:(CDUnknownBlockType)arg5;	// IMP=0x000000010001c86c
+ (_Bool)queryDatabaseTable:(id)arg1 where:(id)arg2 columns:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 processRow:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x000000010001c638
+ (_Bool)deleteFromTable:(id)arg1 where:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x000000010001c4bc
+ (id)orderByClause:(id)arg1;	// IMP=0x000000010001c39c
+ (id)groupByClause:(id)arg1;	// IMP=0x000000010001c290
+ (id)makeWhereClause:(id)arg1;	// IMP=0x000000010001c184
+ (_Bool)saveToDatabaseTable:(id)arg1 row:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x000000010001c008
@property(copy) NSDictionary *originalSelfWhereClause; // @synthesize originalSelfWhereClause=_originalSelfWhereClause;
- (void).cxx_destruct;	// IMP=0x000000010001bfd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001bf74
- (id)whereClauseToFindSelf;	// IMP=0x000000010001bed0
- (id)sqlValues;	// IMP=0x000000010001be2c
- (id)memoizeOriginalSelfWhereClause;	// IMP=0x000000010001bde4
- (_Bool)deleteFromDatabase:(id *)arg1;	// IMP=0x000000010001bd44
- (_Bool)saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x000000010001bb8c
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x000000010001bb78

@end
