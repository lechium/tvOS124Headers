/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _NSExtensionContextHosting <NSObject>
@required
-(void)_completeRequestReturningItems:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_cancelRequestWithError:(id)arg1 forExtensionContextWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)_loadItemForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_loadPreviewImageForPayload:(id)arg1 contextIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2;

@end

