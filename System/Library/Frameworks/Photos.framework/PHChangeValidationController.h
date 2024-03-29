/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOrderedSet, NSManagedObjectContext, PLPhotoLibrary, NSArray, NSString;

@interface PHChangeValidationController : NSObject {

	BOOL _didPrepare;
	BOOL _confirmationRequired;
	NSOrderedSet* _insertRequests;
	NSOrderedSet* _updateRequests;
	NSOrderedSet* _deleteRequests;
	NSManagedObjectContext* _managedObjectContext;
	PLPhotoLibrary* _photoLibrary;
	NSArray* _renderedContentURLs;
	NSArray* _assetsToChangeContent;
	NSArray* _assetsToRevert;
	NSArray* _assetsToHide;
	NSArray* _assetsToDelete;
	NSArray* _albumsToDelete;
	NSArray* _foldersToDelete;
	NSString* _clientName;

}

@property (nonatomic,readonly) NSArray * renderedContentURLs;                              //@synthesize renderedContentURLs=_renderedContentURLs - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToChangeContent;                            //@synthesize assetsToChangeContent=_assetsToChangeContent - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToRevert;                                   //@synthesize assetsToRevert=_assetsToRevert - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToHide;                                     //@synthesize assetsToHide=_assetsToHide - In the implementation block
@property (nonatomic,readonly) NSArray * assetsToDelete;                                   //@synthesize assetsToDelete=_assetsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * albumsToDelete;                                   //@synthesize albumsToDelete=_albumsToDelete - In the implementation block
@property (nonatomic,readonly) NSArray * foldersToDelete;                                  //@synthesize foldersToDelete=_foldersToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientName;                                 //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) BOOL confirmationRequired;                                  //@synthesize confirmationRequired=_confirmationRequired - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * insertRequests;                              //@synthesize insertRequests=_insertRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * updateRequests;                              //@synthesize updateRequests=_updateRequests - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * deleteRequests;                              //@synthesize deleteRequests=_deleteRequests - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary;                              //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(NSOrderedSet *)insertRequests;
-(NSOrderedSet *)updateRequests;
-(NSOrderedSet *)deleteRequests;
-(BOOL)_prepareWithError:(id*)arg1 ;
-(BOOL)confirmationRequired;
-(NSArray *)renderedContentURLs;
-(NSArray *)assetsToChangeContent;
-(NSArray *)assetsToRevert;
-(NSArray *)assetsToHide;
-(NSArray *)assetsToDelete;
-(NSArray *)albumsToDelete;
-(NSArray *)foldersToDelete;
-(id)initWithInsertRequests:(id)arg1 updateRequests:(id)arg2 deleteRequests:(id)arg3 context:(id)arg4 photoLibrary:(id)arg5 ;
-(PLPhotoLibrary *)photoLibrary;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSString *)clientName;
-(NSManagedObjectContext *)managedObjectContext;
@end

