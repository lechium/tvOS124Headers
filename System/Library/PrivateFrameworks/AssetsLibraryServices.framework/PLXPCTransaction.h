/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLXPCTransaction : NSObject {

	const char* _identifier;

}
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)openXPCTransactionStatus;
+(id)transaction:(const char*)arg1 ;
+(void)initialize;
+(id)callStackSymbols;
-(void)stillAlive;
-(id)_statusDescription;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(const char*)arg1 ;
@end

