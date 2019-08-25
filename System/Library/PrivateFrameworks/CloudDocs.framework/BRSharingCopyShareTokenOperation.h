/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _shareTokenCompletionBlock;
	/*^block*/id _shareAndBaseTokenCompletionBlock;

}

@property (copy) id shareTokenCompletionBlock;                     //@synthesize shareTokenCompletionBlock=_shareTokenCompletionBlock - In the implementation block
@property (copy) id shareAndBaseTokenCompletionBlock;              //@synthesize shareAndBaseTokenCompletionBlock=_shareAndBaseTokenCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)shareTokenCompletionBlock;
-(void)setShareTokenCompletionBlock:(id)arg1 ;
-(id)shareAndBaseTokenCompletionBlock;
-(void)setShareAndBaseTokenCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)main;
@end
