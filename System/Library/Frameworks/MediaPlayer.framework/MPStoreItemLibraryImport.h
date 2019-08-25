/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPStoreItemLibraryImport : NSObject {

	BOOL _addToCloudLibrary;
	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
@property (nonatomic,readonly) BOOL addToCloudLibrary;                //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
-(id)initWithImportElements:(id)arg1 usingCloudLibraryDestination:(BOOL)arg2 ;
-(NSArray *)importElements;
-(BOOL)addToCloudLibrary;
@end
