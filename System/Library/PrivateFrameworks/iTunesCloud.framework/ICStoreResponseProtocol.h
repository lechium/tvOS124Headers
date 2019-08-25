/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError, ICStoreDialogResponse;


@protocol ICStoreResponseProtocol <NSObject>
@property (nonatomic,copy,readonly) NSError * serverError; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@required
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;

@end
