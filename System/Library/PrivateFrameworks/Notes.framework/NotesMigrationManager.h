/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NotesMigrationManager : NSObject
-(BOOL)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 managedObjectModel:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)areStoreMetadata:(id)arg1 matchingEntityVersionsInModel:(id)arg2 ;
-(BOOL)migrateNotesStoreAtURL:(id)arg1 storeType:(id)arg2 options:(id)arg3 sourceModel:(id)arg4 destinationModel:(id)arg5 mappingModel:(id)arg6 error:(id*)arg7 ;
@end

