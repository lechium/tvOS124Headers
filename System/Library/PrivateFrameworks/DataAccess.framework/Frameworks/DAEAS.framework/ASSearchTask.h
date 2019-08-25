/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {

	int _numDownloadedElements;
	DASearchQuery* _query;

}

@property (nonatomic,retain) DASearchQuery * query;                  //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
-(void)setQuery:(DASearchQuery *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(int)numDownloadedElements;
-(void)setNumDownloadedElements:(int)arg1 ;
-(id)description;
-(DASearchQuery *)query;
@end

