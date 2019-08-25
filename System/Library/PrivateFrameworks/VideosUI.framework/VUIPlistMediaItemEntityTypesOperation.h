/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaItemEntityTypesFetchResponse, NSError, VUIPlistMediaDatabase;

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation {

	VUIMediaItemEntityTypesFetchResponse* _response;
	NSError* _error;
	VUIPlistMediaDatabase* _database;

}

@property (nonatomic,retain) VUIPlistMediaDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(void)setResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
-(VUIPlistMediaDatabase *)database;
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(id)init;
-(VUIMediaItemEntityTypesFetchResponse *)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
@end
