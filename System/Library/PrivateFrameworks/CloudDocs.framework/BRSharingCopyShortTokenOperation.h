/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShortTokenOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _shortTokenCompletionBlock;

}

@property (copy) id shortTokenCompletionBlock;              //@synthesize shortTokenCompletionBlock=_shortTokenCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shortTokenCompletionBlock;
-(void)setShortTokenCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)main;
@end

