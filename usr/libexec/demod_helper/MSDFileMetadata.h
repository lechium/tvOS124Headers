//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MSDFileMetadata : NSObject
{
    NSDictionary *_dict;	// 8 = 0x8
}

+ (id)fileMetaDataWithMetadataDictionary:(id)arg1;	// IMP=0x000000010000610c
+ (id)fileMetadatatWithPath:(id)arg1;	// IMP=0x00000001000060a4
+ (id)targetFileWithPath:(id)arg1;	// IMP=0x0000000100005ab8
+ (id)extendedAttributesWithPath:(id)arg1;	// IMP=0x0000000100005828
+ (id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2;	// IMP=0x00000001000055e8
+ (id)accessControlListWithPath:(id)arg1;	// IMP=0x00000001000052e8
+ (id)extendedAttributeKeysWithPath:(id)arg1;	// IMP=0x0000000100005004
+ (id)fileAttributesWithPath:(id)arg1;	// IMP=0x0000000100004e90
+ (id)fileHashWithPath:(id)arg1;	// IMP=0x0000000100004c40
@property(readonly) NSDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;	// IMP=0x0000000100007e28
@property(readonly, getter=getFileSize) long long fileSize;
@property(readonly, getter=getTargetFile) NSString *targetFile;
@property(readonly, getter=getFileType) NSString *fileType;
@property(readonly, getter=getAccessControlList) NSData *accessControlList;
@property(readonly, getter=getExtendedAttributes) NSDictionary *extendedAttributes;
@property(readonly, getter=getFileAttributes) NSDictionary *fileAttributes;
@property(readonly, getter=getHash) NSData *hash;
- (id)fileAttributesAllowSet:(id)arg1;	// IMP=0x0000000100007840
- (int)compareWith:(id)arg1;	// IMP=0x000000010000701c
- (_Bool)restoreAttribuesToPath:(id)arg1;	// IMP=0x00000001000063f0
- (_Bool)removeAllExtendedAttributes:(id)arg1;	// IMP=0x00000001000061c8
- (void)dealloc;	// IMP=0x0000000100006174
- (id)initWithPath:(id)arg1;	// IMP=0x0000000100005cac
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100005c2c

@end

