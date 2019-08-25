/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BookmarkDAVDatabaseLockArbiter : NSObject {

	long long _databaseLockCount;
	const void* _databaseRef;

}

@property (nonatomic,readonly) const void* databaseRef;              //@synthesize databaseRef=_databaseRef - In the implementation block
-(BOOL)lockForClient:(id)arg1 ;
-(void)unlockForClient:(id)arg1 ;
-(const void*)databaseRef;
-(void)dealloc;
@end

