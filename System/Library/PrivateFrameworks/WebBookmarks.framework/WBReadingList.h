/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:31 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WBReadingListPrivate, NSObject;

@interface WBReadingList : NSObject {

	WBReadingListPrivate* _private;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)defaultReadingList;
+(BOOL)supportsURL:(id)arg1 ;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(id)_init;
@end

