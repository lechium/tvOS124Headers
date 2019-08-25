/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCaptionsSource;
@class NSMutableArray, NSArray;

@interface VCCaptionsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCCaptionsSource> _captionsSource;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCCaptionsSource> captionsSource;              //@synthesize captionsSource=_captionsSource - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                      //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2 ;
-(id)newContext;
-(void)removeContext:(id)arg1 ;
-(id<VCCaptionsSource>)captionsSource;
-(NSArray *)clientContextList;
-(void)dealloc;
@end

