/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, PLManagedAlbum, PLPhotoLibrary, PLManagedObjectContext, NSPersistentStoreCoordinator;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob {

	NSArray* _assets;
	PLManagedAlbum* _album;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,copy) NSArray * assets;                                                      //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) PLManagedAlbum * album;                                              //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSPersistentStoreCoordinator * coordinator; 
+(void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(void)setAlbum:(PLManagedAlbum *)arg1 ;
-(id)_cameraRollAssetDerivedFromAsset:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(NSArray *)assets;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(PLManagedAlbum *)album;
-(void)dealloc;
-(PLManagedObjectContext *)managedObjectContext;
-(void)run;
-(NSPersistentStoreCoordinator *)coordinator;
@end

