/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIRemoteTextEditing <NSObject>
@optional
-(void)remoteTextEditingSessionWithID:(id)arg1 attributesDidChange:(id)arg2;

@required
-(void)beginRemoteTextEditingSessionWithID:(id)arg1 attributes:(id)arg2 initialText:(id)arg3;
-(void)remoteTextEditingSessionWithID:(id)arg1 textDidChange:(id)arg2;
-(void)endRemoteTextEditingSessionWithID:(id)arg1;

@end

