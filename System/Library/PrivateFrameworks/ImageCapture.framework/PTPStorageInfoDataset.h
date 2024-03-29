/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableData;

@interface PTPStorageInfoDataset : NSObject {

	unsigned short _storageType;
	unsigned short _filesystemType;
	unsigned short _accessCapability;
	unsigned long long _maxCapacity;
	unsigned long long _freeSpaceInBytes;
	unsigned _freeSpaceInImages;
	NSString* _storageDescription;
	NSString* _volumeLabel;
	NSMutableData* _content;
	BOOL _dirty;
	BOOL _readOnlyObject;

}
-(void)setMaxCapacity:(unsigned long long)arg1 ;
-(unsigned long long)maxCapacity;
-(unsigned short)storageType;
-(void)setStorageType:(unsigned short)arg1 ;
-(unsigned short)filesystemType;
-(void)setFilesystemType:(unsigned short)arg1 ;
-(unsigned short)accessCapability;
-(void)setAccessCapability:(unsigned short)arg1 ;
-(unsigned long long)freeSpaceInBytes;
-(void)setFreeSpaceInBytes:(unsigned long long)arg1 ;
-(unsigned)freeSpaceInImages;
-(void)setFreeSpaceInImages:(unsigned)arg1 ;
-(id)storageDescription;
-(void)setStorageDescription:(id)arg1 ;
-(id)volumeLabel;
-(void)setVolumeLabel:(id)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)updateContent;
-(id)initWithData:(id)arg1 ;
-(id)content;
-(void)setContent:(id)arg1 ;
@end

