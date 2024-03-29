/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RTKeychainManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)saltString:(id)arg1 withSaltData:(id)arg2 error:(id*)arg3 ;
-(id)defaultSymmetricKeyAttributes;
-(BOOL)statusToError:(int)arg1 error:(id*)arg2 ;
-(id)_objectForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setObject:(id)arg1 forKey:(id)arg2 existence:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_deleteValueWithKey:(id)arg1 error:(id*)arg2 ;
-(id)objectForKey:(id)arg1 defaultHandler:(/*^block*/id)arg2 ;
-(id)createSymmetricKeyWithSize:(long long)arg1 identifier:(id)arg2 storeInKeychain:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)removeEncryptionKeyWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)encryptionKeyWithSize:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

