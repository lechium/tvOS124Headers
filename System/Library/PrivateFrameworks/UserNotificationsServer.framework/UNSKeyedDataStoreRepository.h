/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UNSKeyedDataStoreRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	long long _maxObjectsPerKey;
	BOOL _shouldExcludeFromBackup;

}
-(id)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObjects:(id)arg1 forKey:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(id)pathForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 maxObjectsPerKey:(long long)arg4 shouldExcludeFromBackup:(BOOL)arg5 ;
-(void)removeStoreForKey:(id)arg1 ;
-(id)_objectsAtPath:(id)arg1 ;
-(BOOL)_saveObjects:(id)arg1 atPath:(id)arg2 ;
-(id)_removeObjectsPassingTest:(/*^block*/id)arg1 atPath:(id)arg2 ;
-(void)_setObjects:(id)arg1 atPath:(id)arg2 ;
-(id)addObject:(id)arg1 replaceObjectUsingTest:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(id)addObject:(id)arg1 replaceObjectUsingTest:(/*^block*/id)arg2 mustReplace:(BOOL)arg3 forKey:(id)arg4 ;
-(id)_addObject:(id)arg1 replaceObjectUsingTest:(/*^block*/id)arg2 mustReplace:(BOOL)arg3 atPath:(id)arg4 ;
-(void)_removeItemAtPath:(id)arg1 ;
-(id)directoryPath;
-(id)directoryForKey:(id)arg1 ;
-(void)removeAllObjectsForKey:(id)arg1 ;
-(id)removeObjectsPassingTest:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)replaceObject:(id)arg1 usingTest:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(void)removeDataStoreRepository;
-(id)allKeys;
@end

