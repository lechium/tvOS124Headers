/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString, NSMutableArray;

@interface PLImageTable : NSObject <PLThumbPersistenceManager> {

	NSString* _path;
	int _sideLength;
	BOOL _squareCropped;
	int _imageRowBytes;
	int _imageLength;
	int _entryLength;
	BOOL _readOnly;
	BOOL _dying;
	int _fid;
	long long _fileLength;
	long long _entryCount;
	unsigned long long _segmentLength;
	long long _segmentCount;
	NSMutableArray* _allSegments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly; 
+(void)releaseSegmentCache;
-(int)_fileDescriptor;
-(void)_releaseSegmentAtIndex:(long long)arg1 ;
-(void)_reloadSegmentAtIndex:(long long)arg1 ;
-(void)_addEntriesIfNecessaryForIndex:(long long)arg1 ;
-(void)_updateSegmentCount;
-(void)_setEntryCount:(long long)arg1 ;
-(void)_flushEntryAtAddress:(void*)arg1 count:(int)arg2 ;
-(id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)_flushEntryAtAddress:(void*)arg1 ;
-(BOOL)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id*)arg2 ;
-(void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2 ;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3 ;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2 ;
-(BOOL)usesThumbIdentifiers;
-(id)_debugDescription;
-(BOOL)isReadOnly;
-(void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(id)initWithPath:(id)arg1 readOnly:(BOOL)arg2 sideLengthInPixels:(int)arg3 squareCropped:(BOOL)arg4 ;
-(unsigned long long)_segmentLength;
-(void)_releaseSegment:(id)arg1 ;
-(void)touchEntriesInRange:(NSRange)arg1 ;
-(long long)entryCount;
-(id)preflightCompactionWithOccupiedIndexes:(id)arg1 ;
-(void)compactWithOccupiedIndexes:(id)arg1 ;
-(void)finishEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 sourceImageSize:(CGSize)arg3 assetUUID:(id)arg4 ;
-(void)dealloc;
-(CGSize)imageSize;
-(NSString *)path;
-(id)_segmentAtIndex:(long long)arg1 ;
@end
