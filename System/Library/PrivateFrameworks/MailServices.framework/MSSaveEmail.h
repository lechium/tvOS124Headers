/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
+(void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)placeholderAttachmentForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
+(void)placeholderAttachmentForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_saveEmail:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

