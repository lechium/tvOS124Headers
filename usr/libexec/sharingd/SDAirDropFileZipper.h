//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL, SDAirDropCompressor, SDStatusMonitor;
@protocol OS_dispatch_source, SDAirDropFileZipperDelegate;

__attribute__((visibility("hidden")))
@interface SDAirDropFileZipper : NSObject
{
    _Bool _usePKZip;	// 8 = 0x8
    long long _fileCount;	// 16 = 0x10
    long long _totalBytes;	// 24 = 0x18
    struct _BOMBom *_bomArchive;	// 32 = 0x20
    NSURL *_tempFolder;	// 40 = 0x28
    NSString *_bomPath;	// 48 = 0x30
    NSURL *_destination;	// 56 = 0x38
    struct _BOMCopier *_bomCopier;	// 64 = 0x40
    long long _lastBytesCopied;	// 72 = 0x48
    long long _totalBytesCopied;	// 80 = 0x50
    SDStatusMonitor *_monitor;	// 88 = 0x58
    struct __CFReadStream *_readStream;	// 96 = 0x60
    struct __CFWriteStream *_writeStream;	// 104 = 0x68
    double _timeStarted;	// 112 = 0x70
    double _lastProgress;	// 120 = 0x78
    NSMutableArray *_topLevelFiles;	// 128 = 0x80
    NSMutableArray *_placeholderFiles;	// 136 = 0x88
    NSMutableArray *_orderedRelativePaths;	// 144 = 0x90
    NSMutableDictionary *_relativePathToFile;	// 152 = 0x98
    NSObject<OS_dispatch_source> *_progressTimer;	// 160 = 0xa0
    NSMutableDictionary *_alternateNames;	// 168 = 0xa8
    SDAirDropCompressor *_compressionEngine;	// 176 = 0xb0
    CDUnknownBlockType _creationCompletionHandler;	// 184 = 0xb8
    _Bool _shouldExtractImagesFromLivePhotos;	// 192 = 0xc0
    int _clientPid;	// 196 = 0xc4
    NSArray *_sourceFiles;	// 200 = 0xc8
    NSString *_senderName;	// 208 = 0xd0
    NSString *_compressionType;	// 216 = 0xd8
    NSSet *_skipReadableCheckFiles;	// 224 = 0xe0
    id <SDAirDropFileZipperDelegate> _delegate;	// 232 = 0xe8
    CDStruct_4c969caf _auditToken;	// 240 = 0xf0
}

@property __weak id <SDAirDropFileZipperDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractImagesFromLivePhotos; // @synthesize shouldExtractImagesFromLivePhotos=_shouldExtractImagesFromLivePhotos;
@property(copy) NSSet *skipReadableCheckFiles; // @synthesize skipReadableCheckFiles=_skipReadableCheckFiles;
@property(copy) NSString *compressionType; // @synthesize compressionType=_compressionType;
@property(copy) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy) NSArray *sourceFiles; // @synthesize sourceFiles=_sourceFiles;
@property int clientPid; // @synthesize clientPid=_clientPid;
@property CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;	// IMP=0x000000010005bef0
- (void)stop;	// IMP=0x000000010005bdb0
- (void)unzip;	// IMP=0x000000010005b828
- (void)zip;	// IMP=0x000000010005b1cc
- (id)temporaryBomPath;	// IMP=0x000000010005afb8
- (_Bool)initBomWithFiles;	// IMP=0x000000010005abf8
- (void)startBomCopy:(id)arg1 destination:(id)arg2 options:(id)arg3;	// IMP=0x000000010005a574
- (void)allowProgressCircleToComplete;	// IMP=0x000000010005a510
- (int)bomCopierCopy:(id)arg1 destination:(id)arg2 options:(id)arg3;	// IMP=0x0000000100059eb4
- (void)moveFilesToDestination;	// IMP=0x0000000100059bf4
- (void)moveFile:(struct __CFURL *)arg1 toDestination:(struct __CFURL *)arg2;	// IMP=0x0000000100059994
- (id)conflictResolvedURL:(id)arg1;	// IMP=0x0000000100059890
- (void)removeUnusedPlaceholderFiles;	// IMP=0x0000000100059710
- (_Bool)createPlaceholderFiles;	// IMP=0x00000001000590a8
- (id)prettyNameBasedOnUUID:(id)arg1;	// IMP=0x000000010005900c
- (id)URLFromFileInfo:(id)arg1;	// IMP=0x0000000100058eb0
- (_Bool)addFileURLToBom:(struct _BOMBom *)arg1 file:(struct __CFURL *)arg2 base:(struct __CFURL *)arg3 propertyKeys:(id)arg4 topLevel:(_Bool)arg5;	// IMP=0x0000000100058c74
- (void)addParentChain:(struct _BOMBom *)arg1 file:(struct __CFURL *)arg2 base:(struct __CFURL *)arg3;	// IMP=0x0000000100058bdc
- (_Bool)addFile:(struct __CFURL *)arg1 withBase:(struct __CFURL *)arg2 toBom:(struct _BOMBom *)arg3;	// IMP=0x0000000100058a28
- (struct __CFArray *)copyReverseParentChain:(struct __CFURL *)arg1 base:(struct __CFURL *)arg2;	// IMP=0x0000000100058990
- (long long)totalFileSize:(struct __CFURL *)arg1;	// IMP=0x0000000100058910
- (void)bomCopierFatalError:(const char *)arg1;	// IMP=0x00000001000587f4
- (void)bomCopierFatalFileError:(int)arg1;	// IMP=0x0000000100058784
- (void)bomCopierCopyFileFinished:(const char *)arg1 type:(int)arg2 size:(long long)arg3 operation:(int)arg4;	// IMP=0x0000000100058504
- (void)quarantineFile:(id)arg1;	// IMP=0x0000000100058500
- (_Bool)pathExistsInPlaceholderInfo:(id)arg1;	// IMP=0x0000000100058354
- (id)fixedRelativePath:(const char *)arg1;	// IMP=0x00000001000582a4
- (void)removeFileFromPlaceholderList:(id)arg1;	// IMP=0x0000000100058118
- (_Bool)validFileName:(id)arg1;	// IMP=0x0000000100057eb8
- (id)absoluteURLIfTopLevelFile:(const char *)arg1 isDirectory:(_Bool)arg2 base:(struct __CFURL *)arg3;	// IMP=0x0000000100057dc0
- (void)notifyProgress:(long long)arg1 force:(_Bool)arg2;	// IMP=0x0000000100057b60
- (id)timeRemaining:(long long)arg1 timeNow:(double)arg2;	// IMP=0x0000000100057b14
- (struct __CFReadStream *)copyReadStream;	// IMP=0x0000000100057af0
- (void)setReadStream:(struct __CFReadStream *)arg1;	// IMP=0x0000000100057aa0
@property(copy) NSURL *destination;
- (void)setPlaceholderFiles:(id)arg1 withCreationCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057748
- (void)setTotalBytes:(id)arg1;	// IMP=0x0000000100057710
- (_Bool)isDecompressor;	// IMP=0x00000001000576f0
- (_Bool)isCompressor;	// IMP=0x00000001000576d8
- (void)notifyClientForEvent:(long long)arg1 withProperty:(void *)arg2;	// IMP=0x0000000100057604
- (void)dealloc;	// IMP=0x0000000100057554
- (id)init;	// IMP=0x00000001000572e8

@end

