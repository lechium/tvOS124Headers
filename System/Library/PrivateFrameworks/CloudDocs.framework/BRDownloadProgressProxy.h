/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSMetadataQuery, NSOperationQueue;

@interface BRDownloadProgressProxy : NSProgress {

	NSMetadataQuery* _query;
	NSOperationQueue* _queue;

}
-(void)_queryDidReceiveUpdate:(id)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithURL:(id)arg1 ;
@end
