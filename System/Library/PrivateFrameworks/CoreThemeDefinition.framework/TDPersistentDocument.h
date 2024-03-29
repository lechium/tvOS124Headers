/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectModel, NSManagedObjectContext, NSURL, NSString;

@interface TDPersistentDocument : NSObject {

	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	id _store;
	NSURL* _fileURL;
	NSString* _fileType;
	NSURL* _temporaryFileURL;

}

@property (nonatomic,copy) NSURL * temporaryFileURL;              //@synthesize temporaryFileURL=_temporaryFileURL - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSString * fileType;                   //@synthesize fileType=_fileType - In the implementation block
+(id)_fileModificationDateForURL:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(id)initWithType:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(void)saveDocument:(id)arg1 ;
-(id)_persistentStoreCoordinator;
-(void)setTemporaryFileURL:(NSURL *)arg1 ;
-(NSURL *)temporaryFileURL;
-(void)dealloc;
-(NSString *)fileType;
-(void)close;
-(void)setFileType:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(id)undoManager;
-(id)managedObjectModel;
-(id)persistentStoreTypeForFileType:(id)arg1 ;
-(BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5 ;
-(id)managedObjectContext;
-(id)displayName;
@end

