/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class UIPDFDocument, NSOperationQueue;

@interface UIPDFPageImageCache : NSObject {

	UIPDFDocument* _document;
	unsigned long long _lookAhead;
	double _lookAheadResolution;
	unsigned long long _jobCount;
	id* _jobsPrioritized;
	unsigned long long _nextJobIndex;
	unsigned long long _pageCount;
	id* _jobsByPage;
	NSOperationQueue* _renderQueue;
	os_unfair_lock_s _lock;
	int jobsComplete;

}

@property (readonly) UIPDFDocument * document;                  //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long pageCount;              //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) unsigned long long lookAhead;              //@synthesize lookAhead=_lookAhead - In the implementation block
@property (readonly) double lookAheadResolution;                //@synthesize lookAheadResolution=_lookAheadResolution - In the implementation block
-(int)getRenderQueueJobsCount;
-(id)initWithDocument:(id)arg1 cacheCount:(unsigned long long)arg2 lookAhead:(unsigned long long)arg3 withLookAheadResolution:(double)arg4 ;
-(id)getImageIfAvailableForPage:(unsigned long long)arg1 ;
-(void)deliverImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 quality:(BOOL*)arg3 receiver:(id)arg4 selector:(SEL)arg5 info:(id)arg6 ;
-(void)addRenderJob:(id)arg1 ;
-(void)cacheImageOfPage:(unsigned long long)arg1 maxSize:(CGSize)arg2 ;
-(void)cancelPendingRenderOperations;
-(void)cancelPendingRenderOperationsForTarget:(id)arg1 ;
-(double)lookAheadResolution;
-(unsigned long long)lookAhead;
-(void)dealloc;
-(unsigned long long)pageCount;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(UIPDFDocument *)document;
-(void)clearCache;
@end

