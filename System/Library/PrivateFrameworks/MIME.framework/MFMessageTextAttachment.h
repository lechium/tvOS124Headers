/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned long long)precedenceLevel;
-(void)setFileWrapper:(MFMessageFileWrapper *)arg1 ;
-(void)download;
-(id)initWithWrapper:(id)arg1 ;
-(void)setMimePart:(id)arg1 ;
-(BOOL)needsRedownload;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(id)persistentUniqueIdentifier;
-(id)textEncodingGuess;
-(id)mimePart;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(BOOL)hasBeenDownloaded;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(unsigned)approximateSize;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isPlaceholder;
-(MFMessageFileWrapper *)fileWrapper;
@end

