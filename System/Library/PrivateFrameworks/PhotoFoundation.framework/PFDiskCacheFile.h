/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@class PFChecksum, NSString;

@interface PFDiskCacheFile : NSObject {

	PFChecksum* _checksum;
	NSString* _path;
	int _fd;
	stat _statBuf;

}
-(void)_logError:(id)arg1 ;
-(id)read:(int)arg1 ;
-(BOOL)_readBytesIntoPtr:(void*)arg1 length:(unsigned long long)arg2 ;
-(SCD_Struct_PF8)_headerForFormat:(unsigned)arg1 checksum:(id)arg2 formatSpecificData:(unsigned)arg3 ;
-(BOOL)_writeBytesFromPtr:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_openCacheFileForRead;
-(BOOL)_readHeader:(SCD_Struct_PF8*)arg1 ;
-(void)_closeCacheFile;
-(id)_readObj:(int)arg1 queue:(id)arg2 ;
-(BOOL)deleteCacheFile;
-(BOOL)_openCacheFileForWrite;
-(BOOL)_writeObj:(id)arg1 queue:(id)arg2 ;
-(BOOL)_swapTempFileIntoPlace;
-(int)_writeHeaderForFormat:(unsigned)arg1 formatSpecificData:(unsigned)arg2 ;
-(BOOL)checkIntegrity:(long long)arg1 ;
-(id)initWithPath:(id)arg1 checksum:(id)arg2 ;
-(void)write:(id)arg1 preparationBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end

