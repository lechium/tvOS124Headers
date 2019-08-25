/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSURL, PFVideoComplement;

@interface PLStreamShareSource : NSObject {

	NSData* _mediaData;
	NSString* _fileExtension;
	NSURL* _mediaURL;
	PFVideoComplement* _videoComplement;
	long long _mediaType;

}

@property (nonatomic,retain) NSData * mediaData;                               //@synthesize mediaData=_mediaData - In the implementation block
@property (nonatomic,retain) NSString * fileExtension;                         //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSURL * mediaURL;                                 //@synthesize mediaURL=_mediaURL - In the implementation block
@property (nonatomic,retain) PFVideoComplement * videoComplement;              //@synthesize videoComplement=_videoComplement - In the implementation block
@property (assign,nonatomic) long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
-(NSString *)fileExtension;
-(NSURL *)mediaURL;
-(PFVideoComplement *)videoComplement;
-(NSData *)mediaData;
-(void)setMediaData:(NSData *)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(void)setVideoComplement:(PFVideoComplement *)arg1 ;
-(void)setMediaURL:(NSURL *)arg1 ;
-(void)_cleanupIfNeededMediaAtURL:(id)arg1 ;
-(id)serializedDictionary;
-(void)cleanupResources;
-(long long)mediaType;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
@end

