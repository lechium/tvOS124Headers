/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying> {

	NSString* _name;
	NSString* _tableName;
	NSArray* _columnNames;
	unsigned long long _options;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * tableName;               //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
-(NSString *)tableName;
-(NSArray *)columnNames;
-(id)initWithName:(id)arg1 tableName:(id)arg2 columnNames:(id)arg3 options:(unsigned long long)arg4 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
@end

