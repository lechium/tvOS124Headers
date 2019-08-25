/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData {

	ML3MusicLibrary* _library;
	NSOutputStream* _outputStream;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                  //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(NSOutputStream *)outputStream;
-(id)initWithLibrary:(id)arg1 outputStream:(id)arg2 ;
-(id)begin:(unsigned)arg1 ;
-(id)exportTrackAdded:(unsigned long long)arg1 ;
-(id)exportTrackUpdated:(unsigned long long)arg1 ;
-(id)exportTrackDeleted:(unsigned long long)arg1 ;
-(id)exportPlaylistAdded:(unsigned long long)arg1 ;
-(id)exportPlaylistDeleted:(unsigned long long)arg1 ;
-(ML3MusicLibrary *)library;
-(id)end;
@end
