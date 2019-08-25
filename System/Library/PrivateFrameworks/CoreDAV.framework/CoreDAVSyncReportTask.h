/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {

	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	BOOL _moreToSync;
	BOOL _wasInvalidSyncToken;

}

@property (nonatomic,readonly) NSString * nextSyncToken;              //@synthesize nextSyncToken=_nextSyncToken - In the implementation block
@property (nonatomic,readonly) BOOL moreToSync;                       //@synthesize moreToSync=_moreToSync - In the implementation block
@property (nonatomic,readonly) BOOL wasInvalidSyncToken;              //@synthesize wasInvalidSyncToken=_wasInvalidSyncToken - In the implementation block
-(BOOL)wasInvalidSyncToken;
-(id)notFoundHREFs;
-(BOOL)moreToSync;
-(NSString *)nextSyncToken;
-(id)httpMethod;
-(id)requestBody;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4 ;
-(id)description;
@end

