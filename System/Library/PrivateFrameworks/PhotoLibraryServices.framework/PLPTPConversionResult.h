/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPTPConversionResult : NSObject {

	NSString* _pathExtension;
	unsigned long long _estimatedFileLength;

}

@property (copy,readonly) NSString * pathExtension;                       //@synthesize pathExtension=_pathExtension - In the implementation block
@property (readonly) unsigned long long estimatedFileLength;              //@synthesize estimatedFileLength=_estimatedFileLength - In the implementation block
-(id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2 ;
-(unsigned long long)estimatedFileLength;
-(NSString *)pathExtension;
@end

