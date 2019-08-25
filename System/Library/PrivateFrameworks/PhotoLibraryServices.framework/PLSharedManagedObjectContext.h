/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLSharedManagedObjectContext : PLManagedObjectContext {

	id _observerToken;

}
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
-(BOOL)isUserInterfaceContext;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)handleLocalChangeNotification:(id)arg1 ;
@end

