/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, BRGlobalProgressProxy, NSMutableDictionary, NSMutableArray, NSOperationQueue, NSString;

@interface BRUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {

	BRGlobalProgressProxy* _progress;
	/*^block*/id _uploadAllFilesCompletionBlock;
	NSMutableDictionary* _errorsByContainerID;
	NSMutableArray* _hiddenContainersWithError;
	NSOperationQueue* _opQueue;
	BOOL _shouldKeepDataLocal;

}

@property (retain) BRGlobalProgressProxy * progress;                //@synthesize progress=_progress - In the implementation block
@property (copy) id uploadAllFilesCompletionBlock;                  //@synthesize uploadAllFilesCompletionBlock=_uploadAllFilesCompletionBlock - In the implementation block
@property (assign) BOOL shouldKeepDataLocal;                        //@synthesize shouldKeepDataLocal=_shouldKeepDataLocal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldKeepDataLocal;
-(void)evictAllFilesInGroup:(id)arg1 ;
-(id)uploadAllFilesCompletionBlock;
-(void)setUploadAllFilesCompletionBlock:(id)arg1 ;
-(void)setShouldKeepDataLocal:(BOOL)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(void)cancel;
-(BRGlobalProgressProxy *)progress;
-(void)main;
@end

