/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject {

	ML3MusicLibrary* _currentLibrary;

}

@property (nonatomic,retain) ML3MusicLibrary * currentLibrary; 
+(id)sharedManager;
-(ML3MusicLibrary *)currentLibrary;
-(void)_switchToLibrary:(id)arg1 ;
-(void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1 ;
-(void)setCurrentLibrary:(ML3MusicLibrary *)arg1 ;
-(id)libraryForAccount:(id)arg1 ;
-(id)pathToLibraryForAccount:(id)arg1 ;
-(void)_setupNotifications;
-(void)_teardownNotifications;
-(id)init;
-(void)dealloc;
@end

