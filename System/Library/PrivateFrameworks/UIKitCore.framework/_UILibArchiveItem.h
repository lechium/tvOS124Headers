/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIArchiveItem.h>

@interface _UILibArchiveItem : _UIArchiveItem {

	ui_archive_entryRef _underlyingArchiveEntry;
	ui_archiveRef _underlyingArchive;

}

@property (readonly) ui_archive_entryRef underlyingArchiveEntry;              //@synthesize underlyingArchiveEntry=_underlyingArchiveEntry - In the implementation block
@property (readonly) ui_archiveRef underlyingArchive;                         //@synthesize underlyingArchive=_underlyingArchive - In the implementation block
+(id)itemByReadingAttributesFromUnderlyingArchiveEntry:(ui_archive_entryRef)arg1 archive:(ui_archiveRef)arg2 ;
-(ui_archive_entryRef)underlyingArchiveEntry;
-(ui_archiveRef)underlyingArchive;
@end
