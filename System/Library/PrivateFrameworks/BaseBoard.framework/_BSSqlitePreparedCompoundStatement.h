/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSSqlitePreparedStatement.h>

@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {

	NSArray* _statements;

}
-(id)initWithDatabaseConnection:(id)arg1 statements:(id)arg2 ;
-(BOOL)executeWithBindings:(id)arg1 resultRowHandler:(/*^block*/id)arg2 error:(out id*)arg3 ;
@end

