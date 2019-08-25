/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSData, NSString, NSArray;


@protocol CoreDAVLeafDataPayload <NSObject>
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
@optional
-(void)setSourceURL:(id)arg1;
-(NSURL *)sourceURL;
-(NSArray *)childrenOrder;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(id)arg1;

@required
-(void)setServerID:(id)arg1;
-(NSURL *)serverID;
-(NSString *)syncKey;
-(NSData *)dataPayload;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;

@end

