/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob {

	NSArray* _mediaSources;
	NSString* _albumCloudGUID;
	NSString* _albumName;
	NSString* _commentText;
	NSArray* _recipientsInfo;

}

@property (nonatomic,retain) NSArray * mediaSources;                 //@synthesize mediaSources=_mediaSources - In the implementation block
@property (nonatomic,retain) NSString * albumCloudGUID;              //@synthesize albumCloudGUID=_albumCloudGUID - In the implementation block
@property (nonatomic,retain) NSString * albumName;                   //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,retain) NSString * commentText;                 //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,retain) NSArray * recipientsInfo;               //@synthesize recipientsInfo=_recipientsInfo - In the implementation block
+(void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3 ;
+(void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4 ;
-(void)runDaemonSide;
-(void)setMediaSources:(NSArray *)arg1 ;
-(void)setAlbumCloudGUID:(NSString *)arg1 ;
-(void)setCommentText:(NSString *)arg1 ;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)addInfosForRecipients:(id)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(NSArray *)mediaSources;
-(NSArray *)recipientsInfo;
-(NSString *)albumCloudGUID;
-(NSString *)albumName;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(void)setRecipientsInfo:(NSArray *)arg1 ;
-(void)executeDaemonOperation;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(NSString *)commentText;
-(void)dealloc;
-(id)description;
-(void)run;
@end

