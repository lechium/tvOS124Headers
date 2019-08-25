/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLUnixFileServices;
@interface PLFileUtilities : NSObject {

	id<PLUnixFileServices> _unixFileServices;

}
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(id)fileManager;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
+(id)sharedFileUtilities;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(id)descriptionForFileIngestionType:(long long)arg1 ;
+(id)_mobileOwnerAttributes;
+(BOOL)_isFileExistsError:(id)arg1 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(BOOL)supportsClone;
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
-(id)initWithUnixFileServices:(id)arg1 ;
-(id)init;
@end

