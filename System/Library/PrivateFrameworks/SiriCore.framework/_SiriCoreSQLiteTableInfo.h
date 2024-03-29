/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCoreSQLiteTable.h>

@class NSString, NSArray;

@interface _SiriCoreSQLiteTableInfo : NSObject <SiriCoreSQLiteTable> {

	NSString* _name;
	NSArray* _columns;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
-(NSArray *)columns;
-(id)initWithName:(id)arg1 columns:(id)arg2 ;
-(NSString *)name;
@end

