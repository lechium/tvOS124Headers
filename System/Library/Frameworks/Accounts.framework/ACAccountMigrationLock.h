/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject <NSLocking> {

	CPExclusiveLock* _underlyingLock;

}
+(void)signalMigrationFinished;
+(id)_currentSystemVersion;
+(BOOL)isMigrationFinished;
+(void)writeMigrationVersionPref;
-(id)init;
-(void)lock;
-(void)unlock;
@end
