/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign,nonatomic) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) id value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)dealloc;
-(id)value;
-(void)setValue:(id)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
@end

