/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVContentKeySessionDelegate <NSObject>
@optional
-(void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
-(BOOL)contentKeySession:(id)arg1 shouldRetryContentKeyRequest:(id)arg2 reason:(id)arg3;
-(void)contentKeySession:(id)arg1 contentKeyRequestDidSucceed:(id)arg2;
-(void)contentKeySession:(id)arg1 didProvideRenewingContentKeyRequest:(id)arg2;
-(void)contentKeySessionDidGenerateExpiredSessionReport:(id)arg1;
-(void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
-(void)contentKeySession:(id)arg1 didProvidePersistableContentKeyRequest:(id)arg2;
-(void)contentKeySession:(id)arg1 didUpdatePersistableContentKey:(id)arg2 forContentKeyIdentifier:(id)arg3;

@required
-(void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;

@end

