/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStatementIntermediate.h>

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate {

	NSSQLUpdateColumnsIntermediate* _updateColumns;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)isUpdateScoped;
-(void)setUpdateColumnsIntermediate:(id)arg1 ;
-(id)initWithEntity:(id)arg1 inScope:(id)arg2 ;
-(id)updateColumnsIntermediate;
-(void)dealloc;
@end

