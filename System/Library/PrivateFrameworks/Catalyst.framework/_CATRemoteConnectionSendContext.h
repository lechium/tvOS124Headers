/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CATRemoteConnectionSendContext <NSObject>
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten; 
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@required
-(unsigned long long)bytesWritten;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1;
-(unsigned long long)clientBytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1;
-(id)userInfo;

@end

