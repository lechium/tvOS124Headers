/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSUUID, NSPredicate;

@interface HMDNameValidator : HMFObject {

	NSMutableDictionary* _namespaceList;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _homeManagerUUID;
	NSPredicate* _nonZeroLengthPredicate;

}

@property (nonatomic,retain) NSMutableDictionary * namespaceList;                 //@synthesize namespaceList=_namespaceList - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSUUID * homeManagerUUID;                            //@synthesize homeManagerUUID=_homeManagerUUID - In the implementation block
@property (nonatomic,retain) NSPredicate * nonZeroLengthPredicate;                //@synthesize nonZeroLengthPredicate=_nonZeroLengthPredicate - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)validateName:(id)arg1 ;
-(id)addName:(id)arg1 namespace:(id)arg2 ;
-(id)addActionSetName:(id)arg1 namespace:(id)arg2 ;
-(id)removeName:(id)arg1 namespace:(id)arg2 ;
-(id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 ;
-(id)replaceActionSetName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 ;
-(id)_addNamespace:(id)arg1 ;
-(NSMutableDictionary *)namespaceList;
-(NSPredicate *)nonZeroLengthPredicate;
-(id)despaceName:(id)arg1 ;
-(id)_validateName:(id)arg1 ;
-(id)_removeName:(id)arg1 namespace:(id)arg2 ;
-(id)_addName:(id)arg1 namespace:(id)arg2 ;
-(id)_removeNamespace:(id)arg1 ;
-(id)_checkForConflict:(id)arg1 namespace:(id)arg2 ;
-(id)addName:(id)arg1 namespace:(id)arg2 voiceShortcutCheck:(BOOL)arg3 ;
-(id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 voiceShortcutCheck:(BOOL)arg4 ;
-(id)_replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3 ;
-(id)addNamespace:(id)arg1 ;
-(id)removeNamespace:(id)arg1 ;
-(id)checkForConflict:(id)arg1 namespace:(id)arg2 ;
-(void)setNamespaceList:(NSMutableDictionary *)arg1 ;
-(NSUUID *)homeManagerUUID;
-(void)setHomeManagerUUID:(NSUUID *)arg1 ;
-(void)setNonZeroLengthPredicate:(NSPredicate *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

