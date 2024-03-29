/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, NSError, NSMutableArray;

@interface NSDirectoryTraversalOperation : NSOperation {

	id _delegate;
	NSString* _sourcePath;
	NSError* _error;
	void* _stream;
	int _optionsFlags;
	int _lastDeviceInode;
	BOOL _shouldFilterUnderbars;
	BOOL _stopped;
	NSMutableArray* _deviceEntryPoints;
	NSMutableArray* _deviceNumbers;

}
+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
+(id)directoryTraversalOperationAtPath:(id)arg1 ;
-(BOOL)_shouldFilterEntry:(ftsent*)arg1 ;
-(void)handlePathname:(id)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg1 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)_setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(id)initWithPath:(id)arg1 ;
-(id)error;
@end

